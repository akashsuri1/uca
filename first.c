#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int binarysearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}
void swap(int* a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                flag=true;
            }
        }
        if(!flag){
            return;
        }
    }
    return;
}
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int* arr=(int*)(malloc(n*(sizeof(int))));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    print(arr,n);
    int target;
    scanf("%d",&target);
    printf("%d\n",binarysearch(arr,n,target));
    return 0;
}