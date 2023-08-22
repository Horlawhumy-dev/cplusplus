//
// Created by haroff on 8/21/23.
//

#include <bits/stdc++.h>

using namespace std;


vector<int> search(vector<vector<int>>& matrix, int target) {
    int row = 0, col = (int) matrix.size()-1;
    vector<int> result_index;
    while (row < matrix.size() && col >= 0) {

        if (matrix[row][col] == target) {
            result_index.push_back(row);
            result_index.push_back(col);
            return result_index;
        }

        if (matrix[row][col] < target) {
            row++;
        }else {
            col--;
        }
    }
    result_index.push_back(-1);
    result_index.push_back(-1);
    return result_index;
};


int main() {
    vector<vector<int>> arr = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    vector<int> result = search(arr, 9);
    for (int i: result) {
        cout << i << " ";
    }
    return 0;
}