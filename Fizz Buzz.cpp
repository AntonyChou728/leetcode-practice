// https://leetcode.com/problems/fizz-buzz/description/
// learn vector and pushback

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> currstr; // 使用 vector 而非 字串
        for (int i = 1; i <= n; i++){
            bool dividedby3 = (i % 3 == 0);
            bool dividedby5 = (i % 5 == 0);

            if (dividedby3 && dividedby5) {
                currstr.push_back("FizzBuzz"); // 使用 push_back 加入 vector, push_back: 將目前的值加入vector的最尾端
            }
            else if (dividedby3) {
                currstr.push_back("Fizz");
            }
            else if (dividedby5) {
                currstr.push_back("Buzz");
            }
            else{
                currstr.push_back(to_string(i));
            }
        }
        return currstr;
    }
};
