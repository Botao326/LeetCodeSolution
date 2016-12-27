//
// Created by botao on 16-12-25.
//

class Solution{
public:
    int bulbSwitch(int n){
        int result = 0;
        for(int i = 0; i * i < n; ++i){
            result++;
        }
        return result;
    }
};