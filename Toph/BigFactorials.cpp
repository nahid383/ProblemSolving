#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long result = 1;

    for (int i = 2; i <= N; i++) {
        result *= i;
        while (result % 10 == 0)
            result /= 10;
        result %= 10000;
    }

    cout << result << endl;
    return 0;
}
