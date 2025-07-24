#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        bool searchMatrix(vector<vector<int>>& matrix ,int target){
            int row=matrix.size();
            int col=matrix.size();

            int start=0;
            int end=row*col-1;
            int mid=start+(end-start)/2;

            while(start<=end){
                int midElement=matrix[mid/col][mid%col];

                if(midElement==target){
                    return true;

                }
                else if(midElement<target){
                    start=mid+1;

                }
                else{
                    end=mid-1;
                }
                mid=start+(end-start)-1;
            }
            return false;
        }

};


int main(){
    int row,col;
    cin>>row;
    cin>>col;

    vector<vector<int>> matrix(row,vector<int>(col));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cin>>target;


    solution sol;
    bool found=sol.searchMatrix(matrix,target);

    if(found){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
   
}