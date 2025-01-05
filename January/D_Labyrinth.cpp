#include<bits/stdc++.h>
using namespace std;
char direction[1000][1000];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
char dir[] = {'R', 'L', 'D', 'U'};
int n, m;

bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}
string getPath(int x, int y, int Ax, int Ay) {
    string path = "";
    while (x != Ax || y != Ay) {
        char dir = direction[x][y];
        path += dir;
        if (dir == 'R') y--;
        else if (dir == 'L') y++;
        else if (dir == 'D') x--;
        else if (dir == 'U') x++;
    }
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    cin >> n >> m;
    pair<int, int> A, B;
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'A') A = {i, j};
            if (arr[i][j] == 'B') B = {i, j};
        }
    }
    int vst[n][m], cost[n][m];
    memset(vst, 0, sizeof(vst));
    memset(direction, -1, sizeof(direction));
    queue<pair<int, int>> q;
    q.push(A);
    vst[A.first][A.second] = 1;
    cost[A.first][A.second] = 0;

    while (!q.empty()) {
        auto f = q.front();
        q.pop();
        int x = f.first, y = f.second;
        for (int i = 0; i < 4; i++) {
            int ci = x + dx[i], cj = y + dy[i];
            if (isValid(ci, cj) && !vst[ci][cj] && arr[ci][cj] != '#') {
                q.push({ci, cj});
                vst[ci][cj] = 1;
                cost[ci][cj] = 1 + cost[x][y];
                direction[ci][cj] = dir[i];
            }
        }
    }

    if (!vst[B.first][B.second]) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << cost[B.first][B.second] << endl;
        cout << getPath(B.first, B.second, A.first, A.second) << endl;
    }
}
