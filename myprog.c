#include<stdio.h>
#include"list.h"
int main(){
	int arr[10];
	printf("%d\n",arr[0]);
	push(arr,0,10);
	push(arr,1,20);
	for(int i=0;i<2;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
