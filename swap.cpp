#include<bits/stdc++.h>
using namespace std;
bool ispowerof2(int n){
    return (n&-n)==n;
}
int sign(int n){
    return n>>31 | !(!(n));
}
int invert(int n,int p,int x){
    int mask=(~(-1<<p))<<(x-1);
    return n^mask;

}
int main(){
    // string orignal="11010101";
    // int ans=0;
    // for(int i=orignal.size()-1;i>=0;i--){
    //     if(orignal[i]=='1')
    //         ans+=pow(2,orignal.size()-i-1);
    // }
    // int padding=~(-1<<4);
    // int a=ans&padding;
    // int b=ans&(padding<<4);
    // a=a<<4;
    // b=b>>4;
    // int result=a|b;
    // string an="";
    // while(result!=0){
    //     if(result&1)
    //         an.push_back('1');
    //     else
    //         an.push_back('0');
    //     result=result>>1;
    // }
    // reverse(an.begin(),an.end());
    // cout<<an<<endl;
    int n;
    cin>>n;
    cout<<invert(n,2,3)<<endl;
    return 0;
}