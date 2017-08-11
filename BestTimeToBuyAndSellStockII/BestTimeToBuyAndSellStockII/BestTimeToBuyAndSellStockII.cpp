#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>&prices)
{
	int sum = 0;
	if (prices.size() < 2)
		return sum;

	for (int i = prices.size() - 1; i >0 ; i--)
	{
		if (prices[i-1] < prices[i])
		{
			sum += prices[i] - prices[i-1];
		}
	}
	return sum;
}

int main()
{
	vector<int> vec = { 1,2 };
	cout << maxProfit(vec)<<endl;
	return 0;

}