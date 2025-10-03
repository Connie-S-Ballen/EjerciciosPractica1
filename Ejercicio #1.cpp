#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

            for (int i = 0; i < n; i++) {
                int* p1 = &nums[i];
                for (int j = i + 1; j < n; j++) {
                    int* p2 = &nums[j];
                    if (*p1 + *p2 == target) {
                        return {i, j};
                    }
            }
        }
    return {};
    }        
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);

    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}