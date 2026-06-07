#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cin >> password;
    password[0] = toupper(password[0]);
    string result = "";
    for(int i = 0; i < password.length(); i++) {
        if(password[i] == 's') {
            result += '$';
        } else if(password[i] == 'i') {
            result += '!';
        } else if(password[i] == 'o') {
            result += "()";
        } else {
            result += password[i];
        }
    }
    result += '.';
    cout << result << endl;
    return 0;
}
