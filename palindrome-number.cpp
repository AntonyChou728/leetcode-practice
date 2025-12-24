// https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int original = x;
        long reversed = 0; // 使用 long 避免反轉後的數字超過 int 上限
        while (x > 0){
            int digit = x % 10;
            reversed = reversed * 10 + digit; 
            x /= 10;
        }
        return original == reversed;
    }
};
