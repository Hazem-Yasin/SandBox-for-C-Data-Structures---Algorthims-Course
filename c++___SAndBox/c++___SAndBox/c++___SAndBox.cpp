#include <iostream>
#include <stdio.h>


void fun(int* A, int n)
{
	A[0] = 25;
}

int main()
{
	int A[5] = { 2,4,6,9,10 };
	fun(A, 5);
}
