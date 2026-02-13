#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> result;
        int n = nums.size();

        for (int i=0; i<n; i++){
            if (nums[i]<0){
                negative.push_back(nums[i]);
            }
            else{
                positive.push_back(nums[i]);
            }
        }

    int x = positive.size();

    for (int i = 0; i < x; i++) {
        result.push_back(positive[i]);
        result.push_back(negative[i]);
    }
    
    return result;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> result = sol.rearrangeArray(nums);

    cout<<"Rearranged array: ";
    for (int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

    return 0;
}