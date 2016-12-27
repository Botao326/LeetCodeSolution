//
// Created by botao on 16-12-3.
//

class Solution {
public:
    int arrangeCoins(int n) {
        if (n == 0 || n == 1) return n;

        for (long i = 2; ; ++i){
            if (((i * (i + 1))/2) > n)
                return i;
        }
    }
};