//
// Created by Tao on 21/12/2016.
//
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = nums.size();
        for (int i = 0; i < nums.size(); ++i){
            res ^= nums[i];
            res ^= i;
        }
        return res;
    }
};
