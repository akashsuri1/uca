#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",(n>>31)-(-n>>31));
    return 0;
}