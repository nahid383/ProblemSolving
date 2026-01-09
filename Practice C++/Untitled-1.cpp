#include <iostream>
#include <cmath>
using namespace std;

bool is_square(int l, int r, int d, int u) {
    // The points are (-l, 0), (r, 0), (0, -d), (0, u).
    // For the points to form a square:
    // The distance between (l, 0) and (r, 0) should be equal to
    // the distance between (0, -d) and (0, u), and the diagonals
    // formed by the points should also be equal.

    int x1 = -l, y1 = 0;
    int x2 = r, y2 = 0;
    int x3 = 0, y3 = -d;
    int x4 = 0, y4 = u;
    
    // Calculate squared distances to avoid floating point precision issues
    int d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2); // distance between (-l, 0) and (r, 0)
    int d2 = (x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4); // distance between (0, -d) and (0, u)

    // For a square, these distances must be equal
    if (d1 != d2) {
        return false;
    }

    // Now check the diagonals
    int diagonal1 = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4); // diagonal from (-l, 0) to (0, u)
    int diagonal2 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3); // diagonal from (r, 0) to (0, -d)

    // For a square, the diagonals must be equal
    return diagonal1 == diagonal2;
}

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u; // Read the four integers for each test case

        // Check if the points form a square
        if (is_square(l, r, d, u)) {
            cout << "Yes" << endl; // Can form a square
        } else {
            cout << "No" << endl; // Cannot form a square
        }
    }

    return 0;
}