#include <bits/stdc++.h>
#define yes cout << "yes\n"
#define no cout << "no\n"
#define ll long long
#define e endl
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int count = 0;
    string res = "";

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (!res.empty() && res.back() == c) {
            res.pop_back();
            count++;
        } else {
            res += c;
        }
    }

    if (count % 2 == 0) {
        no;
    } else {
        yes;
    }

    return 0;
}
