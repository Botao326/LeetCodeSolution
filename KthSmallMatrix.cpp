//
// Created by Tao on 23/12/2016.
//

#include <algorithm>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();

        int left = matrix[0][0], right = matrix[n-1][n-1];
        int mid = 0;

        while(left < right){
            mid = left + ((right - left) >> 1);
            int num = 0;
            for(int i = 0; i < n; i++){
                int pos = upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
                num += pos;
            }
            if (k > num){
                left = mid + 1;
            }
            else
                right = mid;
        }
        return right;
    }
};