#include<iostream>
#include<vector>
using namespace std;

int findPeak(vector<int>& nums,int s,int e){
    if(s==e) return s;

    int mid=s+(e-s)/2;

    if(nums[mid]<nums[mid+1]){
        return findPeak(nums,mid+1,e);
    }
    else{
        return findPeak(nums,s,mid);
    }

    
}
int peakIndexInMountainArray(vector<int>& nums){
    return findPeak(nums,0,nums.size()-1);
}
int main(){
    vector<int> nums={0,10,5,2};
    
    cout<<peakIndexInMountainArray(nums)<<endl;
}