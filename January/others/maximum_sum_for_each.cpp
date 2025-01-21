#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &u:v)cin>>u;
    int sum1=0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        sum1+=v[i];
        int mx=sum1;
        int sum=sum1;
        int k=0;
        for(int j=i+1;j<n;j++){
            sum+=v[j];
            sum-=v[k];
            k++;
            mx=max(mx,sum);
        }
        ans.push_back(mx);
    } 
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }  
}