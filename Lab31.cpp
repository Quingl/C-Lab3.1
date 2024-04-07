#include<iostream>

using namespace std;

int main()
{
	int n, k, s;
	cin >> n >> k >> s;
	int* zapravki = new int[s+1];

	for (int i = 0; i < s; i++)
		cin >> zapravki[i];
	zapravki[s] = n;
	int count = 0, rasst = 0;
	if (s == 0)
	{
		if (n > k)
			cout << -1;
		else
			cout << 0;
		return 0;
	}
	if (n <= k)
	{
		cout << 0;
		return 0;
	}
	for (int i = 0; i < s; i++)
	{
		int raznica = zapravki[i + 1] - zapravki[i];
		if (raznica > k || zapravki[0]>k)
		{
			cout << -1;
			return 0;
		}
		if (k + rasst - zapravki[i] >= raznica)
		{
			continue;
		}
		else
		{
			count++;
			rasst = zapravki[i];
		}
	}
	cout << count;
	return 0;
}