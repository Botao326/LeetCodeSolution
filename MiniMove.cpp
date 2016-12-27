//
// Created by Tao on 29/11/2016.
//
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using  namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;
//        int min = nums.begin();
        for (vector<int>::iterator iter = nums.begin()+1; iter != nums.end(); ++iter){
//            count += iter - min;
        }
        return count;
    }
};
