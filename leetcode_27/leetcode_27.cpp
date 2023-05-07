#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums, int val) {
        vector <int> result;
        for (auto element : nums) {
            if (element != val)
                result.push_back(element);
        }
        nums.swap(result);
        return nums.size();
    }
};


int main()
{
    vector<int> nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
    Solution s;
    int k = s.removeDuplicates(nums, 1);
    for (int i = 0; i != k; i++) {
        cout << nums[i] << " ";
    }
}