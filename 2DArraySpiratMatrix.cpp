#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> spiralOrder(vector<vector<int>> & matrix){
            vector<int> ans;
            int row=matrix.size();
            int col=matrix[0].size();

            int top=0,bottom=row-1;
            int left=0,right=col-1;

            while(top<=bottom && left<=right){
                for(int i=left;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;

                for(int i=top;i<=bottom;i++){
                    ans.push_back(matrix[i][right]);

                }
                right--;
                if(top<=bottom){
                    for(int i=right;i>=left;i--){
                        ans.push_back(matrix[bottom][i]);
                    }
                    bottom--;

                }
                if(left<=right){
                    for(int i=bottom;i>=top;i--){
                        ans.push_back(matrix[i][left]);
                    }
                    left++;
                }
            }
            return ans;
        }


};
int main(){
    int row,col;
    cin>>row;
    cin>>col;

    vector<vector<int>> matrix(row, vector<int>(col));

    for(int i = 0; i < row; i++) {

        for(int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
    Solution obj;
    vector<int> ans = obj.spiralOrder(matrix);

    for(int num : ans) {
        cout << num << " ";
    }
    cout << endl;
}
