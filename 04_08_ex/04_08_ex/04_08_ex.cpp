// 04_08_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	int Sum = 0;
	int i = 0;	/// 초기값

	while (i <= 10)
	{
		Sum += i;
		i++;
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
	}
	
	cout << Sum << endl;
    cout << "Hello World!\n";
}
