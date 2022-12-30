/*
  Input: hykoooooooo 9
  Output: hyk
  
  Input: adulte 2
  Output: adlt
  
 */

#include<stdio.h>
#include<stdlib.h>

int isVowel(char w){
    if(w=='a' || w=='e' || w=='i' || w=='o' || w=='u' || w=='A' || w=='E' || w=='I' || w=='O' || w=='U'){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    char s[100];
    int n,count=0;
    scanf("%s %d",s,&n);
    int k=strlen(s);
    for(int i=0;i<k;i++){
        char w=s[i];
        if(isVowel(w)){
            count++;
        }
    }//printf("%d",count);
    int q=0;
    int r=count-n;
    for(int i=0;i<k;i++){
        char w=s[i];
        if(isVowel(w)){
            q++;
            if(q<=r){
            printf("%c",w);
            }
        }else{
            printf("%c",w);
        }
    }
}
