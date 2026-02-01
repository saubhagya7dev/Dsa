#include <bits/stdc++.h>
using namespace std;


/*
Definition - Insertion Sort builds the sorted array one element at a time by 
inserting each element into its correct position in the already sorted portion.
*/

// time complexity -  time complexity for Insertion Sort  for worst and average it's O(n^2)
// and for best case it O(N) (if already sorted)
void insertionSort(int arr[], int n) {
    for (int i=0 ; i<=n-1 ; i++){
        int j = i;
        while (j>0 && arr[j-1]>arr[j]){  // remeber j>=o -> will give runtime error
            swap(arr[j-1],arr[j]);
            j--;
        }
    } 
}
/*
we use while (j>0 && arr[j-1]>arr[j]) so that While we haven’t reached the start of the array
AND the previous element is bigger than the current one, keep moving the element left.
*/
int main(){
    
    cout<<"provide the length of array"<<endl;
    int n ;
    cin>> n;
    cout<<"Now enter the elements"<<endl;
    int arr[n];

    for (int i = 0; i<n ;i++){
        cin>>arr[i];
    } 
    insertionSort(arr,n); // sorting happens after calling this 

    // printing the sorted array 
    cout<<"sorted array using insertion sort algorithm"<<endl;
    for (int i = 0; i<n ;i++){
        cout<< arr[i]<<" "<<endl;

    }
}
