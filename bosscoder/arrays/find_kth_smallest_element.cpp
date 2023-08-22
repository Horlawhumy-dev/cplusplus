#include <bits/stdc++.h>

using namespace std;

void swap(vector<int> &arr, int i, int j) {
};

int find_kth_smallest_element(vector<int> &arr, int k) {

    /*
        arr = {-2, 0, 1, -7, 3, -8, -5, -9, -1, -12}
        Time Complexity => 0(n)
        Space Complexity => 0(1);
    */

    if (arr.size() <= 1) {
        return arr[0];
    }

    if (k <= 0 || k >= arr.size()) {
        return -1;
    }

    int minElement = arr[0];

    for (int val: arr)
    {
        /* code */

        if (val < minElement) {
            minElement = min(minElement, val);
            k--;
        }

        if (k == 0) {
            break;
        }
    }

    return minElement;
    

};


int main() {

    vector<int> arr = {-2, 0, 1, -7, 3, -8, -5, -9, -1, -12};

    int minElement = find_kth_smallest_element(arr, 3);

    cout << minElement << "\n";

    return 0;
}