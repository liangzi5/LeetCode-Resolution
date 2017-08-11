#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>&prices)
{
	int profit = 0;
	int maxProfit = 0;
	int len = prices.size();
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i+1; j < len; j++)
		{
			if (prices[i] <prices[j])
			{
				profit = prices[j] - prices[i];
				//cout << profit << endl;
				maxProfit = maxProfit > profit ? maxProfit : profit;
			}
		}
	}
	return maxProfit;
}



int main()
{
	vector<int> test = { 7, 1, 5, 3, 6, 4 };
	vector<int> test2 = { 7, 6, 4, 3, 1 };
	cout << maxProfit(test) << endl;
	cout << maxProfit(test2) << endl;
	return 0;
}