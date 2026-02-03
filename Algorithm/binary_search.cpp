#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[],int n, int key)
{
    int low = 0; int high = n-1;

    
    
   while (low<=high)
   {
    int mid = (low+high)/2;
    
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid] > key)
    {
        high=mid-1;
    }
    else
    {
        low=mid+1;
    }

   }
   return -1;

   

}

void Bubble_sort(int arr[],int n){
   
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}




int main (){

  int n;
  cout<<"Enter array size : ";
  cin>>n;
  int arr[n];
  
  
  cout<<"Enter array element : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  Bubble_sort(arr,n);
    
  int key;
  cout<<"Enter target : ";
  cin>>key;

  int found = Binary_Search(arr,n,key);

  if(found==-1) cout<<"Element dosent found ";
  else cout<<"Found ";


}