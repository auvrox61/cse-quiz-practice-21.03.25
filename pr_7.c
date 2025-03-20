// Print Missing Alphabets

#include<stdio.h>
#include<string.h>

void missingAlphabets(char str[]){
    int present[26]={0};
    for(int i=0;str[i]!='\0';i++){
        present[str[i]-'A']++;
    }
    for(int i=0;i<26;i++){
        if(!present[i]){
            printf("%c",'A'+i);
        }
    }
}

int main(){
    char str[50];
    scanf("%s",str);
    missingAlphabets(str);
    return 0;
}