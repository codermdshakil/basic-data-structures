#include <iostream>
using namespace std;

void printResult(int n) {
    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < mid) {
                if (j == i) {
                    cout << "\\";
                } else if (j == n - i - 1) {
                    cout << "/";
                } else {
                    cout << " ";
                }
            } else if (i == mid) {
                if (j == mid) {
                    cout << "X";
                } else {
                    cout << " ";
                }
            } else {
                if (j == n - i - 1) {
                    cout << "/";
                } else if (j == i) {
                    cout << "\\";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printResult(n);
    return 0;
}
