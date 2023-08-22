//
// Created by haroff on 6/5/23.
//
#include <bits/stdc++.h>

using namespace std;


int buy_sell_stock(vector<int> prices) {

    if (prices.empty()) {
        return 0;
    }
    int index = 1;
    int sell = prices[0], buy = prices[0];
    int max_profit = 0;
    while (index < prices.size()) {
        buy = min(buy, prices[index]);
        index++;
    }

    index = 1;
    while (index < prices.size()) {
        sell = max(sell, prices[index]);
        index++;
    }

    max_profit += (sell - buy);

    return max_profit;


}

int main() {
    vector<int> prices = {2, 3, 4, 2, 5, 1};
    int profit = buy_sell_stock(prices);

    cout << profit << " ";
}