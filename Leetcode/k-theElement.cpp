//This is for lletcode solution
// class Solution{
// public:
//     int findKthLargest(vector<int>& nums,int k){
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()-k];
//     }
// };

//This is actual solve
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
public:
    int findKthLargest(vector<int>& nums,int k){
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};
int main(){
    Solution sol;
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    cout<<sol.findKthLargest(nums,k)<<endl;
    return 0;
}
