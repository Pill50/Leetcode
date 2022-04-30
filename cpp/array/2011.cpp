class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum = 0, l = operations.size();
        for(int i = 0; i < l ; ++i) {
            if(operations[i] ==  "++X" || operations[i] ==  "X++") sum++;
            else if(operations[i] ==  "--X" || operations[i] ==  "X--") sum--;
        }
        return sum;
    }
};
