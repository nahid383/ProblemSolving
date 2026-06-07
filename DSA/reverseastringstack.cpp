#include<bits/stdc++.h>
using namespace std;

#define MAX 101
char stackArray[MAX];
int Top = -1;

bool isStackEmpty() {
    return Top == -1;
}

bool isStackFull() {
    return Top >= MAX-1;
}

void pushToStack(char element) {
    if(isStackFull()){
        cout<<"Stack is full";
    } else{
        Top++;
        stackArray[Top]=element;
    }
}

char popFromStack() {
    if(isStackEmpty()){
        cout<<"Stack is empty";
        return -1;
    } else{
        char popped = stackArray[Top];
        Top--;
        return popped;
    }
}

int main(){
    string str="Nahid";
    int n = str.length();

    for(int i=0; i<n; i++){
        char cChar=str[i];
        pushToStack(cChar);
    }

    string reversed;
    while(!isStackEmpty()){
        reversed.push_back(popFromStack());
    }
    cout<<reversed<<"\n";
    return 0;
}