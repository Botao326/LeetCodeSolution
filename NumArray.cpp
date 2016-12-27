//
// Created by botao on 16-12-4.
//
#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

class NumArray {
private:
    vector<int> PartialSum = {0};

public:
    NumArray(vector<int> &nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            sum += nums[i];
            PartialSum.push_back(sum);
        }
    }

    int sumRange(int i, int j) {
        return PartialSum[j+1] - PartialSum[i];
    }
};