#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
	vector<int> result;
	int len = nums.size();
	int startIndex = -1;
	int endIndex = -1;

	if (len == 0)
	{
		result.push_back(-1);
		result.push_back(-1);
		return result;
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			if (target == nums[i])
			{
				startIndex = i;
				break;
			}
		}

		for (int j = len - 1; j >= 0; j--)
		{
			if (target == nums[j])
			{
				endIndex = j;
				break;
			}
		}
		result.push_back(startIndex);
		result.push_back(endIndex);
		return result;
	}
	

}

int main()
{
	vector<int> test = {5,7,7,8,8,10};
	vector<int> result;
	int target = 8;
	result = searchRange(test,target);

	for (int element : result)
	{
		cout << element << " ";
	}
	return 0;
}