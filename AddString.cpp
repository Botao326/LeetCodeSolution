//
// Created by Tao on 29/11/2016.
//
#include <string>
#include <stdio.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string restr;

        for (int i = num1.length()-1, j = num2.length()-1, carry = 0; i >= 0 || j >= 0 || carry; carry /= 10){
            if (i >= 0) carry += num1[i--] - '0';
            if (j >= 0) carry += num2[j--] - '0';
            restr = to_string(carry % 10) + restr;
        }
        return restr;
    }
};