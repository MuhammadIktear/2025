#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec={0,0,0,0,0,0,1,1,1,1,1,1};
    int indx=upper_bound(vec.begin(),vec.end(),0)-vec.begin();
    cout<<indx-1<<" "<<indx<<endl;
}