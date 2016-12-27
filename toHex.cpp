//
// Created by botao on 16-12-2.
//
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:

    string toHex(int num) {
        if (num == 0) return "0";

        int count = 0;

        string res;

        while (num && count < 8){
            int tmp = num & 15;
            if (tmp < 10) res.push_back('0' + tmp);
            else res.push_back('0' + tmp - 10);
            num = num >> 4;
            count++;
        }
        reverse(res.begin(), res.end());
        return res;
    };
};