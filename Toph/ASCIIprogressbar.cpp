#include <iostream>
using namespace std;

int main() {
    float p;
    cin >> p;
    int value = p;
    char ch = '%';
    int div = value / 10;

    cout << "[";
    for (int i = 0; i < div; i++) {
        cout << "+";
    }
    int rem = 10 - div;
    for (int i = 0; i < rem; i++) {
        cout << ".";
    }
    cout << "] " << value << ch;

    return 0;
}
