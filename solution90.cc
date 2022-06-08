// Leetcode 90: Subsets II

class Solution90 {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ret = {{}};
        int prev_size = 0;
        for (int i = 0; i < nums.size(); i++) {
            int start_idx = (i != 0 && nums[i] != nums[i-1])?0:prev_size;
            prev_size = ret.size();
            for (int j = start_idx; j < prev_size; j++) {
                vector<int> inserted = ret[j];
                inserted.push_back(nums[i]);
                ret.push_back(inserted);
            }
        }
        return ret;
    }
};