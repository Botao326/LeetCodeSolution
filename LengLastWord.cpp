//
// Created by botao on 16-12-3.
//

#include <stdio.h>
#include <string.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size() == 0) return 0;

        int length = 0;
        for (int i = 0; i < s.size(); ++i){
            if (s[i] != ' ') ++length;
            else if (s[i+1] != ' ' && i < s.size()-1)
                length = 0;
        }

        return length;
    }
};
