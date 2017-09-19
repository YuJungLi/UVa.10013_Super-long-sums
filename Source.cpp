#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning( disable : 4996 )
using namespace std;

int num[1000002];
int main()
{
	int a, b, n, m;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d", &a, &b);
			num[i] = a;
			num[i] += b;
		}
		for (int i = m - 1; i >= 0; i--)
		{
			if (num[i] > 9)
			{
				num[i] %= 10;
				num[i - 1]++;
			}
		}
		for (int i = 0; i < m; i++)
			printf("%d", num[i]);
		printf("\n");
		if (n)
			printf("\n");
	}
	return 0;
}