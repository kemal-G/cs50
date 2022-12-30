#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    for(int i=0;i<strlen(word1);i++){//tolowercase
        word1[i]=tolower(word1[i]);}
    for(int i=0;i<strlen(word2);i++){
        word2[i]=tolower(word2[i]);}
    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    //printf("%i\n",score1);
    //printf("%i\n",score2);
    // TODO: Print the winner
    if(score1>score2){printf("Player 1 wins!\n");}
    if(score2>score1){printf("Player 2 wins!\n");}
    if(score1==score2){printf("Tie!\n");}
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int sonuc=0;
    for(int i=0;i<strlen(word);i++){
        if((int) word[i]<=122&& (int) word[i]>=65){
        int tmp= ((char) word[i])-97;
        //printf("%i\n",tmp);
        sonuc+=POINTS[tmp];
        }
        else{sonuc+=0;}
    }
    return sonuc;
}
