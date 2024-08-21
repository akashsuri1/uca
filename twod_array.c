#include<stdio.h>
int main(){
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	printf("%d\n",*(arr+5));
	return 0;
}
