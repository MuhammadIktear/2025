#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&v){
    int cur_ind=v.size()-1;
    while(cur_ind!=0){
        int par=(cur_ind-1)/2;
        if(v[par]>v[cur_ind]){
            swap(v[par],v[cur_ind]);
            cur_ind=par;
        }
        else break;
    }
}

void del(vector<int>&v){
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur=0;
    while(true){
        int left_ind=cur*2+1;
        int right_ind=cur*2+2;
        if(left_ind<v.size()&&right_ind<v.size()){
            if(v[left_ind]<=v[right_ind]&&v[left_ind]<v[cur]){
                swap(v[cur],v[left_ind]);
                cur=left_ind;
            }
            else if(v[left_ind]>=v[right_ind]&&v[right_ind]<v[cur]){
                swap(v[cur],v[right_ind]);
                cur=right_ind;
            }
            else break;
        }
        else if(left_ind<v.size()){
            if(v[left_ind]<v[cur]){
                swap(v[cur],v[left_ind]);
                cur=left_ind;                
            }
            else break;
        }
        else if(left_ind<v.size()){
            if(v[right_ind]<v[cur]){
                swap(v[cur],v[right_ind]);
                cur=right_ind;                
            }
            else break;
        }
        else break;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        string s;
        cin>>s;
        if(s=="insert"){
            int x;
            cin>>x;
            v.push_back(x);
            insert(v);
        }
        else if(s=="delMin"){
            if(v.size()>0){
                del(v);
            }
        }
        else{
            if(v.size()>0)
                cout<<v[0]<<endl;
            else cout<<"Empty"<<endl;
        }
    }
}
