#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr) {
    int n = arr.size();
    int temp = arr[0];

    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i];

    }
    arr[n-1] = temp;
    return arr;
}



int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateArray(arr);

    cout<<"Rotated array is "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}