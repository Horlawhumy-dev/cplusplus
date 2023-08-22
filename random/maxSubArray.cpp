#include <bits/stdc++.h>


using namespace std;


int findMaxSubArray(vector<int> arr, int n) {
    // n => arr.length() or index size
    if (n <= 1) {
        return arr[0];
    }

    int maxSub = 0;
    int sum = 0;

    // Time Complexity: O(n) Space Complexity: O(1)

    for (int i =0; i < n; i++) {
        sum = max(arr[i], sum+arr[i]);
        maxSub = max(maxSub, sum);
    }

    return maxSub;
};

int main() {
    vector<int> arr = {-1, 2, 4, -3, 5, 2, -5, 2};
    int maxSubArray = findMaxSubArray(arr, 8);

    cout << "The maximum subarray is: " << maxSubArray << "\n";
    return 0;
}