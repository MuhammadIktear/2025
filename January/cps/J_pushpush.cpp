#include<bits/stdc++.h>>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque<int>d;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(n%2==0){
            if(i%2==0)d.push_back(x);
            else d.push_front(x);
        }
        else{
            if(i%2==1)d.push_back(x);
            else d.push_front(x);
        }
    }
    for(auto u:d)cout<<u<<" ";
}