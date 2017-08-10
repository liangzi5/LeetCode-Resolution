#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
	int sum = 0;
	int len = nums.size();
	if (nums.size() < 2)
	{
		return nums.size();

	}
	else
	{
		for (int i = 0; i < nums.size() - 1;)
		{
			if (nums[i] == nums[i + 1])
			{
				
				/*for (int j = i; j < nums.size()-1; j++)
				{
					nums[j] = nums[j + 1];
				}
				nums.pop_back();*/
				nums.erase(nums.begin()+i);
			}
			else
			{
				i++;
			}
		}
		return  nums.size();
	}
}

int main()
{
	vector<int> num = {1,1,1};
	cout << removeDuplicates(num) << endl;
	for (int element : num)
	{
		cout << element;
	}
	return 0;
}