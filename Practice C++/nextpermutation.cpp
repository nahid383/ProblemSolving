#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s = "abc";

    // First, sort to ensure starting from the lowest permutation
    sort(s.begin(), s.end());

    // Print all permutations using while loop
    while (true) {
        for (auto x : s) {
            cout << x;
        }
        cout << endl;

        // Break if no next permutation
        if (!next_permutation(s.begin(), s.end())) break;
    }

    return 0;
}
