//Write a function that receives an integer array and its size and prints the numbers that are divided by both first and last numbers

#include<stdio.h>

void modifiedArray(int arr[],int size){
    for(int i=0;i<size;i++){
        if((arr[i]%arr[0]==0)&&(arr[i]%arr[size-1]==0)){
            printf("%d ",arr[i]);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Array after dividing according to the condition : \n");
    modifiedArray(arr,n);
    return 0;
}