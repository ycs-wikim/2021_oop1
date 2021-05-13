// 05_13_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

/// 함수 원형에 디폴트 인자를 사용했다면, 구현 함수에는 디폴트 인자를 생략해야 한다.
void function(int x, int y = 15);


void functionA(int a, int b = 23487, int c = 765, int d = 34)
{
	printf("%d %d %d %d\n", a, b, c, d);
}

/// 가변인자는 오른쪽 끝에서부터 사용 가능. 중간에 일반 매개변수가 존재하면 안된다.
/*
void functionB(int a, int b = 23487, int c, int d = 34)
{
	printf("%d %d %d %d\n", a, b, c, d);
}
*/


int main()
{
	functionA(78);
	functionA(678, 43287);

	function(3, 5);
	function(99);
}

/// 기본 인자 : 실인수가 없을 때 기본으로 설정할 값
void function(int x, int y)
{
	printf("%d %d\n", x, y);
}


/*
/// call-by-value : 일반 변수를 그대로 전달 -> 실인수 또는 임시 변수의 값이 매개변수로 복사
void cbv(int x)		/// int x = k; 속도 : 3
{
	x++;
}
/// call-by-address : 주소를 전달 -> 실인수 또는 임시 변수의 값이 매개변수로 복사
void cba(int *x)	/// int *x = &k; 1
{
	(*x)++;
}
/// call-by-reference : 주소를 전달 -> 실인수 또는 임시 변수의 값이 매개변수로 복사
void cbr(int &x)	/// int &x = k; 1
{
	x++;
}


int main()
{
	int k = 9;

	cbv(k);
	printf("K1 : %d\n", k);
	cba(&k);
	printf("K1 : %d\n", k);
	cbr(k);
	printf("K1 : %d\n", k);
}

/*
/// 함수 원형(프로토타입) -> 함수 이름과 인수의 자료형
void AB();
/// 함수 구현체의 내용을 그대로 복사해서 붙인 경우
//void AB(int a, int b);
/// 함수 구현체의 자료형만을 이용하여 선언
//void AB(int, int);
/// 함수 구현체와 변수명이 다르게 선언
void AB(int xsdfkljh, int afisduhfi324);


int main()
{
	AB();
	AB(3, 5);
    std::cout << "Hello World!\n";
}

void AB()
{
	printf("Hello AB\n");
}

void AB(int a, int b)		/// int a = 3, int b = 5
{
	printf("Hello AB(int, int)\n");
}

*/