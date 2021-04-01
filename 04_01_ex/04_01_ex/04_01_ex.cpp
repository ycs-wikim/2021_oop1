// 04_01_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	cout << ~0 << endl;		/// 비트 반전의 NOT
	cout << !0 << endl;		/// 논리 연산의 NOT
/*
	int a = 3;
	int b = 0;

	/// NOT 연산자는 !
	cout << !!a << endl;
	cout << !b << endl;
	cout << !!b << endl; 


/* 실수하기 쉬운 코드 실수
	if (a == 1)	/// --> a == 1
	{
		cout << "a == 1 " << endl;
	}
	else
	{
		cout << "a != 1 " << endl;
	}
/*
	++a = 1;		/// OK		--> (a = a + 1 ==> a) = 1
	a++ = 1;		/// Error	--> a = a + ( 1 = 1 ) ==> l-value 가 상수이므로 오류

/*
	/// 증감 연산자
	/// ++a(전위형) : a = a + 1 이 가장 먼저 실행
	/// a++(후위형) : a = a + 1 이 가장 나중(문장 종료 직전)에 실행
	a++;	/// 증가		/// -> 6
	printf("%d\n", a);
	printf("%d\n", a++);	/// -> 7
	printf("%d\n", ++a);	/// -> 8
	++a;					/// -> 9
	printf("%d\n", a);		/// 9
    std::cout << "Hello World!\n";
*/
}
