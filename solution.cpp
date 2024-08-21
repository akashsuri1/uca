#include<bits/stdc++.h>
using namespace std;
int longest(string s){
    int ans=INT_MIN;
    unordered_map<char,int> mpp;
    int start=0;
    int end=0;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
        if(mpp.size()>2){
            while(mpp.size()>2){
                mpp[s[start]]--;
                if(mpp[s[start]]==0){
                    mpp.erase(s[start]);
                }
                start++;
            }
        }
        ans=max(i-start+1,ans);
    }
    return ans;

}
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    cout<<longest(s)<<endl;
    return 0;
}