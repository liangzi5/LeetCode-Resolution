#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>&digits)
{
	int len = digits.size();
	int carry = 1;
	if (len == 0)
	{
		digits.push_back(1);
		return digits;
	}
	for (int i = len - 1; i >= 0; i--)
	{
		digits[i] =digits[i]+carry;
		if (digits[i] < 10)
		{
			return digits;
			carry = 0;
		}

		else
		{
			digits[i] = digits[i] - 10;
			carry = 1;
			if (i == 0)
			{
				digits.insert(digits.begin(), 1);
				return digits;
			}
		}


	}
	return digits;

}

int main()
{
	vector<int>test = { 9,9,9 };
	vector<int>result = plusOne(test);
	for (int element : result)
	{
		cout << element << " ";
	}
	return 0;
}