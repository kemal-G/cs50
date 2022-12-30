#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string txt=get_string("Text:");//girdi
    int l=0;//uzunluk
    int s=0;//cumle
    int w=1;//kelime
    for(int i=0;i<strlen(txt);i++){
        if((char) txt[i]==46||(char) txt[i]==33||(char) txt[i]== 63){//".,!,?" ise
            s++;}// cumle sayisi
        if((char) txt[i]==32){//bosluk
            w++;}
        if((char) txt[i]<=122&&(char) txt[i]>=65){//harf
            l++;
        }
    }
    double kelime_harf_orani=((float)l/(float)w)* (float) 100;//formul
    double kelime_cumle_orani=((float)s/(float)w)* (float) 100;
    double sonuc=(0.0588*kelime_harf_orani) - (0.296 *kelime_cumle_orani)- 15.8;
    int rounded=round(sonuc);
    //printf(" %i %i %i\n",l,s,w);
    printf("%f\n",sonuc);
    //printf("%i\n",rounded);
    if(rounded<=1){printf("Before Grade 1\n");}
    if(rounded>=16){printf("Grade 16+\n");}
    if(rounded>1&&rounded<16){printf("%s%i\n","Grade ",rounded);}
}