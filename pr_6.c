//Write a function that receives an integer array (containing only single digit integer) and its size as arguments and counts the occurrence of each number.

#include<stdio.h>

void occurence(int arr[],int size){
    int count[10]={0};
    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<10;i++){
        if(count[i]>0){
            printf("%d occured for %d times in this array",i,count[i]);
        }
    }
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    occurence(arr,size);
    return 0;
}