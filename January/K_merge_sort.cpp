#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int lsz = (m - l) + 1;
    int rsz = r - m;
    int L[lsz];
    int R[rsz];
    int k = 0;
    for (int i = l; i <= m; i++) {
        L[k] = arr[i];
        k++;
    }
    k = 0;
    for (int i = m + 1; i <= r; i++) {
        R[k] = arr[i];
        k++;
    }
    int i = 0, j = 0;
    int cur = l;
    while (i < lsz && j < rsz) {
        if (L[i] <= R[j]) {
            arr[cur] = L[i];
            i++;
        } else {
            arr[cur] = R[j];
            j++;
        }
        cur++;
    }
    while (i < lsz) {
        arr[cur] = L[i];
        i++;
        cur++;
    }
    while (j < rsz) {
        arr[cur] = R[j];
        j++;
        cur++;
    }
}

void levelOrderMergeSort(int arr[], int n) {
    queue<vector<int>> q;
    q.push(vector<int>(arr, arr + n)); 

    int person = 1;
    while (!q.empty()) {
        vector<int> current = q.front();
        q.pop();
        cout << person << " person is given with these numbers :";
        for (int num : current) {
            cout << num<< " ";
        }
        cout << endl;
        person++;
        if (current.size() > 1) {
            int mid = (current.size() + 1) / 2;
            vector<int> left(current.begin(), current.begin() + mid);
            vector<int> right(current.begin() + mid, current.end());
            q.push(left);
            q.push(right);
        }
    }
}

void merge_sort(int arr[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    levelOrderMergeSort(arr, n);
    merge_sort(arr, 0, n - 1);
    cout << "After Sorting the elements are :";
    for (int i = 0; i < n; i++) {
        cout  << " "<< arr[i];
    }
    cout << endl;
}
