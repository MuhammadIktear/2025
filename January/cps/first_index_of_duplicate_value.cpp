#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,7,7,8,9};
    int l=0;
    int r=vec.size()-1;
    int x=7;
    while(l<r){
        int mid=l+r>>1;
        if(vec[mid]<x)l=mid+1;
        else if(vec[mid]>=x)r=mid;
    }
    cout<<l<<endl;
}