#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int s, int mid, int e) {
    vector<int> temp;
    int i = s, j = mid + 1;

    while (i <= mid && j <= e) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    while (j <= e) {
        temp.push_back(arr[j++]);
    }

    for (int index = 0; index < temp.size(); index++) {
        arr[s + index] = temp[index];
    }
}

void mergeSort(vector<int> &arr, int s, int e) {
    if (s >= e) return;
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int main() {
    vector<int> arr = {2, 8, 5, 6, 9, 7};
    mergeSort(arr, 0, arr.size() - 1);
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
