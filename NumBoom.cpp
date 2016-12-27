#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    long calDistance(pair<int, int> p1, pair<int, int> p2){
        int d1 = p1.first - p2.first;
        int d2 = p1.second - p2.second;
        return d1*d1 + d2*d2;
    }

    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res = 0;
        for (int i = 0; i < points.size(); ++i){
            unordered_map<long, int> countBoom;
            for (int j = 0; j < points.size(); ++i){
                if (i == j) continue;

                long dis = calDistance(points[i], points[j]);

                res += countBoom[dis]*2;
                countBoom[dis]++;
            }
        }
        return res;
    }


};