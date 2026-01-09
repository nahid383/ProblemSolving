#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

void smallestlargest(int num[], int size, int &smallest, int &largest) {
    smallest = INT_MAX;
    largest = INT_MIN;
    for(int i = 0; i < size; i++) {
        smallest = min(num[i], smallest);
        largest = max(num[i], largest);
    }
}

int main() {
    int num[] = {10,20,40,35,69,67,58,59,9,8,4,125};
    int size = sizeof(num)/sizeof(num[0]);
    int smallest, largest;
    smallestlargest(num, size, smallest, largest);
    cout<<"Smallest = "<<smallest<<endl;
    cout<<"Largest = "<<largest<<endl;
    return 0;
}
