//
// Created by haroff on 7/15/23.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> find_min_cost(vector<int> &costs) {
    vector<int> min_cost_and_index;
    if (costs[0] <= costs[1] && costs[0] <= costs[2]) {
        min_cost_and_index.push_back(0);
        min_cost_and_index.push_back(costs[0]);
    }else if (costs[1] <= costs[0] && costs[1] <= costs[2]) {
        min_cost_and_index.push_back(1);
        min_cost_and_index.push_back(costs[1]);
    }else {
        min_cost_and_index.push_back(2);
        min_cost_and_index.push_back(costs[2]);
    }

    return  min_cost_and_index;
}
int find_min_cost_to_paint_house(vector<vector<int>> arr) {
    int sum = 0;
    int previous_house_painted_index = -1;
    if (arr.size() == 1) {
        sum += (arr[0][0] + arr[0][1] + arr[0][2]);
        return sum;
    }

    for (auto & cost : arr) {
        vector<int> min_cost_and_index = find_min_cost(cost);

        if (previous_house_painted_index == min_cost_and_index[0]) {
            sum += min(cost[1], cost[2]);
        }else {
            previous_house_painted_index = min_cost_and_index[0];
            sum += min_cost_and_index[1];
        }
    }

    return sum;

}

int main() {
    vector<vector<int>> arr = {{17,2,17}, {16,16,5}, {14,3,19}};
    int result = find_min_cost_to_paint_house(arr);

    cout << result << " ";
    return 0;
}