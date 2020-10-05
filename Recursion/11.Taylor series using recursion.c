#include<stdio.h>

double e(int x, int n)
{
	static double p = 1, f = 1;
	double a;

	if (n == 0)
		return 1;
	a = e(x, n - 1);
	p = p * x;
	f = f * n;
	return a + p / f;
}
int main()
{
	printf("%1f \n", e(1, 10));
	return 0;
}
