#include <iostream>
#include <vector>
using namespace std;

void QuickSort(vector<int>&arr, int s,int e)
{

  if(s>=e)
  {
    return;
  }
  int pivot = e;
  int i = s-1;
  int j = s;
  while(j<pivot)
    {
      if(arr[j] < arr[pivot])
      {
        i++;
        swap(arr[i], arr[j]);
      }
     j++;
    }
  i++;
  swap(arr[i], arr[j]);
  QuickSort(arr,s,i-1);
  QuickSort(arr,i+1,e);


}
  

int main() {
  vector<int> arr{4,6,3,1,8,7,5,2};
  int j = arr.size()-1;
  int i = 0;
  QuickSort(arr,i,j);

  for(int i=0;i<arr.size();i++)
    {
      cout<<arr[i]<<" ";
    }
}