#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> arr(a);
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    sort(arr.rbegin(), arr.rend());
    int ans = 0;
    int last=a-1;
    for(int i=0;i<=last;i++){
        if(arr[i]+arr[last]<=b)ans++,last--;
        else ans++;
    }
    cout << ans << endl;
    return 0;
}
