#include<iostream>
#include<climits>
using namespace std;

int printLargestSum(int arr[][4],int row,int col){
    int maxSum = INT_MIN;
    int rowIndex=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxSum){
            
            maxSum=sum;
            rowIndex=i;
        
    }
    

    }
    cout<<"The maximum sum is "<<maxSum<<endl;
    return rowIndex;
    
}
int main(){
    int arr[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printLargestSum(arr,3,4);
}