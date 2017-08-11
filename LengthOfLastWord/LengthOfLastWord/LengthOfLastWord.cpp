#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string s)
{
	int len = s.length();
	while(s[len-1]==' ')
	{
		s.erase(len-1);
		len--;
	}
	//cout << s << endl;
	int count = 0;
	if (len == 0)
	{
		return 0;
	}
	else
	{
		for (int i = len - 1; i >= 0; i--)
		{

			if (s[i] == ' ')
			{
				break;
			}

		    if (i == 0)
			{
				count++;
				break;
			}
			
				count++;
			

			
		}
	}

	return count;

}

int main()
{
	string test = "b  a  ";
	cout << lengthOfLastWord(test);
	return 0;
}