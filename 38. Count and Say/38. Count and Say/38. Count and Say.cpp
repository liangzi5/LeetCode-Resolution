#include<iostream>
#include<string>
using namespace std;



string countAndSay(int n)
{
	
	string result="1";	
	int count = 1;
	string test = "1";
	
	n--;

	while (n)
	{
		result.assign("");
		for (int i = 0; i < (int)test.length(); i++)
		{
			if (i < (int)(test.length() - 1) && test[i] == test[i + 1])
			{
				count++;
			}

			else
			{
				result = result + to_string(count) + test[i];
				count = 1;
			}
		}
		
		test.assign(result);	
		n--;
	}

	cout << result << endl;;
	return result;
}

int main()
{	
    countAndSay(6);
	return 0;
}