//Write a function that receives an array of strings as arguments and calculates the sum of ASCII value of all the characters for each string

#include<stdio.h>
#include<string.h>

void sumASCII(char str[][50],int n){
    int i;
    for(i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<strlen(str[i]);j++){
            sum+=(int)str[i][j];
        }
        printf("String : %s , Sum : %d\n",str[i],sum);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    char str[n][50];
    for(int i=0;i<n;i++){
        scanf("%s",&str[i]);
    }
    sumASCII(str,n);
    return 0;
}