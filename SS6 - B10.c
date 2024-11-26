#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int check = 1;
	int i;
	for (i = 2; i * i <= n; i ++)
		if (n % i == 0)
		{
			check = 0;
			printf("%d is not prime", n);
			break;
		}
	if (check == 1)
		printf("%d is prime", n);
	return 0;
}
