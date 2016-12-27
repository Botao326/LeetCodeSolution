//
// Created by Tao on 28/11/2016.
//
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> restr;
        for (int i = 0; i != n; ++i){
            if (n % 3 == 0 && n % 5 == 0){
                restr.push_back("FizzBuzz");
            }
            else if (n % 3 == 0){
                restr.push_back("Fizz");
            }
            else if (n % 5 == 0){
                restr.push_back("Buzz");
            }
            else
                restr.push_back("0" + i);
        }
        return restr;
    }
};
