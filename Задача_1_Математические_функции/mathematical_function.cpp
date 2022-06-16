#include "Header.h"

#pragma once

int sum_f(int x, int y)
{
	return x + y;
};
int subtract_f(int x, int y)
{
	return x - y;
};
int multiplication_f(int x, int y)
{
	return x * y;
};
int division_f(int x, int y)
{
	return x / y;
};
long long exponentiation_f(long long x, long long y)
{long long q=x;
	for (int i = y-1; i > 0; i--)
	{
		x = x*q;
	}
	return x;
};