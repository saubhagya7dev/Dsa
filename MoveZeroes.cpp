#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> zeroes;
        vector <int> nominal;
        int n = nums.size();

        for (int i = 0; i <n ; i++){
            if (nums[i]==0){
                zeroes.push_back(nums[i]);
            }
            else {
                nominal.push_back(nums[i]);
            }
        } 

        nominal.insert(nominal.end(), zeroes.begin(), zeroes.end());
        nums = nominal;
    }
};


int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    sol.moveZeroes(arr);

    cout<<"Array after moving zeroes to the end is "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}