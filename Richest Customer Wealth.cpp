//https://leetcode.com/problems/richest-customer-wealth/
// 利用雙重迴圈

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i = 0;
        int m = accounts.size();
        int maxWealth = 0;
        for (int i = 0; i < m; i++){
            int currentcustomerwealth = 0;
            int n = accounts[i].size();
            for (int j = 0; j < n; j++){
                currentcustomerwealth += accounts[i][j]; 
            }
            maxWealth = max(maxWealth, currentcustomerwealth);
        }
        return maxWealth;
    }
};
