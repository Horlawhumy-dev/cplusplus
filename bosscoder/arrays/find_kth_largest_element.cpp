#include <bits/stdc++.h>

using namespace std;


int findKthLargest(vector<int>& nums, int k) {

    if (nums.size() <= 1) {
        return nums[0];
    }

    if (k <= 0 || k > nums.size()) {
        return -1;
    }

    sort(nums.begin(), nums.end());

    int i = nums.size()-1;

    int maxElement = 0;

    while( k > 0) {
        maxElement = nums[i];
        k--;
        i--;
    }

    return maxElement;
    
};


int main() {

    vector<int> nums = {3,2,1,5,6,4};

    int maxElem = findKthLargest(nums, 2); 

    cout << maxElem << "\n";

    return 0;
}