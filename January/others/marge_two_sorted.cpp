#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r){
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
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    merge(a,0,3,n-1);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}