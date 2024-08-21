#include<stdio.h>
#include<stdlib.h>
void merge(int* arr,int lower,int upper,int mid){
	int *newarr=(int *)malloc((upper-lower+1)*sizeof(int));
	int left=lower;
	int right=mid+1;
	int index=0;
	while(left<=mid && right<=upper){
		if(arr[left]<arr[right]){
			newarr[index++]=arr[left++];
		}else{
			newarr[index++]=arr[right++];
		}
	}
	while(left<=mid){
		newarr[index++]=arr[left++];
	}
	while(right<=upper){
		newarr[index++]=arr[right++];
	}
	for(int i=lower;i<=upper;i++){
		arr[i]=newarr[i-lower];
	}
	free(newarr);
}
void merge_sort(int* arr,int lower,int upper){
	if(lower<upper){
		int mid=lower+(upper-lower)/2;
		merge_sort(arr,lower,mid);
		merge_sort(arr,mid+1,upper);
		merge(arr,lower,upper,mid);
	}
}
void print(int* arr,int N){
	for(int i=0;i<N;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[]={7,6,5,4,3,2,1};
	merge_sort(arr,0,6);
	print(arr,7);
	return 0;
}
