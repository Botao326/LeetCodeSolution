//
// Created by Tao on 29/11/2016.
//

#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0, m = g.size(), n = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int i = 0, j = 0; i < m && j < n; ++i, ++j){
            while (j < n && s[j] < g[i])++j;
            if (j < n) count++;
        }
        return count;
    }
};