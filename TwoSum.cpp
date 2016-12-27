//
// Created by Tao on 7/12/2016.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2,0);

        int left = 0;
        int right = numbers.size()-1;

        while(left < right){
            if (numbers[left] + numbers[right] == target)
            {
                res[0] = left + 1;
                res[1] = right + 1;
                return res;
            }
            else if (numbers[left] + numbers[right] > target) --right;
            else ++left;
        }

        return res;
    }
};
