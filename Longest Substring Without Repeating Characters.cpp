// https://leetcode.com/problems/longest-substring-without-repeating-characters/
// 解題思路: hash map
// 建立 hash map 查找，看 hash map 裡面有沒有需要的元素，遍歷尋找需要的元素

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int left = 0;
        int maxlength = 0;
        for (int right = 0; right < s.length(); right++){
            char currentchar = s[right];
            if (map.count(currentchar) && map[currentchar] >=left){
                left = map[currentchar] + 1;
            }
            map[currentchar] = right;
            maxlength = max(maxlength, right - left + 1);
        }
        return maxlength;
    }
};
