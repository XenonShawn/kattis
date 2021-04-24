#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int paperSizes;
    cin >> paperSizes;

    double tapeRequired = pow(2, -3.0/4.0);
    unsigned paperRequired = 2;

    for (int i = 2; i <= paperSizes; i++) {
        unsigned havePaper;
        cin >> havePaper;
        if (havePaper >= paperRequired) {
            cout << setprecision(10) << tapeRequired;
            exit(0);
        } else {
            paperRequired -= havePaper;
            tapeRequired += paperRequired * pow(2, (-1 - 2 * i) / 4.0);
            paperRequired *= 2;
        }
    }
    cout << "impossible";
}
