#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        int count0 = 0; 
        int count1 = 0; 
        int count2 = 0; 
        int n = nums.size();

        for (int i=0; i <n; i++ ){
            if (nums[i]==0) count0++;
            if (nums[i]==1) count1++;
            else (count2++);
        }

        for (int i =0; i<count0;i++) nums[i] = 0;
        for (int i =count0; i<count0+count1; i++) nums[i] = 1;
        for (int i= count0+count1; i<n; i++) nums[i] = 2;
}   

int main(){
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    for (int i=0; i<nums.size(); i++){
        cout<< nums[i]<<" ";
    }
}