#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(nullptr);
    int R, C, Zr, Zc;
    cin >> R >> C >> Zr >> Zc;

    string row;
    for (int r = 0; r < R; r++) {
        cin >> row;
        for (int i = 0; i < Zr; i++) {
            for (auto &ch : row) {
                for (int j = 0; j < Zc; j++) cout << ch;
            }
            cout << '\n';
        }
    }
}
