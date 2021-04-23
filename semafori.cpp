#include <iostream>

using namespace std;

int main(void) {
    cin.tie(nullptr);
    int N, L, D, R, G, time = 0;
    cin >> N >> L;
    for (int i = 0; i < N; i++) {
        cin >> D >> R >> G;
        time += D;
        int phase = time % (R + G);
        if (phase < R) time += R - phase;
        time -= D;
    }
    cout << time + L;
}
