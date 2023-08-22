#include <bits/stdc++.h>

using namespace std;


int find_largest_sum_subarray(vector<int> &arr) {
    
    /*
        arr = {-2, 0, 1, -7, 3, -8, -5, -9, -1, -12}
        Time Complexity => 0(n)
        Space Complexity => 0(1);
    */


    if (arr.size() <= 1) {
        return arr[0];
    }

    int maxSum = INT_MIN;

    int sum = 0;


    for(int val: arr) {

        sum = max(val ,sum+val);

        if (sum > maxSum) {
            // cout << val << " ";
            maxSum = sum;
        }
    }

    return maxSum;

}

int main() {

    vector<int> arr = {1};

    int maxSum = find_largest_sum_subarray(arr);

    cout << "\n" << maxSum << "\n";

    return 0;
}