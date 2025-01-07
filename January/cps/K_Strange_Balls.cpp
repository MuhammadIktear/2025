#include<bits/stdc++.h>>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    stack<pair<int, int>> d;
    int sz = 0; 
    for (int i = 0; i < n; i++) {
        if (!d.empty() && d.top().first == a[i]) {
            d.top().second += 1;
            sz++;
            if (d.top().second == a[i]) {
                sz -= a[i];
                d.pop(); 
            }
        } else {
            d.push({a[i], 1});
            sz++;
        }
        cout << sz << endl; 
    }
    return 0;
}