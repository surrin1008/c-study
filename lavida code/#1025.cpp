#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, x;


	scanf("%d", &a);
	for (int i = 1;i <= a;i++)
	{
		scanf("%d", &b);
		int min = 0;
		int max = 0;
		double allplus = 0.0;
		for (int n = 1;n <= b;n++)
		{
			scanf("%d", &x);
			if (min == 0)
			{
				min = x;
			}
			else if (min > x)
			{
				min = x;
			}

			if (max == 0)
			{
				max = x;
			}
			else if (max < x)
			{
				max = x;
			}

			allplus += x;

		}
		allplus = (float)(allplus - (min + max)) / (b - 2);
		printf("%.2f\n", floor((allplus) * 100 + 0.5) / 100);
	}
	return 0;
}
