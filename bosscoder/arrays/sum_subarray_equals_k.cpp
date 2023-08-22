#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int left = 0;
    int curr = 0;
    int count = 0;

    if (nums.empty()) {
        return count;
    }

    if (nums.size() == 1 && nums[0] == k) {
        return count+1;
    }

    if (nums.size() == 1 && nums[0] != k) {
        return count;
    }

    for (int right=0; right<nums.size();right++) {
        // if (nums[right] == k) {
        //     count++;
        //     continue;
        // }
        curr += nums[right];

        while (curr > k) {
            curr -= nums[left];
            left++;
        }

        if (curr == k) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 1, 2, 1};
    int result = subarraySum(arr, 3);

    cout << result << " ";
    return 0;
}
