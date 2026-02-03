#include<bits/stdc++.h>
using namespace std;

// Function to merge two sorted subarrays
void merge(int Arr[], int left, int mid, int right)
{
    int i = left;      // Starting index of left subarray
    int j = mid + 1;   // Starting index of right subarray
    int k = left;      // Index for temporary array

    int Brr[100];      // Temporary array to store merged result

    // Compare elements from both halves and store smaller one
    while(i <= mid && j <= right)
    {
        if(Arr[i] < Arr[j])
            Brr[k++] = Arr[i++];   // Copy from left half
        else
            Brr[k++] = Arr[j++];   // Copy from right half
    }

    // Copy remaining elements of left subarray (if any)
    while(i <= mid)
        Brr[k++] = Arr[i++];

    // Copy remaining elements of right subarray (if any)
    while(j <= right)
        Brr[k++] = Arr[j++];

    // Copy merged elements back to original array
    for(int x = left; x <= right; x++)
        Arr[x] = Brr[x];
}


// Recursive Merge Sort function
void mergeSort(int Arr[], int left, int right)
{
    if(left < right)  // Base condition (array has more than one element)
    {
        int mid = (left + right) / 2;  // Find middle index

        mergeSort(Arr, left, mid);      // Sort left half
        mergeSort(Arr, mid + 1, right); // Sort right half

        merge(Arr, left, mid, right);   // Merge both halves
    }
}


int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int Arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> Arr[i];

    mergeSort(Arr, 0, n-1);  // Call merge sort

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << Arr[i] << " ";
}
