#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    char* ptr=malloc(n);
    for(int i=0;i<n;i++){
        ptr[i]='\0';
    }
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    char* str="hello world";
    printf("%s\n",str);
    return 0;
}