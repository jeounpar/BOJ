#include <iostream>

using namespace std;

bool ok[8] = {false, };
int arr[8]; 

void solve(int idx, int start, int n, int m)
{
	if (idx == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i];
			if (i + 1 != m)
				cout << ' ';
			else
				cout << '\n';
		}
		return ;
	}
	for (int i = start; i <= n; i++)
	{
		if (ok[i] == true)
			continue;
		ok[i] = true;
		arr[idx] = i;
		solve(idx + 1, i + 1, n, m);
		ok[i] = false;
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;
	solve(0, 1, n, m);
	return 0;
}