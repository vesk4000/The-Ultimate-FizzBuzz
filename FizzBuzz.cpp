#include <iostream>
#include <string>
#define maxm 128

using namespace std;

int n;///the max number that we go to
int m;///the number of dividers

int counter[maxm];///how many times have we gone without the current number being divisible by this divider
int div[maxm];///the divider itself
string s[maxm];///the word we have to add if the current number is divisible by the divider
bool flag;///have we outputted a word

void input();
void output();

int main()
{
	input();
	output();

	return 0;
}

///input()
void input()
{
	cin >> m;
	for(int i = 0; i < m; ++i)
	{
		cin >> div[i] >> s[i];
	}
	cin >> n;
}

///output()
void output()
{
	for(int i = 1;i <= n; ++i)///loop through the numbers up to n
	{
		flag = 0;///have we outputted a word

		for(int j = 0;j < m; ++j)///loop through all the dividers
		{
			++counter[j];///increment the counter of the current divider
			if(counter[j] == div[j])///is the current number divisible by the current divider
			{
				cout << s[j];///output the word
				counter[j] = 0;///set the counter to 0
				flag = 1;///we have outputted a word
			}
		}

		if(flag == 0)///have we not outputted a word
			cout << i;

		cout << endl;
	}
}
