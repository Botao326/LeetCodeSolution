//
// Created by botao on 16-12-17.
//
#include <vector>
#include <math.h>
#include <unordered_map>
#include <map>
#include <queue>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        for (int i = 1; i < prices.size(); ++i){
            res += max(prices[i] - prices[i-1], 0);
        }

        return res;
    }
};
