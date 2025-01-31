#include<bits/stdc++.h>
using namespace std;
int arr[9]={1, 3, 5, 5, 5, 5, 67, 123, 125};
int isOK1(int m){
    if(arr[m]<5)return 0;
    else return 1;
}
int isOK2(int m){
    if(arr[m]<=5)return 0;
    else return 1;
}
int main(){
    int l=0;
    int r=9;
    while(l<r){
        int mid=l+r>>1;
        if(isOK1(mid)==0){
            l=mid+1;
        }
        else r=mid;
    }
    cout<<l<<" ";
    l=0,r=9;
    while(l<r){
        int mid=l+r>>1;
        if(isOK2(mid)==0){
            l=mid+1;
        }
        else r=mid;
    }
    cout<<l-1<<endl;

}