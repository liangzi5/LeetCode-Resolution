/*Given a sorted array and a target value, return the index if the target is found.If not, 
return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1, 3, 5, 6], 5 ¡ú 2
[1, 3, 5, 6], 2 ¡ú 1
[1, 3, 5, 6], 7 ¡ú 4
[1, 3, 5, 6], 0 ¡ú 0

*/

#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>&nums, int target)
{
	int len = nums.size();
	int index = 0;
	if (len == 0 || target < nums[0])
		return 0;
    if (target > nums[len - 1])
		return len;
	
		for (int i = 0; i < len; i++)
		{
			if (nums[i] == target)
			{
				index = i;
				break;
			}
			else if (i<len-1&&target > nums[i]&&target<nums[i+1])
			{
				index = i+1;
				break;
			}
		}

		return index;
}




int main()
{
	vector<int> vec = { 1,3,5,6 };
	int target = 0;
	int result= searchInsert(vec,target);
	cout << result<<endl;
	return 0;
}

