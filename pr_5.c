//Write a function that receives two integer arrays and their size as arguments and creates a new array by combining the contents of both arrays. The elements of the first array are added first.

#include<stdio.h>

void mergedArrays(int arr1[],int size1,int arr2[],int size2,int merged[]){
    int i;
    for(i=0;i<size1;i++){
        merged[i]=arr1[i];
    }
    for(int j=0;j<size2;j++){
        merged[i++]=arr2[j];
    }
}

int main(){
    int size1,size2;
    scanf("%d %d",&size1,&size2);
    int arr1[size1],arr2[size2],merged[size1+size2];
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<size1;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<size2;i++){
        printf("%d ",arr2[i]);
    }
    mergedArrays(arr1,size1,arr2,size2,merged);
    printf("\n");
    for(int i=0;i<size1+size2;i++){
        printf("%d ",merged[i]);
    }
    return 0;
}