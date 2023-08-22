#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int subarray_product_less_than_k(vector<int>& nums, int k) {
    int left = 0;
    int count = 0;

    if (nums.empty() || (nums.size() == 1 && nums[0] >= k) || k<=1) {
        return count;
    }

    if (nums.size() == 1 && nums[0] < k) {
        return count+1;
    }

    int curr = 1;

    for (int right=0; right<nums.size();right++) {
        curr *= nums[right];

        while (curr >= k) {
            curr /= nums[left];
            left++;
        }

        count += right-left+1;
    }

    return count;
}

int main() {
    vector<int> arr = {10, 5, 2, 6};
    int result = subarray_product_less_than_k(arr, 0);

    cout << result << " ";
    return 0;
}
