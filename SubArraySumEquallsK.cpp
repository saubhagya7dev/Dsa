#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> mpp;
        mpp[0] = 1;  // Important: sum 0 occurs once
        
        int count = 0;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            
            sum += nums[i];

            if (mpp.find(sum - k) != mpp.end()) {
                count += mpp[sum - k];
            }

            mpp[sum]++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1};
    int k = 2;
    cout << sol.subarraySum(nums, k) << endl; // Output: 2
    return 0;
}