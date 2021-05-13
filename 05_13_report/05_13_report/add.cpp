#include <iostream>

/// 더하기를 call-by-value
int add(int op1, int op2)
{
	return op1 + op2;
}

/// call-by-address
void add(int op1, int op2, int *result)
{
	*result = op1 + op2;
}

/// call-by-reference
void add(int op1, int op2, int &result)
{
	result = op1 + op2;
}

void add_main()
{
	int op1 = 87;
	int op2 = 23;
	int result = 0;

	/// value
	result = add(op1, op2);
	printf("add value : %d\n", result);

	/// address
	add(op1, op2, &result);
	printf("add address : %d\n", result);

	/// reference
	add(op1, op2, result);
	printf("add reference : %d\n", result);
}