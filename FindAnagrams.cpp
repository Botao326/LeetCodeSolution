//
// Created by botao on 16-12-3.
//
#include <stdio.h>
#include <string.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ss(256, 0), ps(256, 0), Res;

        if (s.size() == 0 || p.size() == 0 || s.size() < p.size())
            return Res;

        for(int i = 0; i < p.size(); ++i){
            ss[s[i]]++;
            ps[p[i]]++;
        }

        if (ss == ps)
            Res.push_back(0);

        for(int i = p.size(); i < s.size(); ++i){
            ++ss[s[i]];
            --ss[s[i-p.size()]];

            if (ss == ps)
                Res.push_back(i-p.size()+1);
        }

        return Res;
    }
};