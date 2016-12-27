//
// Created by Tao on 21/12/2016.
//
#include <vector>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        auto c = s.begin();
        for(char i: t){
            c += (*c == i);
        }
        return c == s.end();
    }
};
