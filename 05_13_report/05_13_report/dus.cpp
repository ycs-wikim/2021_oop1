#include <iostream>

/// call-by-value
int dus(int op1, int op2)
{
	int cnt = 0;

	for (;;)
	{
		/// 15 / 7
		/// 15 - 7 = 8 (1)
		/// 8 - 7 = 1  (2)
		/// 1 - 7 = -6
		op1 = op1 - op2;
		
		if (op1 <= 0)
			break;
		cnt++;
	}

	return cnt;
}