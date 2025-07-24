#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        bool SearchMatrix(vector<vector<int>>& matrix ,int target){
            int row=0;
            int col=matrix[0].size()-1;
            while(row<matrix.size()&& col>=0){
                int element=matrix[row][col];
                if(element==target){
                    return true;
                }

                else if(element>target){
                    col--;
                }
                else{
                    row++;
                }
                    
                
            }
            return false;
        }

};
int main(){
    int row,col,target;
    cin>>row>>col;
    vector<vector<int>>matrix(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }  
    cin>>target;  
    solution s;
    bool found=s.SearchMatrix(matrix,target);
    if(found){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
     
}