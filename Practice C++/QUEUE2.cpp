#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);

    cout << "Front: " << q.front() << endl; // 5
    cout << "Back: " << q.back() << endl;   // 15

    q.pop();

    cout << "Front after pop: " << q.front() << endl; // 10
    cout << "Size: " << q.size() << endl;             // 2

    return 0;
}
