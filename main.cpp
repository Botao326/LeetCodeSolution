#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//
// Created by botao on 17-1-2.
//
class Solution {
public:
    int maxSubArray(vector<int> nums, int k) {
        if (nums.empty()){
            return 0;
        }

        int curMax = INT32_MIN;
        int max = INT32_MIN;
        for(int i = 1; i < nums.size(); ++i){
            curMax += nums[i];
            if (curMax < 0)
                curMax = 0;
            if (curMax > max && curMax <= k)
                max = curMax;
        }
        return max;
    }

    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        unsigned long row = matrix.size();
        unsigned long col = matrix[0].size();
        int max_n = 0, max = matrix[0][0];

        for(int l = 0; l < row; ++l){
            vector<int> sumRow(matrix[0].size(), 0);
            for(int r = l; r < row; ++r){
                for (int index = 0; index < col; ++index){
                    sumRow[index] += matrix[r][index];
                }

                max_n = maxSubArray(sumRow, k);
                cout << max_n<< endl;
                if (max_n > max)
                    max = max_n;
            }
        }
        return max;
    }
};


int main(){
    int n;
//    cin >> n;
    Solution exp;
    vector<vector<int>> test;
    test.push_back({2,2,-1});
//    test.push_back({0,-2,3});

//    vector<int> sumcol(n, 0);
//    cout<< sumcol.size() << endl;
//    for(auto c: sumcol)
//        cout<< c;
    int res = exp.maxSumSubmatrix(test, 3);
    printf("%d\n", res);
    return 0;
}