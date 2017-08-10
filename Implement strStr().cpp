#include<iostream>
using namespace std;

int strStr(string haystack, string needle)
{
	bool isOk = true;
	if (haystack == needle||needle=="")
		return 0;

	int haystackLen = haystack.length();
	int needleLen = needle.length();

	if (needleLen > haystackLen)
		return -1;

	for (int i = 0; i < haystackLen; i++)
	{
		isOk = true;
		if (haystack[i] == needle[0])
		{
			for (int j = 0; j < needleLen; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					isOk = false;
					break;
				}
			}
			if (isOk)
			{
				return  i;
			}
		}
	}
	return -1;

}

int main()
{
	cout << strStr("", "") << endl;

	return 0;
}