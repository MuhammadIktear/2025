//x^2+ax=b
#include<bits/stdc++.h>
using namespace std;
int a,b;
int isOK(double x){
    if((x*x)+(a*x)<b)return 0;
    else return 1;
}
int main(){
    cin>>a>>b;
    double l=0,r=max(1.0,sqrt(b)+abs(a));
    while(r-l>0.000001){
        double mid = (l + r) / 2.0;
        if(isOK(mid)==0)l=mid;
        else r=mid;
    }
    cout<<l<<endl;
}