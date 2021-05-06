// 05_06_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;


/// 함수 정의 방법
/// 반환자료형 함수의이름( [ 인수, 인수1, 인수2, ... ] )
/// {
///		함수의 구현체를 작성.
/// }

/// 함수의 이름 생성 규칙
/// SNAKE case : get_user_information_by_database - 내부 코드
/// CAMEL case : GetUserInformationByDatabase - 라이브러리 코드
/*
void function()
{
	int a;
	int b;
	char cc;

	if (asdf == getUserId(getpid()))

	if (asdf == get_user_id(getuid()))
	{

	}
	a = a + b;
}
*/

void printf( )
{
	printf("ASDF\n");
}

void printf(int k)
{
	printf("K: %d\n", k);
}

int plusBB(int a, int b)
{
	printf("int NUMBER: %d\n", a);
	return a + b;
}

char plusBB(char a, int b)
{
	printf("double NUMBER: %c\n", a);
	return a + b;
}

int main()
{
	int a = 3;
	int b = 5;
	printf();
	printf( "%d\n", plusBB( a, b ));
	printf(35);
	printf();
}







/*
typedef struct STag
{
	int				m;			/// 4
	char			as;			/// 4 (1)
	char			str1[4];	/// 4
	char			*str2;		/// 4
} SType;

void call_by_value(SType a)
{
	a.m = 99;
}

void call_by_reference(SType *a)
{
	a->m = 99;
}

void call_by_ref(SType &a)
{
	a.m = 88;
}

/// 공용체 : LARGE_INTEGER

int main()
{
	SType a;
	a.m = 90;

	call_by_value(a);
	printf("%d\n", a.m);
	
	call_by_reference(&a);
	printf("%d\n", a.m);

	call_by_ref(a);
	printf("%d\n", a.m);
}








/*
/// Ex. 7-4

typedef struct STag
{
	int				m;			/// 4
	char			as;			/// 4 (1)
	char			str1[4];	/// 4
	char			*str2;		/// 4
} SType;

int main()
{
	//char a;	///	--> CPU에서 연산 수행해야 한다면, 4바이트로 패딩을 해야만 가능
	SType s1;
	s1.m = 2017;
	memcpy(s1.str1, "C++", 4);
	s1.str2 = (char*)"World";		/// ", "으로 묶여있는 문자열은 모두 Data 영역에 저장
									/// ", " 묶인 문자열은 모두 상수입니다.
	
	printf("Sizeof STYpe : %d\n", sizeof(SType));
	int a = 3;
	if (a == 3)
	{

	}


	*(s1.str2 + 1) = 'A';
	SType s2;
	s2 = s1;		/// 동일한 구조체 변수는 대입 연산이 가능하다! 구조체 변수끼리는 대입 연산만 가능
					/// 문제는 모두 복사해서 넣어주기 때문에 성능이 매우 느려진다.

	if (s1.m == s2.m)
	//if (s1 >= s2)
	{

	}

	printf("S1: %p %p %p %p\n", &s1.m, &s1.str1, &s1.str2, s1.str2);
	printf("S2: %p %p %p %p\n", &s2.m, &s2.str1, &s2.str2, s2.str2);
	cout << s2.m << " " << s2.str1 << " " << s2.str2 << endl;
	cout << s1.m << " " << s1.str1 << " " << s1.str2 << endl;
}


/*
/// 구조체 선언 : 예약어 구조체이름 { 자료형1; 자료형2; ... } ;
/// 실제 사용 : typedef A B; --> 앞으로 A는 B로 사용하겠다.

/// 선언된 구조체를 앞으로 B(EXP)라고 쓰겠다.
typedef
/// A
struct example_for_5_6_struct_ex
{
	int			a;
	int			b;
	int			c;
}
/// B : 대부분 대문자로 연결된 문자열로 선언
EXP, *PEXP;

int main()
{
	/// 배열 : 동일한 자료형을 연속으로 배치된 메모리에 할당하여 사용
	/// 구조체 : 서로 다른 자료형을 연속으로 배치된 메모리에 할당하여 사용
	/// 구조체의 사용 : 예약어 구조체이름 변수명;
	/// 구조체 멤버에 접근하기 위한 연산자 2개
	///		일반 구조체 변수 : .
	///		포인터 구조체 변수 : ->
	EXP ex;
	EXP ex1;
	PEXP exp = &ex;
	int *ptr = (int*)&ex;

	ex.a = 15;
	ex.b = 65;
	ex.c = 35;

	exp->a = 22;
	exp->b = 33;
	exp->c = 44;

	printf("%d %d %d\n", ex.a, ex.b, ex.c);

	*(ptr + 0) = 3;
	*(ptr + 1) = 35;
	*(ptr + 2) = 333;

	printf("%d %d %d\n", ex.a, ex.b, ex.c);

    std::cout << "Hello World!\n";
}
*/