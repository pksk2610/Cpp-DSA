#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>> &ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    solve(nums,output,index+1,ans);
    int element=nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);

}
vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(nums,output,index,ans);
    return ans;
}
int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> allSubsets = subsets(nums);

    for (const auto& subset : allSubsets) {
        cout << "[";
        for (int val : subset) {
            cout << val << " ";
        }
        cout << "] ";
    }

    return 0;
}


