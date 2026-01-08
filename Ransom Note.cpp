// https://leetcode.com/problems/ransom-note/
// 學會字串內的字母搜尋


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count [26] = {0};
        for (char c : magazine){
            count[c - 'a'] ++;
        }
        for (char c : ransomNote){
            count[c - 'a'] --;
            if (count[c - 'a'] < 0){
                return false;
            }
        }
        return true;

    }
};
