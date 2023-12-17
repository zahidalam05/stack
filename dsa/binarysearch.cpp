#include<iostream>
using namespace std;
int binarysearch(int arr[], int size,int target)
{
  int s=0;
  int e=size-1;
  int mid=s+(e-s)/2;
  while(s<=e)
  {
    if(arr[mid]==target)
    {
      return mid;
    }
    else if(arr[mid]<target)
    {
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return -1;
}
int main()
{
  int arr[]={1,2,3,4,5,6,7};
  int size=7;
  int target=6;
  int indexOftarget=binarysearch(arr,size,target);
  if(indexOftarget==-1)
  {
    cout<<"target not found"<<endl;
  }
  else{
    cout<<"target found at "<<indexOftarget<<" index "<<endl;
  }
  return 0;
}