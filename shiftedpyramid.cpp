#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << ' ';
        }
        // Print x's
        for (int j = 0; j <= i; j++) {
            cout << 'x';
        }
        cout << '\n';
    }

    return 0;
}
