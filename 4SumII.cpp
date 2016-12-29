//
// Created by botao on 16-12-27.
//
#include <unordered_map>
using namespace std;

class Solution{
public:
    void MapIn(vector<int>& A, vector<int>& B, unordered_map<int, int>& map){
        int n = A.size();
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                ++map[A[i]+B[j]];
    }

    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> mp1, mp2;
        MapIn(A, B, mp1);
        MapIn(C, D, mp2);
        int res = 0;
        for(auto iter1: mp1)
        {
            auto iter2 = mp2.find(-iter1.first);
            if(iter2 != mp2.end()){
                res += iter1.second*iter2->second;
            }
        }
        return res;
   }
};