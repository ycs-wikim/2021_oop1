// 04_15_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


void function4(int *x)			/// int *x = &x;
{
	printf("%s &x : %p %p\n", __FUNCTION__, &x, x);
	*x = 6232439;			/// *x == a
}


void function3(int *x)			/// int *x = &x;
{
	printf("%s &x : %p %p\n", __FUNCTION__, &x, x);
	*x = 3;			/// *x == a
	function4(x);
}


void function2(int *x)			/// int *x = &x;
{
	printf("%s &x : %p %p\n", __FUNCTION__, &x, x);
	*x = 321;			/// *x == a
	function3(x);
}


void function1(int *x)			/// int *x = &x;
{
	printf("%s &x : %p %p\n", __FUNCTION__, &x, x);
	*x = 123;			/// *x == a
	function2(x);
}


int main()
{
	int a = 3;
	char k = 'a';
	char *p = &k;

	function1(&a);
	printf("%s &x : %p[ %d ]\n", __FUNCTION__, &a, a);
/*
	/// 2. 포인터 변수에 대해서
	//int *p = NULL;				/// 자료형 * 변수명;
	int *p = nullptr;

	/// 1. 일반 변수에 대해서 : * 연산자를 사용할 수 없음
	int a = 3;			/// 자료형 변수명;
	printf("a: %d\n", a);
	printf("a: %p\n", &a);			/// & : 뒤 변수의 주소 값을 반환하는 연산자
	//printf("a: %d\n", *a);

	/// int* = int (X)
	/// int* = int*
	p = &a;							/// & : 뒤 변수의 주소 값을 반환하는 연산자

	printf("p: %p\n", p);
	printf("&p: %p\n", &p);
	printf("*p: %d\n", *p);			/// * : 가리키는 주소의 실제 값을 가져온다.
*/
}
