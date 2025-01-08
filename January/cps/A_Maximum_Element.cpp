#include<bits/stdc++.h>
using namespace std;
vector<int> getMax(const vector<string>& operations) {
    stack<int> primaryStack;
    stack<int> maxStack;
    vector<int> results;

    for (const string& operation : operations) {
        if (operation[0] == '1') {
            int value = stoi(operation.substr(2));
            primaryStack.push(value);

            if (maxStack.empty() || value >= maxStack.top()) {
                maxStack.push(value);
            } else {
                maxStack.push(maxStack.top());
            }
        } else if (operation[0] == '2') {
            if (!primaryStack.empty()) {
                primaryStack.pop();
                maxStack.pop();
            }
        } else if (operation[0] == '3') {
            if (!maxStack.empty()) {
                results.push_back(maxStack.top());
            }
        }
    }
    return results;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> operations(n);
    for (int i = 0; i < n; ++i) {
        getline(cin, operations[i]);
    }
    vector<int> results = getMax(operations);
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
