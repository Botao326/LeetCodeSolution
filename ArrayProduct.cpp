//
// Created by botao on 16-12-11.
//

#include <stdio.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if (nums.size() == 0) return nums;

        int n = nums.size();
        int fromBegin = 1;
        int fromEnd = 1;
        vector<int> res(n, 1);

        for(int i = 0; i < n; ++i){
            res[i] *= fromBegin;
            fromBegin *= nums[i];
            res[n-1-i] *= fromEnd;
            fromEnd   *= nums[n-1-i];
        }

        return res;
    }
};