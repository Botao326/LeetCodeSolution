//
// Created by botao on 16-12-17.
//

#include <algorithm>
#include <vector>
#include <math.h>
#include <unordered_map>
#include <map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freCount;
        for(auto iter: nums){
            freCount[iter]++;
        }

        vector<int> res;
        priority_queue<pair<int, int>> frequeue;
        for(auto iter = freCount.begin(); iter != freCount.end(); ++iter){
            frequeue.push(make_pair(iter->second, iter->first));
            if(frequeue.size() > (int)freCount.size() - k){
                res.pop_back(frequeue.top().second);
                frequeue.pop();
            }
        }
        return res;
    }
};