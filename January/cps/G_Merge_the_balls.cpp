#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    stack<int>st;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        int x=arr[i];
        if(st.size()>0&&x==st.top()){
            while(!st.empty()&&x==st.top()){
                st.pop();
                x=x+1;
            } 
            st.push(x);              
        }
        else{
            st.push(x);
        }
    }
    cout<<st.size()<<endl;
}