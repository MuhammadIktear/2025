#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ss = "";
    stack<char> st;
    for (auto c : s)
    {
        if (c == '(')
        {
            st.push(c);
            ss += c;
        }
        else if (c == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop(); 
                ss += c; 
            }
            else
            {
                ss = '(' + ss;
                ss += ')'; 
            }
        }
    }
    while (!st.empty())
    {
        st.pop();
        ss += ')';
    }

    cout << ss << endl;

    return 0;
}
