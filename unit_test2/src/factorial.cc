/*
 * factorial.cc
 *
 *  Created on: 2017��7��4��
 *      Author: Administrator
 */
//factorial.cc
int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int add(int a,int b)
{
    return a+b;
}

