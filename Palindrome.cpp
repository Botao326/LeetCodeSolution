//
// Created by Tao on 29/11/2016.
//

#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int PalElem[256] = {0};
        int Count = 0;

        for (int i = 0; i < s.length(); ++i){
            PalElem[s[i]]++;
            Count += PalElem[s[i]] % 2 == 0 ? 2 : 0;
        }
        return Count == s.length() ? Count : Count + 1;
    }
};