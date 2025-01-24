//lower bound
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={7,7,9,10,10};
    int l=0;
    int r=vec.size();
    int x=6;
    while(l<r){
        int mid=l+r>>1;
        if(vec[mid]<x)l=mid+1;
        else if(vec[mid]>=x)r=mid;
    }
    cout<<l<<endl;
}