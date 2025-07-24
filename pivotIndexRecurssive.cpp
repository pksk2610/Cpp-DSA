#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int>& nums,int index ,int leftSum,int totalSum){
    if(index==nums.size()){
        return -1;
    }

    int rightSum=totalSum-leftSum-nums[index];

    if(rightSum==leftSum){
        return index;
    }

    return findPivot(nums,index+1,leftSum+nums[index],totalSum);

}
int pivotIndex(vector<int>& nums){
    int totalSum=0;

    for(int i=0;i<nums.size();i++){
        totalSum+=nums[i];
    }
    return findPivot(nums,0,0,totalSum );
}

int main(){
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int pivot=pivotIndex(nums);

    if(pivot!=-1){
        cout<<pivot<<endl;
    }
    else{
        cout<<"No such index exists"<<endl;
    }

}