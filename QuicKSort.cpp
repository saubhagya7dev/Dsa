#include <bits/stdc++.h>
using namespace std;
// time complexity - O(n log n) for best , average and worst case.
/*
Definition - 
*/
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1)
            i++;
        while (arr[j] > pivot && j >= low + 1)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void QuickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        QuickSort(arr, low, p - 1);
        QuickSort(arr, p + 1, high);
    }
}

int main(){
    cout<<"provide the lenght of array"<<endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    cout<<"enter the elements of array"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    QuickSort(arr,0,n-1); // sorting happens after calling this 

    // printing the sorted array 
    cout<<"sorted array using Quick sort algorithm"<<endl;
    for (int x : arr){
        cout<< x <<" "<<endl;
    }

}