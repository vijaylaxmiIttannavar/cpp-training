#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int>nm;

        for (int i = 0;i < nums.size(); i++)
        {
            int t = target - nums[i];
            if (nm.find(t) != nm.end())
            {
                return { nm[t], i };
            }
            nm[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    int target = 9;
    vector<int>nums = { 2, 7, 11, 15 };
    nums =  twoSum(nums, target);

    for (auto i : nums)
        cout << i;

}

