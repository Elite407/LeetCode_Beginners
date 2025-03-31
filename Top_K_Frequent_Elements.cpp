#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            map<int, int> mpp;
            for(auto i : nums){
                mpp[i]++;
            }
            vector<vector<int>> v(nums.size() + 1);
            for (auto& pair : mpp) {
                v[pair.second].push_back(pair.first);
            }
            
            vector<int> ans;
            for (int i = v.size() - 1; i >= 0 && ans.size() < k; --i) {
                for (int num : v[i]) {
                    ans.push_back(num);
                    if (ans.size() == k) return ans;
                }
            }
            return ans;
        }
    };