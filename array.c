#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int* ptr=arr;
	for(int i=0;i<5;i++){
		printf("%d %d\n",arr[i],ptr[i]);
	}
	printf("%d\n",arr[5]);
	return 0;
}
