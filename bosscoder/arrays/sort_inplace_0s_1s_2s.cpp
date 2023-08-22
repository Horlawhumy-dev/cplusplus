// Created by haroff on 6/5/23.
//
#include <bits/stdc++.h>

using namespace std;

void sort_inplace(vector<int> &arr) {

    if  (arr.empty()) {
        return;
    }
    int total_1s = 0;
    int total_0s = 0;
    int total_2s = 0;

    for (int val: arr) {
        if (val == 0) {
            total_0s++;
        }else if(val == 1) {
            total_1s++;
        }else{
            total_2s++;
        }
    }

    for (int i=0; i<arr.size(); i++) {

        if (total_0s > 0) {
            arr[i] = 0;
            total_0s--;
        }else if (total_1s > 0) {
            arr[i] = 1;
            total_1s--;
        }else{
            arr[i] = 2;
            total_2s--;
        }
    }
}
int main() {
    vector<int> arr = {0, 1, 1, 2, 0, 2, 1, 0};
    sort_inplace(arr);

    for (int val: arr) {
        cout << val << " ";
    }
}