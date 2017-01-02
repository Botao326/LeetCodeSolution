//
// Created by botao on 17-1-2.
//
class Solution {
public:

    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        if (matrix.empty()) return 0;

        int row = matrix.size(), col = matrix[0].size(), res = INT_MIN;
        for(int l = 0; l < col; ++l){
            vector<int> sumRow(row, 0);
            for(int r = l; r < col; ++r){
                for(int i = 0; i < row; ++i){
                    sumRow[i] += matrix[i][r];
                }

                set<int> cumSet;
                cumSet.insert(0);
                int curSum = 0, curMax = INT_MIN;
                for(int sum: sumRow){
                    curSum += sum;
                    set<int>::iterator it = cumSet.lower_bound(curSum - k);
                    if (it != cumSet.end()) curMax = std::max(curMax, curSum - *it);
                    cumSet.insert(curSum);
                }
                res = std::max(res, curMax);
            }
        }
        return res;
    }
};
