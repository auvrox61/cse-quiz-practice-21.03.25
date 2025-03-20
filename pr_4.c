//Write a user defined function that receives one string and beginning address another character array as arguments. The function stores only the vowels from the given string to the character array. The function also returns the number of vowels found in the string

#include<stdio.h>
#include<string.h>

int vowelExtractor(char str[],char vowel[]){
    int index=0;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(strchr("aeiouAEIOU",str[i])){
            vowel[index++]=str[i];
            count++;
        }
    }
    vowel[index]='\0';
    return count;
}

int main(){
    char str[100];
    char vowels[50];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int result=vowelExtractor(str,vowels);
    printf("Extracted Vowels : %s\n",vowels);
    printf("%d\n",result);
    return 0;
}