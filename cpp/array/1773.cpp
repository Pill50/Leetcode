class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        for(int i = 0; i < items.size(); i++) {
            for(int j = 0; j < items[i].size(); j++) {
                if(ruleKey == "type" && items[i][j] == ruleValue && j == 0) 
                    count++;
                else if(ruleKey == "color" && items[i][j] == ruleValue && j == 1) 
                    count++;
                else if(ruleKey == "name" && items[i][j] == ruleValue && j == 2) 
                    count++;
            }
        }
        return count;
    }
};
