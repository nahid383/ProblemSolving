#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;  
    long long array[n];

    for (long long i = 0; i < n; i++) {
        cin >> array[i];
    }

    unordered_map<long long, long long> prefix_sum_map;  
    long long current_sum = 0;
    long long subarrays = 0;

  
    prefix_sum_map[0] = 1;

    
    for (long long i = 0; i < n; i++) {
        current_sum += array[i];  

     
        if (prefix_sum_map.find(current_sum - x) != prefix_sum_map.end()) {
            subarrays += prefix_sum_map[current_sum - x];  
        }

       
        prefix_sum_map[current_sum]++;
    }

    cout << subarrays << endl; 
    return 0;
}
