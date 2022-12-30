// Implements a dictionary's functionality
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

//count
unsigned int count;

//hashed value
unsigned int hashed;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    hashed=hash(word);
    node *cur=table[hashed];

    //recurse linked list
    while(cur!=NULL)
    {
        if(strcasecmp(word,cur->word)==0){
             return true;
        }
        else
        {
            cur=cur->next;
        }
    }
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    FILE *file=fopen(dictionary, "r");
    if(file==NULL){printf("cant open ");return false;}
    // TODO
    char word[LENGTH+1];
    //
    while(fscanf(file, "%s", word)!=EOF)
    {
        node *n=malloc(sizeof(node));
        //check malloc
        if(n==NULL)
        {
            printf("malloc unsuccesfull");
            return false;
        }
        //cp word
        strcpy(n->word,word);
        hashed=hash(word);
        n->next=table[hashed];
        table[hashed]=n;
        count++;
    }
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    if(count>0)
    {
        return count;
    }
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    //recursive unload
    for(int i=0;i<26;i++)
    {
        node *cur=table[i];
        while(cur)
        {
            node *temp=cur;
            cur=cur->next;
            free(temp);
        }
        //end of
        if(cur==NULL&& i == 26-1)
        {
            free(cur);
            return true;

        }
    }
    return false;
}
