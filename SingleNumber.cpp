//
// Created by Tao on 7/12/2016.
//

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorXY = 0;
        for (auto & num: nums){
            xorXY ^= num;
        }

        int lastbit = xorXY & (xorXY ^ (xorXY-1));

        vector<int> res(2,0);

        for (auto & num:nums){
            if (num & lastbit)
                res[0] ^= num;
        }
        res[1] = xorXY ^ res[0];
        return res;
    }
};