#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++)
        {
            int minus = target - nums[i];

            if (mpp.find(minus) != mpp.end())
            {
                return {mpp[minus], i};
            }

            mpp[nums[i]] = i;
        }

        return {};
    }
};