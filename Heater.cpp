//
// Created by botao on 16-12-13.
//
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int radius = 0;
        for(auto &p: houses){
            int low = 0, high = heaters.size() - 1;
            while(low + 1 < high){
                int mid = low + (high - low) / 2;
                if (heaters[mid] >= p)
                    high = mid;
                else
                    low = mid;
            }
            radius = max(radius, min(abs(heaters[low] - p), abs(heaters[high] - p)));
        }
        return radius;
    }
};