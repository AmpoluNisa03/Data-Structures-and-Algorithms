﻿#include<stdio.h>

int sum(int n)
{
	if (n == 0)
		return 0;
	return sum(n - 1) + n;
}

int Isum(int n)
{
	int s = 0;
	int i;
	for (i = 1; i < n; i++)
		s = s + i;
	return s;
}
int main()
{
	int a;
	a = Isum(7);
	printf("%d ", a);
	return 0;
}