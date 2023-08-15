#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
	int mid = 0;
   int low = 0;
   int high = n-1;

   while(mid<=high){

      if(arr[mid]==0){
         swap(arr[mid], arr[low]);
         mid++;
         low++;
      }
      else if(arr[mid]==2){
         swap(arr[mid], arr[high]);
         high--;
      }
      else {
         mid++;
      }
   }
}

// Dutch National Flag