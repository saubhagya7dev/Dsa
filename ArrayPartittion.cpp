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
    int n, pivot;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Enter the pivot element"<<endl;
    cin>>pivot;

    Solution sol;
    vector<int> result = sol.pivotArray(arr, pivot);

    cout<<"Array after partitioning around pivot is "<<endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}