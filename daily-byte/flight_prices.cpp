//
// Created by haroffcode on 7/3/23.
//

#include <bits/stdc++.h>

using namespace std;

int find_min_cost_of_flight(vector<vector<int>>& prices) {
    /*
     * Asked by Google Interview
     * @param: prices -> 2D vector where ith is employees position and i[j] is flight prices
     * to different locations
     * @return: int - minimum cost in total to fly all employees
     *
     * */

    int min_cost_to_fly_employees = 0;

    if (prices.empty() || prices[0].empty()) {
        return min_cost_to_fly_employees;
    }

    vector<int>  refund;

    for (vector<int> price: prices) {
        min_cost_to_fly_employees += price[0];
        refund.push_back(price[1] - price[0]);
    }

    sort(refund.begin(), refund.end());

    for (int j=0; j < refund.size()/2; j++) {
        min_cost_to_fly_employees += refund[j];
    }
    return min_cost_to_fly_employees;
}

int main() {

    vector<vector<int>> flight_prices = {{40, 30}, {300, 200}, {50, 50}, {30, 60}};
    int min_cost_to_fly_all_employees = find_min_cost_of_flight(flight_prices);

    cout << "Minimum Cost To Fly Employees is " << min_cost_to_fly_all_employees << "\n";

    return 0;
}