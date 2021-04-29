#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {

    int currentSum = nums[0], totalSum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
      currentSum = max(nums[i], currentSum + nums[i]);
      totalSum = max(totalSum, currentSum);
    }
    return totalSum;
  }
};