//
// Created by Tao on 4/12/2016.
//
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int strLen1 = version1.size();
        int strLen2 = version2.size();

        for (int i = 0, j = 0; i < strLen1 || j < strLen2; ++i, ++j){
            int num1 = 0, num2 = 0;
            while(i < strLen1 && version1[i] != '.'){
                num1 = num1*10 + (version1[i] - '0');
                ++i;
            }
            while(j < strLen2 && version2[j] != '.'){
                num2 = num2*10 + (version2[j] - '0');
                ++j;
            }

            if (num1 > num2) return 1;
            else if (num1 < num2) return -1;
        }

        return 0;
    }
};
