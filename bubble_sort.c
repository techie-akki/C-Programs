#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int bubble_sort(int *arr,int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){                      //no. of passes
        int sorted=1;
        for(j=0;j<size-i-1;j++){               //no. of comparisons
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sorted=0;
            }
        }
        if(sorted)
            return;
    }
}

void display(int *arr,int size){
    int i;
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int main(){
    int size,i,*arr;
    printf("Enter size of array: ");
    scanf("%d",&size);
    arr=(int *)malloc(size*(sizeof(int)));
    printf("\nEnter elements:\n ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Before sort:\n");
    display(arr,size);
    bubble_sort(arr,size);
    printf("After sort:\n");
    display(arr,size);
    return 0;
}