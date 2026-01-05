// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
// 如果是偶數除二，基數則是-1
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num > 0){
            if (num % 2 == 0){
                num = num / 2;
            }
            else{
                num = num - 1;
            }
            count++;
        }
        return count;
    }
};

// bit operation version
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num > 0){
            if ((num & 1) == 0){
                num >>= 1; // 相當於 num = num / 2
            }
            else{
                num --;
            }
            count ++;
        }
        return count;
    }
};
