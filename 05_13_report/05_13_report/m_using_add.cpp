#include <iostream>

/// cal-by-value
int mua(int op1, int op2)
{
	int cnt = 0;
	int result = 0;

	for (; cnt < op1; cnt++)
		result = result + op2;

	return result;
}

/// call-by-address
void mua(int op1, int op2, int *result)
{
	int cnt = 0;
	int res = 0;

	for (; cnt < op1; cnt++)
		res = res + op2;

	*result = res;
}

/// call-by-reference
void mua(int op1, int op2, int &result)
{
	int cnt = 0;
	int res = 0;

	for (; cnt < op1; cnt++)
		res = res + op2;

	result = res;
}


void mua_main()
{
	int op1 = 34;
	int op2 = 8;
	int result = 0;

	result = mua(op1, op2);
	printf("MUA value : %d\n", result);

	mua(op1, op2, &result);
	printf("MUA address: %d\n", result);

	mua(op1, op2, result);
	printf("MUA ref: %d\n", result);
}

