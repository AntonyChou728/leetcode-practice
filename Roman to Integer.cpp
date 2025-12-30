// Roman to Integer
// https://leetcode.com/problems/roman-to-integer/
// 學到 Hash map 用法
// 解題思路 「如果你左邊的數字比右邊小，就要用減的；否則就是加的。」 例如： VI (6)：V(5)  大於 I(1) 用加的：5 + 1 = 6 IV (4)：I(1) 小於 V(5) 用減的：-1 + 5 = 4
class Solution {
public:
    int romanToInt(string s) {
        // 建立 hash map
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, 
            {'D', 500}, {'M', 1000}
        };

        int sum = 0;
        int n = s.length();

        for (int i = 0; i < n; i++){
            int current = roman[s[i]];
            // 條件：如果還沒到最後一個字，且「目前數字 < 下一個數字」
            if (i < n - 1 && current < roman[s[i + 1]]){
                sum -= current;
            } else{
                sum += current;
            }
        }

    return sum;
    }
};
