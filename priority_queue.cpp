#include<bits/stdc++.h>
using namespace std;
class priority{
    public:
        vector<int> temp;
        int size;
        priority(){
            size=0;
        }
        void insert(int element){
            temp.push_back(element);
            int pos=size;
            while(pos>0 && temp[(pos-1)/2]<temp[pos]){
                swap(temp[pos],temp[(pos-1)/2]);
                pos=(pos-1)/2;
            }
            size++;
        }
        void heapify(int index){
            int left=2*index+1;
            int right=2*index+2;
            int largest=index;
            if(left<size && temp[largest] <temp[left]){
                largest=left;
            }
            if(right<size && temp[largest]<temp[right]){
                largest=right;
            }
            if(largest!=index){
                swap(temp[largest],temp[index]);
                heapify(largest);
            }
        }
        void deleteTop(){
            swap(temp[0],temp[size-1]);
            size--;
            heapify(0);
        }
        int top(){
            if(!isempty()){
                return temp[0];
            }
            return -1;
        }
        bool isempty(){
            if(size==0){
                return true;
            }else{
                return false;
            }
        }
};
int main(){
    priority p1;
    int n;
    cin>>n;
    while(n--){
        int element;
        cin>>element;
        p1.insert(element);
    }
}