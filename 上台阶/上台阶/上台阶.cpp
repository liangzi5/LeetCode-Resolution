#include<iostream>
using namespace std;

int STJ(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else if (n == 3)
		return 2;
	else
	{
		return STJ(n - 1) + STJ(n - 2);
	}

}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		cout << STJ(m) << endl;
	}
	return 0;
}