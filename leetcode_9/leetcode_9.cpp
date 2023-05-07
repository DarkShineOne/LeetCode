#include <iostream>


class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int store_val = x;
        long reverse_x = 0;
        short rem = 0;
        while (x) {
            rem = x % 10;
            reverse_x = reverse_x * 10 + rem;
            x /= 10;
        }
        return store_val == reverse_x;
    }
};

int main()
{
    Solution s;
    std::cout << s.isPalindrome(10);
    std::cout << s.isPalindrome(0);
    std::cout << s.isPalindrome(424);
    std::cout << s.isPalindrome(124);
}
