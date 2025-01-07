#include<bits/stdc++.h>>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    deque<pair<int,int>>dq;
    for(int i=0;i<n;i++){
        dq.push_back({0,i+1});
    }
    // for(auto u:dq)cout<<u.first<<" "<<u.second;
    // cout<<endl;
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            char c;
            cin>>c;
            if(c=='R'){
                pair<int,int>p=dq.front();
                dq.push_front({p.first,p.second+1});
                dq.pop_back();
            }
            if(c=='L'){
                pair<int,int>p=dq.front();
                dq.push_front({p.first,p.second-1});
                dq.pop_back();
            }
            if(c=='U'){
                pair<int,int>p=dq.front();
                dq.push_front({p.first+1,p.second});
                dq.pop_back();
            }
            if(c=='D'){
                pair<int,int>p=dq.front();
                dq.push_front({p.first-1,p.second});
                dq.pop_back();
            }
                    // for(auto u:dq)cout<<u.first<<","<<u.second<<" ";
                    // cout<<endl;
        }
        else{
            int num;
            cin>>num;
            cout<<dq[num-1].second<<" "<<dq[num-1].first<<endl;
        }
    }
}