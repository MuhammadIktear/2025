#include<bits/stdc++.h>
using namespace std;
const int mx=1e6+123;
void merge(vector<int>&arr,int l,int m,int r){
    int lsz=(m-l)+1;
    int rsz=r-m;
    int L[lsz];
    int R[rsz];
    int k=0;
    for(int i=l;i<=m;i++){
        L[k]=arr[i];
        k++;
    }
    k=0;
    for(int i=m+1;i<=r;i++){
        R[k]=arr[i];
        k++;
    }
    int i=0,j=0;
    int cur=l;
    while(i<lsz&&j<rsz){
        if(L[i]<=R[j]){
            arr[cur]=L[i];
            i++;
        }
        else{
            arr[cur]=R[j];
            j++;        
        }
        cur++;
    }
    while(i<lsz){
        arr[cur]=L[i];
        i++;
        cur++;
    } 
    while(j<rsz){
        arr[cur]=R[j];
        j++;
        cur++;
    }       
}

void merge_sort(vector<int>&arr,int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    vector<int>arr;
    int num;
    while (cin >> num) {
        arr.push_back(num);
    }
    int n=arr.size();
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}