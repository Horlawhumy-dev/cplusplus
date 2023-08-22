#include <bits/stdc++.h>

using namespace std;

void swap(vector<int> &arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
};

void reversArray(vector<int> &arr) {

    /*
        arr = {2, 0, 1, 7, 3, 5, 8}
        reversedArr = {8, 5, 3, 7, 1, 0, 2}

        Time Complexity => 0(n)
        Space Complexity => 0(1);
    */

    if (arr.size() <= 1) {
        return;
    }

    int i = 0;
    int j = arr.size()-1;

    while(i < j) {
        swap(arr, i, j);
        i++;
        j--;
    }

};


int main() {

    vector<int> arr = {};

    reversArray(arr);

    for (int val: arr) {
        cout << val << " ";
    }

    return 0;
}