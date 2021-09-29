#include<stdio.h>
#include<stdlib.h>

void show_arr(int arr[],int size){
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}

int insertionn(int arr[],int size,int element,int index,int capacity){
    int i;
    if(size>=capacity)
        return -1;
        
    for(i=size-1;i>=index;i--)
            arr[i+1]=arr[i];

    arr[index]=element;
    return 1;
    
}


int deletion(int arr[],int size,int index){
    int i,element;
    if(index>=size)
        return -1;
    element=arr[index];
    
    for(i=index;i<size-1;i++)
        arr[i]=arr[i+1];
    return element;
     
}


int main(){
    int capacity=100, arr[capacity],size,element,i,index,x;
    printf("Enter size of array(within range 100): ");
    scanf("%d",&size);
    printf("enter array elements:\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    printf("enter element to be inserted & location(space separated value): ");
    scanf("%d %d",&element,&index);

    insertionn(arr,size,element,index,capacity);
    size+=1;
    show_arr(arr,size);

    x=deletion(arr,size,index);
    printf("\ndeleted element is %d at %d location.\n",x,index);
    size-=1;
    show_arr(arr,size);
    return 0;
}