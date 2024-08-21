#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int sub(int a,int b){
    return a-b;
}
int main(){
    int(*ptr[])(int,int)={add,sub,mul,div};
    for(int i=0;i<4;i++){
        printf("%d\n",ptr[i](3,4));
    }
    return 0;
}