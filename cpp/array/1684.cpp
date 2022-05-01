class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> s{allowed.begin(), allowed.end()};
        bool is_consistent;
        int count = 0;
        
        for(string &word : words){
            is_consistent = true;
            
            for(char &c : word){
                if(!s.count(c)){
                    is_consistent = false;
                    break;
                }
            }
            
            count += is_consistent;
        }
        
        return count;      
    }
};
