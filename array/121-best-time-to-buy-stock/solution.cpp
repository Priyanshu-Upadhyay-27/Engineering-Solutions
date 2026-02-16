#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};
int main() {
    Solution sol;
    int maximum_profit;

    vector<int> prices = {};

    maximum_profit = sol.maxProfit(prices);

    cout<<"Maximum Profit : "<<maximum_profit;
}
