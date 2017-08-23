/*
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int maxSubArray(vector<int>&nums)
{
	int len = nums.size();
	int sum = nums[len-1];
	int maxSum = sum;
	for (int i = len - 2; i >= 0; i--)
	{
		sum = max(sum + nums[i],nums[i]);
		maxSum = max(sum, maxSum);

	}
	return maxSum;
}

int main()
{
	vector<int> testArray = { -2,1,-3,4,-1,2,1,-5,4 };
	cout << maxSubArray(testArray);
	return 0;

}