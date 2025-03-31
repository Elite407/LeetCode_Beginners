#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int firstUniqChar(string s) {
            map<char, int> mpp;
            for(char c: s){
                mpp[c]++;
            }
            int n= s.size();
            for(int i=0;i<n;i++){
                if(mpp[s[i]]==1){
                    return i;
                }
            }
            return -1;
        }
    };
    