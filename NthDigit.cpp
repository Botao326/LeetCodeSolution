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
    class Solution {
    public:
        int findNthDigit(int n) {
            long multiplier = 9, digits = 1;
            while (n > multiplier * digits) {
                n -= multiplier * (digits++);
                multiplier *= 10;
            }

            int after = (n - 1) / digits;
            int location = (n - 1) % digits;

            long begin = pow(10, (digits - 1));
            string a = (to_string)(begin + after);
            a = a[location];
            return stoi(a);
        }
    };
};