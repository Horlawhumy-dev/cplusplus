
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> find_partition_for(vector<int> arr, int left, int right) {
    vector<int> partitionVector;

    for (int i = left; i <= right; i++) {
        partitionVector.push_back(arr[i]);
    }

    return partitionVector;
}

int findPeakElement(vector<int>& arr) {
    if (arr.empty()) {
        return 0;
    }

    if (arr.size() == 1) {
        return arr[0];
    }

    int middle_of_arr = (int) arr.size() / 2;

    vector<int> partition = find_partition_for(arr, middle_of_arr-1, middle_of_arr+1);
    vector<int> partition_vector_before_mid = find_partition_for(arr, 0, middle_of_arr-1);
    int vector_length_before_mid = (int) partition_vector_before_mid.size();



    if (partition[1] > partition[0] && partition[1] >  partition[2]) {
        auto itr = find(arr.begin(), arr.end(), partition[1]);
        auto index = distance(arr.begin(), itr);
        return (int)index;
    }

    else if (partition[0] < partition[2]) {
        if (vector_length_before_mid == 2) middle_of_arr -= 1;

        vector<int> new_partition_vector_from_mid = find_partition_for(arr, middle_of_arr, (int)arr.size());
        return findPeakElement(new_partition_vector_from_mid);
    }

    else {

        if (vector_length_before_mid == 2) middle_of_arr += 1;

        vector<int> new_partition_vector_to_mid = find_partition_for(arr, 0, middle_of_arr-1);
        return findPeakElement(new_partition_vector_to_mid);
    }
}
int main() {
    vector<int> arr = {1,2,1,3,5,6,4};

    int peak = findPeakElement(arr);

    cout << "The peak of the array is: " << peak << "\n";

}