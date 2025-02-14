#include <iostream>

using namespace std;

// Function to compute sum of digits of a number
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        bool found = false;

        // Special case: If x is a multiple of 9 and y is 1, there exists a valid `n`
        if (y == 1 && x % 9 == 0) {
            found = true;
        } else {
            int n = 1;
            while (n <= 1e6) { // Dynamic limit
                if (digitSum(n) == x && digitSum(n + 1) == y) {
                    found = true;
                    break;
                }
                n++;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}
