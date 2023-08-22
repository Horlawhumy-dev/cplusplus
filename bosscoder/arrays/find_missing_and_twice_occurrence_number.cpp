// Created by haroff on 6/5/23.
//
#include <bits/stdc++.h>

using namespace std;

void swap(vector<int> &arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

vector<int> find_missing_and_twice_occur(vector<int> arr) {
    if (arr.size() <= 1) {
        return arr; 
    }
    vector<int> result = {-1, -1};

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] - 1 != i) {
            swap(arr, arr[i]-1, i);
        }
    }




    int slow = 0, fast = 1;

    while (fast < arr.size()) {
        if (arr[slow] == arr[fast] && arr[fast] - 1 != fast) {
            result[0] = arr[fast] - 1;
            result[1] = arr[fast];
            break;
        }

        slow++;
        fast++;
    }
    return result;
}


int main() {
    vector<int> arr = {2, 3, 4, 2};
    vector<int> nums = find_missing_and_twice_occur(arr);
    for (int val: nums) {
        cout << val << " ";
    }

   sort(arr.begin(), arr.ed)
}