#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int k = n;
	int cnt3=0;
	int cnt5 = 0;

	while (k != 0)
	{
		while (k >= 5)
		{
			cnt5++;
			k -= 5;
		}
		while (k != 0)
		{
			if (k % 3 == 0)
			{
				cnt3++;
				k -= 3;
			}
			else {
				cnt5--;
				k += 5;
				if (k > n)
				{
					printf("-1");
					return 0;
				}
			}
		}
	}
	printf("%d", cnt5 + cnt3);
}
