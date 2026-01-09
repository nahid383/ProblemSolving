#include <iostream>
#include <set>
using namespace std;

int main() {
    // Declare a set of integers
    set<int> s;

    // Insert elements into the set
    s.insert(5);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(6);

    cout << "Set elements in sorted order:\n";
    for (auto val : s) {
        cout << val << " ";
    }
    cout << "\n\n";

    // lower_bound and upper_bound examples
    int x = 4;
    auto lb = s.lower_bound(x);
    if (lb != s.end()) {
        cout << "Lower bound of " << x << " is: " << *lb << "\n";
    } else {
        cout << "Lower bound not found\n";
    }

    auto ub = s.upper_bound(x);
    if (ub != s.end()) {
        cout << "Upper bound of " << x << " is: " << *ub << "\n";
    } else {
        cout << "Upper bound not found\n";
    }

    // Search for an element
    int searchVal = 3;
    if (s.find(searchVal) != s.end()) {
        cout << searchVal << " is present in the set\n";
    } else {
        cout << searchVal << " is not present in the set\n";
    }

    // Erase an element
    s.erase(3);
    cout << "After erasing 3, the set is:\n";
    for (auto val : s) {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}
