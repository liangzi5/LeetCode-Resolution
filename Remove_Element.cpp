#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>&nums, int val)
{
	if (nums.size() < 1)
	{
		return nums.size();
	}
	else
	{
		for (int i = 0; i <nums.size();)
		{
			if (nums[i] == val)
			{
				nums.erase(nums.begin() + i);

			}
			else
			{
				i++;
			}
		}
	}
	return nums.size();
}
int main()
{
	vector<int> num = { 3,2,2,3 };
	cout << removeElement(num,3);
	cout << endl;
	for (int element : num)
		cout << element << " ";
	cout << endl;
	return 0;
}