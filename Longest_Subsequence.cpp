#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if (nums.empty()) return 0;
            
            unordered_map<int, int> mpp;
            int maxi = 0;
            
            for (int num : nums) {
                if (mpp.find(num) == mpp.end()) {
                    int left, right;
                    
                    if (mpp.count(num - 1)) {
                        left = mpp[num - 1];
                    } else {
                        left = 0;
                    }
                    
                    if (mpp.count(num + 1)) {
                        right = mpp[num + 1];
                    } else {
                        right = 0;
                    }
                    
                    int crr = left + right + 1;
                    mpp[num] = crr;
                    
                    mpp[num - left] = crr;
                    mpp[num + right] = crr;
                    
                    maxi = max(maxi, crr);
                }
            }
            return maxi;
            
        }
    };