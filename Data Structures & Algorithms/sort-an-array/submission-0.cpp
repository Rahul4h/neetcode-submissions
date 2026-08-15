#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   void merge(vector<int>& nums, int left,int mid, int right)
   {
    int n1=mid-left+1;
    int n2=right-mid;
    int l[n1+1],r[n2+1];
    for(int i=0;i<n1;i++)
    {
       l[i]=nums[i+left];
    }
    for(int i=0;i<n2;i++)
    {
        r[i]=nums[mid+1+i];
    }
    l[n1]=INT_MAX, r[n2]=INT_MAX;
    int i=0,j=0,k=left;
    while(i<n1||j<n2)
    {
        if(l[i]<=r[j])
        {
            nums[k]=l[i];
            i++;
        }
        else{
            nums[k]=r[j];
            j++;
        }
        k++;
    }


   }
    void mergesort(vector<int>& nums, int left, int right)
    {
        if(left>=right) return;
        int mid=(left+right)/2;
        mergesort(nums,left,mid);
        mergesort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }
    vector<int> sortArray(vector<int>& nums) {
       mergesort(nums,0,nums.size()-1);
       return nums;
    }
};