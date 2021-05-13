#include <iostream>

/// sub value
int sub(int op1, int op2)
{
	return op1 - op2;
}

/// sub address
void sub(int op1, int op2, int *result)
{
	*result = op1 - op2;
}

/// sub reference
void sub(int op1, int op2, int &result)
{
	result = op1 - op2;
}


void sub_main()
{
	int op1 = 237;
	int op2 = 23;
	int result = 0;

	result = sub(op1, op2);
	printf("sub value: %d\n", result);

	sub(op1, op2, &result);
	printf("sub address: %d\n", result);

	sub(op1, op2, result);
	printf("sub reference: %d\n", result);
}