//Write a function that receives two strings containing capital letters only, as arguments and counts how many unique alphabets are present in both strings combined.

#include<stdio.h>
#include<string.h>

int unique(char str1[],char str2[]){
    int frq[26]={0};
    int count=0;
    for(int i=0;str1[i]!='\0';i++){
        char current=str1[i];
        int index=current-'A';
        frq[index]=1;
    }
    for(int i=0;str2[i]!='\0';i++){
        char current=str2[i];
        int index=current-'A';
        frq[index]=1;
    }
    for(int i=0;i<26;i++){
        if(frq[i]==1){
            count++;
        }
    }
    return count;
}

int main(){
    char str1[50],str2[50];
    scanf("%s %s",&str1,&str2);
    int result=unique(str1,str2);
    printf("%d",result);
    return 0;
}