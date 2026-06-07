#include <iostream>
#include <vector>
using namespace std;

void allCombinations(vector<int> &arr, int idx, int tar, vector<vector<int>> &ans, vector<int> &combinations){
    if (tar < 0 || idx == arr.size()) {
        return;
    }

    if (tar == 0) {
        ans.push_back(combinations);
        return;
    } 

    combinations.push_back(arr[idx]);
    allCombinations(arr, idx, tar - arr[idx], ans, combinations);
    combinations.pop_back();

    allCombinations(arr, idx + 1, tar, ans, combinations);
}

int main() {
    vector<int> nums = {2, 3, 5};
    int target = 8;
    vector<vector<int>> combinations;
    vector<int> current;

    allCombinations(nums, 0, target, combinations, current);

    for (auto &comb : combinations) {
        for (int val : comb) {
            cout << val << " ";
        }
        cout << endl;
    }
}
