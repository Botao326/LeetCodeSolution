//
// Created by botao on 16-12-25.
//
class Solution {
public:
    string originalDigits(string s){
        vector<int> table(128,0);
        vector<int> digit(10,0);

        for(int i = 0; i < s.size(); ++i){
            table[s[i]]++;
        }

        digit[0] = table['z'];
        digit[2] = table['w'];
        digit[4] = table['u'];
        digit[6] = table['x'];
        digit[8] = table['g'];
        digit[1] = table['o'] - digit[0] - digit[2] - digit[4];
        digit[3] = table['h'] - digit[8];
        digit[5] = table['f'] - digit[4];
        digit[7] = table['s'] - digit[6];
        digit[9] = (table['n'] - digit[1] - digit[7])/2;

        string res;
        for(int i = 0; i < 10; ++i){
            for(int j = 0; j < digit[i]; ++j){
                res += (char)('0'+i);
            }
        }
        return res;
    }
};