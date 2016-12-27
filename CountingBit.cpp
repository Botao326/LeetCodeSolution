//
// Created by botao on 16-12-5.
//

#include <vector>
#include <stdio.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> Count(num+1,0);
        for (int i = 1; i <= num; ++i){
            Count[i] = Count[i & (i-1)] + 1;
        }
        return Count;
    }
};
