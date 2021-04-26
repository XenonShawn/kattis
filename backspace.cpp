#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<char> text;
    char ch;
    while (cin >> ch) {
        if (ch == '<') text.pop_back();
        else text.push_back(ch);
    }
    for (auto &i: text) cout << i;
}