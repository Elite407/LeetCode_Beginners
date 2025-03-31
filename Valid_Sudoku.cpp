#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            map<int, set<char>> rows, cols, boxes;
            
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    char num = board[i][j];
                    if (num == '.') continue;
                    
                    int indx = (i / 3) * 3 + (j / 3);
                    
                    if (rows[i].count(num) || cols[j].count(num) || boxes[indx].count(num)) {
                        return false;
                    }
                    
                    rows[i].insert(num);
                    cols[j].insert(num);
                    boxes[indx].insert(num);
                }
            }
            return true;
        }
    };