#include <bits/stdc++.h>

using namespace std;


int findMaxSubArray(vector<int>& arr) {
    /*

        #Kadane's Algorithm#
        Given an array of integers,  find the maximum subarray sum of the given array.
        T(n) = O(n)
        Space Complexity = O(i)
    */

    int maxSub = 0;
    int sum = 0;

    for (int value: arr) {
        // either this or 
        // sum = max(value, sum+value);
        sum = sum + value;
        maxSub = max(maxSub, sum);

        // this => no need of tracking negative sum value.
        if (sum < 0) {
            sum = 0;
        }
    }


   return maxSub;
};


int main() {

    vector<int> arr =  {5,4,-1,7,8};
    int maxSubArraySum = findMaxSubArray(arr);
 

    cout << maxSubArraySum << "\n";
    return 0;
}