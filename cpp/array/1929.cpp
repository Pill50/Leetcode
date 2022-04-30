class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.resize(2 * nums.size());
        for(int i = nums.size() / 2; i < nums.size(); i++) {
            nums[i] = nums[i % (nums.size()/2)];
        }
        return nums;
    }
};
