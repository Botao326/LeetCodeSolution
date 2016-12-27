//
// Created by Tao on 21/12/2016.
//
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;

        int i = 0;
        /*
         * Put each number to its position
         */
        while(i < nums.size()){
            if (nums[i] != nums[nums[i]-1]) swap(nums[i], nums[nums[i]-1]);
            else ++i;
        }

        /*
         * Find number not in position (duplicate)
         */
        for(int i = 0; i < nums.size(); ++i){
            if (nums[i] != i+1)
                res.push_back(nums[i]);
        }
        return res;
    }
};