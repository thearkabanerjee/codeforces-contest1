#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Top half (including middle)
    for (int i = 0; i < N; i++) {
        // Leading spaces
        for (int s = 0; s < i; s++) {
            cout << ' ';
        }

        cout << '>';

        // Space between arrows
        if (i > 0) {
            cout << ' ';
            for (int k = 0; k < 2 * i - 1; k++) {
                cout << ' ';
            }
            cout << '>';
        }

        cout << '\n';
    }

    // Bottom half
    for (int i = N - 2; i >= 0; i--) {
        // Leading spaces
        for (int s = 0; s < i; s++) {
            cout << ' ';
        }

        cout << '>';

        // Space between arrows
        if (i > 0) {
            cout << ' ';
            for (int k = 0; k < 2 * i - 1; k++) {
                cout << ' ';
            }
            cout << '>';
        }

        cout << '\n';
    }

    return 0;
}
