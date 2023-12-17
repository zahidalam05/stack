#include<iostream>
#include<vector>
using namespace  std;
void waveprintMatrix(vector<vector<int>>v)
{
  int m=v.size();
  int n=v[0].size();
  for(int startCol=0;startCol<n;startCol++) 
  {
     if((startCol & 1) == 0) //even col top to bottom
     {
        for(int i=0;i<m;i++)
        {
            cout<<v[i][startCol]<<" ";
        }
     }
     else
     {
        for(int i=m-1;i>=0;i--)//odd bottom to col
        {
            cout<<v[i][startCol]<<" ";
        }
     }
  } 
}
int main()
{
    vector<vector<int>>v 
    {
       {1,2,3,4},
       {5,6,7,8},
       {9,10,11,12},
       {13,14,15,16}
       
    };
    waveprintMatrix(v);
    return 0;
} 

