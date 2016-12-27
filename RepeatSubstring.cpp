//
// Created by botao on 16-12-3.
//

class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        int m = 0, i = 1, n = str.size();

        vector<int> next(n+1, 0);
        while( i < str.size()){
            if (str[i] == str[m])
                next[++i] = ++m;
            else if (m == 0)
                i++;
            else
                m = next[m];
        }

        return next[n] && next[n] % (n - next[n]) == 0;
    }
};