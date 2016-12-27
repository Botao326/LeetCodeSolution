//
// Created by botao on 16-12-11.
//
#include <string>
using namespace std;

class Solution {
public:

    bool isValid(char c){
        if (c != 32)
            return true;
        else
            return false;
    }
    int countSegments(string s) {
        if (s.length() == 0) return 0;

        int count = 0;
        if (isValid(s[0]))
            count++;
        for (int i = 1; i < s.length(); ++i){
            if (!isValid(s[i-1]) && isValid(s[i]))
                count++;
        }
        return count;
    }
};
