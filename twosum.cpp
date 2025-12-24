// https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int a = 0; a < n; a++){
            for (int b = a + 1; b < n; b++){
                if (nums[a] + nums[b] == target){
                    return {a, b};

                }
            }
        }
        return{};
    }
};
