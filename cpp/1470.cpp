class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res;
        int k = 0;
        for(int i = 1; i <= nums.size(); i++){
            if(i % 2 != 0){
                res.push_back(nums[k++]);
            }else {
                res.push_back(nums[n++]);
            }
        }
        return res;
    }
};
