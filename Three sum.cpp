// https://leetcode.com/problems/3sum/
// 用 hash map 不理想，用雙指針
// 判斷標準 雙指針 (Two Pointers)  哈希表 (HashMap)
// 數據狀態 已排序 或 允許排序     無序，且不能改變順序
// 回傳目標    回傳 數值 (Values)   回傳 索引 (Indices)
// 查找邏輯    利用大小關係逼近 (大移左, 小移右)   利用 Key-Value 精確查找 (差值是多少?)
// 空間複雜度優：$O(1)$ (省空間)       差：$O(N)$ (費空間)
// 時間複雜度    主要是排序的時間 $O(N \log N)$   主要是掃描的時間 $O(N)$
// 去重難度     簡單 (跳過相鄰即可)      複雜 (需要額外邏輯)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort (nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > 0){ // 代表不可能找到
                break;
            }
            if (i > 0 && nums[i] == nums[i - 1]){
                continue; // 如果上一個迴圈的數字跟下一個迴圈的數字相同則跳過
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while (right > left){
                if (nums[i] + nums[left] + nums[right] > 0) {
                    right--;
                }
                else if (nums[i] + nums[left] + nums[right] < 0){
                    left++;
                }
                else{
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    while (right > left && nums[right] == nums[right - 1]){ //去重複
                        right--;
                    }
                    while(right > left && nums[left] == nums[left + 1]){ // 去重複
                        left++;
                    }
                    right--;
                    left++;
                }
            }
        }
        return result;
    }
};
