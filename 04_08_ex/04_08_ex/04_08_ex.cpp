// 04_08_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

#define Add(a,b)	a+b

int main()
{
	int i = 0;
	int j = 0;
	/// 별찍기

	/// 라인수
	for (i = 0; i < 5; i++)
	{
		/// 공백 : 4, 3, 2, 1, 0
		///    i : 0, 1, 2, 3, 4

		/// 공백 : 0, 1, 2, 3, 4
		///   별 : 5, 4, 3, 2, 1
		///    i : 0, 1, 2, 3, 4
		for (j = 0; j < i; j++)
		{
			cout << " ";
		}

		/// 별의 개수
		for (j = 0; j < 5 - i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
/*
	지금 출력해야 하는 별 모양
	    *
	   **
	  ***
	 ****
	*****





	*****	: 공백 0, 별 5
	 ****	: 공백 1, 별 4
	  ***	:      2, 3
	   **   :      3, 2
		*   :      4, 1
*/
/*
	int x = 8;

	/// i 초기값 2
	for (int i = 2; i < 10; i++)
	{
		if( i < x )
			continue;	/// 자신을 포함하고 있는 가장 가까운 반복문으로 이동한다.

		if (i >= 5)
			break;		/// 자신을 포함하고 있는 가장 가까운 반복문을 빠져나간다.

		/// 처음 왔을때, i = 2, 3
		for (int j = 1; j < 10; j++)
			/// 처음 왔을 때, i = 2, 3; j = 1
			cout << i << " * " << j << " = " << i * j << endl;
		/// 처음 왔을 때, i = 2, j = 10
		cout << endl;
	}
/*
	do
	{
		if (Add(3, 5) > 10)
			break;
		if (Add(3, 4) > 10)
			break;
		if (Add(13, 5) > 10)
			break;
		std::cout << "모두 성공\n";
		return true;

	} while (0);

	std::cout << "실패\n";
	return false;
*/
/*
	int Sum = 0;
	int i = 0;	/// 초기값

	/// 조건식
	while (i <= 10)
	{
		Sum += i;
		i++;		/// 증감식
	}
	cout << Sum << endl;

	//for (;;)	/// 무한 반복
	for( i = 0, Sum = 0; i <= 10; i++ )
	{
		Sum += i;	/// i 값 누적
		//i++;		/// 증감식
		/*
		/// 조건식
		if (i > 10)		/// i = 11
			break;		/// 자신을 포함한 가장 가까운 반복문을 빠져나간다.
		*/
/*
	}
	cout << Sum << endl;

	i = 0;
	Sum = 0;			/// 초기식
	do
	{
		Sum += i;		/// i == 11
		i++;			/// 증감식
	} while (i <= 10);	/// 조건식
	
	cout << Sum << endl;
    cout << "Hello World!\n";
*/
}
