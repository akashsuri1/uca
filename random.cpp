#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int col;
    cin>>col;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    int price,quantity;
    for(int i=0;i<n;i++){
        cin>>price>>quantity;
        pq.push(make_pair(price,quantity));
    }
    int ans=0;
    int mod=1e9+7;
    while(target>0){
        int price=pq.top().first;
        int quantity=pq.top().second;
        pq.pop();
        if(quantity<=target){
            ans=(ans%mod+(quantity*price)%mod)%mod;
            target-=quantity;
        }else{
            ans=(ans%mod+(target*price)%mod)%mod;
            target=0;
        }

    }
    cout<<ans<<endl;
    return 0;
}