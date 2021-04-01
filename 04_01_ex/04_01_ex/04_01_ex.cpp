// 04_01_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

/// 예제 4-3의 매크로
/// 매크로는 단순 치환 동작만 수행
/// 유명한 질문? --> 임시 변수 없이 변수의 값을 바꿀 수 있는 방법?
/// 답: 서로 XOR를 3번하면 바뀐다.
#define SWAP(a,b)	{ a ^= b; b ^= a; a ^= b; }

/// 예제 4-5 함수
int Add(int a, int b)
{
	return a + b;
}


int main()
{
	/// 반복문
	int i = 0;

	for (i = 10; i < 15; i += 4)
	{
		printf("i : %d\n", i);
	}
	printf("result: %d\n", i);


/* switch case~
	int a, b;

	switch (Add(1, 2))
	{
	case 3:
	case 0:
	case 1:
	case 2:
		a = 3;
		b = 7;
		if (1)
			cout << Add(a, b) << endl;
		break;
	case 4:
		a = 30;
		b = 70;
		if (1)
			cout << Add(a, b) << endl;
		break;
	default:
		cout << "Hello world" << endl;
		break;
	}


	/*
/// 140페이지 예제 4-3
	int a = 0;
	int b = 1;

	/// if 안의 값 --> 0 :: 조건식에 0이면 --> 항상 거짓
	if (0)
	{
		SWAP(a, b);
	}
	
/*
		a ^= b;
	/// endif
	b ^= a;
	a ^= b;
	
	cout << a << " " << b << endl;

/* if문 기본 구조
	int a = 15;
	/// if문 예제
	if (a > 5)
	{
		printf("3 > 5\n");

		printf("really?\n");
	}
	else
		printf("3 < 5\n");

		printf("YES\n");

/* 형변환
	int a = 165;
	char c = 0;
	float f = 0.0;
	bool t = false;

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));

	/// 묵시적 형변환 -> 하지 말것!!!
	c = a;		/// 경고가 없음.	:: 1 = 4; (메모리 구조 자체는 동일)
	//f = a;		/// 경고가 있음.	:: 4 = 4; (메모리 구조가 다름)
	/// 명시적 형변환
	f = (float)a;

	printf("%d %c\n", c, c);

	/// 타입(형) 변환 연산자
	printf("%d\n", 5 / 2);		/// --> 2.5 --> 2 --> 0.5? --> 버린다. --> 정보 손실


/* sizeof 
	int a = 0;
	int b[ 5 ] = { 1, 2, 3, };

	/// sizeof( ) ==> 메모리에 할당된 실제 크기를 반환
	printf("sizeof(int) : %d\n", sizeof(int));
	printf("sizeof(a) : %d\n", sizeof(a));
	printf("sizeof(b) : %d\n", sizeof(b));
/*
	int a = 5;

	/// 삼항 연산자 : ( 조건식 ) ? 참인경우 실행할 문장 : 거짓인 경우 실행할 문장;
	(a > 3) ? printf("a > 3\n") : printf("a !!! 3\n");

/*
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
