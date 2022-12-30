

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int sayi_mi(string n){
    for(int i=0;i<strlen(n);i++){
        if((int)n[i]<48||(int)n[i]>57){return false;}}
    return true;
}

int main(int argc, string argv[])
{
    string buyuk_alfabe="ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string kucuk_alfabe="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    if(argc==2&&sayi_mi(argv[1])){
        int rot_anahtar= atoi(argv[1])%26;//argv yi int e donustur
        string girdi= get_string("plaintext:");
        //char cipher[strlen(girdi)];
        printf("ciphertext:");
        for(int i=0;i<strlen(girdi);i++){
            if((int)girdi[i]>=97&&(int)girdi[i]<=122){//kucuk harf ise
                int t=girdi[i]-97;
                printf("%c",kucuk_alfabe[t+rot_anahtar]);
                //cipher[i]=kucuk_alfabe[t+rot_anahtar];
                //strncat(cipher, &kucuk_alfabe[t+rot_anahtar], 1);
            }
            if((int)girdi[i]>=65&&(int)girdi[i]<=90){//buyuk harf ise
                int t=girdi[i]-65;
                printf("%c",buyuk_alfabe[t+rot_anahtar]);
                //cipher[i]=buyuk_alfabe[t+rot_anahtar];
                //strncat(cipher, &buyuk_alfabe[t+rot_anahtar], 1);
            }
            if(((int)girdi[i]<97&&(int)girdi[i]>90)||((int)girdi[i]<65||(int)girdi[i]>122)){//ozel karakter ise
                printf("%c",girdi[i]);
                //cipher[i]=girdi[i];
                //strncat(cipher,&girdi[i],1);
                }
        }
        printf("\n");

        }
    else{printf("%s\n","Usage: ./caesar key");return 1;}
}