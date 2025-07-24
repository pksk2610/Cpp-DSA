#include<iostream>
#include<Vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){
    vector<int> ans;

    for(int col=0;col<mCols;col++){
        if(col&1){
            for(int row=nRows-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row<nRows;row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main() {
    int nRows, mCols;
    cout << "Enter number of rows: ";
    cin >> nRows;
    cout << "Enter number of columns: ";
    cin >> mCols;

     vector<vector<int>> arr(nRows, vector<int>(mCols));

    cout << "Enter elements row by row:" << endl;
    for(int i = 0; i < nRows; i++) {
        for(int j = 0; j < mCols; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> result = wavePrint(arr, nRows, mCols);

    

    cout << "Wave print of the matrix: ";
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}