#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lp;
        vector<int>eq;
        vector<int>gp;

        int n = nums.size();

        for (int i = 0; i <n ; i++){
            if (nums[i]<pivot) {
                lp.push_back(nums[i]);
            }
            else if (nums[i] == pivot){
                eq.push_back(nums[i]);
            }
            else {
                gp.push_back(nums[i]);
            }
            
        }

        vector<int> result = lp;
        result.insert(result.end(), eq.begin(), eq.end());
        result.insert(result.end(), gp.begin(), gp.end());
        return result;
        
    }
};
int main(){
    Solution sol;
    vector<int> nums = {9,12,5,10,14,3,10};
    int pivot = 10;
    vector<int> result = sol.pivotArray(nums, pivot);

    cout<<"Pivoted array: ";
    for (int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

    return 0;
}