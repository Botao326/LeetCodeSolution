//
// Created by botao on 16-12-4.
//

#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& A) {

        int F = 0, sum = 0;
        int length = A.size();
        for (int i = 0; i < A.size(); ++i){
            F += i * A[i];
            sum += A[i];
        }

        int sumMax = F;
        for (int i = length-1; i > 0; --i){
            F += sum - length * A[i];
            sumMax = max(sumMax, F);
        }

        return sumMax;
    }
};