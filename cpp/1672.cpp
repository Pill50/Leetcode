class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = -1, l = accounts.size();
        for(int i = 0; i < l; ++i) {
            int sum = 0;
            for(int j = 0; j < accounts[i].size(); ++j) {
                sum += accounts[i][j];
            }
            if(sum > max) max = sum;
        }
        return max;
    }
};
