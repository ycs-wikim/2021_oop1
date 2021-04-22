// 04_22_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void ex_5_5()
{
	int a = 0;				/// 4byte
	//char *p = &a;			/// 포인터의 자료형 변환 시, 암묵적 변환은 불가능
	char *s = (char*)&a;	/// 명시적 형변환

	/// s는 char형 포인터 : 산술 연산이 가능 : sizeof(자료형)*N
	*(s + 0) = 'C';		/// *s
	*(s + 1) = '+';		/// *( s + 1 ) --> s + 1 --> s + (sizeof(char)*1) --> 다음 바이트 위치
	*(s + 2) = '+';
	*(s + 3) = '\0';

	printf("%c%c%c%c\n", *((char*)&a), *(((char*)&a) + 1), *(((char*)&a) + 2), *(((char*)&a) + 3));
					////    *char*      
}


void ra_(int &p)
{
	/*
	char s1[] = "C++";		/// 변수
	char *s2 = "C++";		/// 상수

	/*
	int arr[3][5] = {};		/// all 0
	int arr1[3][5] = { { 1, 2, 3 }, };

	char str1[] = { 'C', '+', '+' };
	char str2[] = "C++";
	char str3[] = { "C++" };
	printf("sizeof str1[ %s ]: %d\n", str1, sizeof(str1));
	printf("sizeof str2[ %s ]: %d\n", str2, sizeof(str2));
	printf("sizeof str3[ %s ]: %d\n", str3, sizeof(str3));

	/*
	int i = 0;
	int arr1[8] = {};
	//int arr1[8] = { 1 };
	int arr2[8] = { 1, };

	for (i = 0; i < 8; i++)
		printf("%d %d\n", arr1[i], arr2[i]);
*/
	/*
	int a[3][5] = { 3, 4, 5 };
	int (*p)[5] = a;
	p = 678;
	*/
}


void function(int a[3])
{
	printf("%d %d %d\n", a[0], a[1], a[2]);
	a[0] = 11;
	a[1] = 12;
	a[2] = 67;
	printf("%d %d %d\n", a[0], a[1], a[2]);
}


int main()
{
	int a[3] = { 3, 6, 7 };
	function(a);
	printf("MAIN %d %d %d\n", a[0], a[1], a[2]);

	/*
	int a;
	int &ra = a;
	int *p = &a;

	ra = 1;
	ra_(a);
	printf("%d\n", a);

	/*
	int i = 0;
	int j = 0;
	int arr[3] = { 1, 2, 3 };
	int a[3][5] = { { 1, 2, 3, 4, 5 }, { 12, 13, 14, 15, 16 }, { 25, 26, 27, 28, 29 } };
	int *p = arr;
	int *pp = (int*)a;

	for (i = 0; i < 15; i++)
		printf("%d\t", *(pp + i));

	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			printf("IND: %d\n", a[i][j]);
	}
	/*
	printf("arr  : %d %d %d\n", arr[0], arr[1], arr[2]);
	printf("arr* : %d %d %d\n", *arr, *(arr + 1), *( arr + 2 ));
	printf("p    : %d %d %d\n", *p, p[1], *( p + 2 ));
	//printf("%d %d %d\n", *arr, *(arr + 1), *(arr + 2));


	/*
	int a = 3;
	int *p = &a;
	int **pp = &p;
	int ***ppp = &pp;
	ex_5_5();
	/// 일반 변수의 출력
	printf("a\t: v[ %d ] addr[ %p ]\n", a, &a);
	/// 포인터 변수의 정보 출력
	printf("*p\t: v[ %p ] addr[ %p ], *[ %d ]\n", p, &p, *p);
	/// 이중 포인터 변수의 정보 출력
	printf("**p\t: v[ %p ] addr[ %p ], *[ %p ] **[ %d ]\n", pp, &pp, *pp, **pp);
	/// 삼중 포인터 변수의 정보 출력
	printf("***p\t: v[ %p ] addr[ %p ], *[ %p ] **[ %p ] ***[ %d ]\n", ppp, &ppp, *ppp, **ppp, ***ppp);

	a = 8;
	/// 일반 변수의 출력
	printf("a\t: v[ %d ] addr[ %p ]\n", a, &a);
	*p = 123;
	/// 포인터 변수의 정보 출력
	printf("*p\t: v[ %p ] addr[ %p ], *[ %d ]\n", p, &p, *p);
	**pp = 345;
	/// 이중 포인터 변수의 정보 출력
	printf("**p\t: v[ %p ] addr[ %p ], *[ %p ] **[ %d ]\n", pp, &pp, *pp, **pp);
	***ppp = 567;
	/// 삼중 포인터 변수의 정보 출력
	printf("***p\t: v[ %p ] addr[ %p ], *[ %p ] **[ %p ] ***[ %d ]\n", ppp, &ppp, *ppp, **ppp, ***ppp);
	printf("a\t: v[ %d ] addr[ %p ]\n", a, &a);
    std::cout << "Hello World!\n";
*/
}
