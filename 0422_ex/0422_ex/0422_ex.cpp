// 0422_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void fff(int a[3])
{
	a[0] = 99;
	a[1] = 199;
	a[2] = 399;
}

void fun(int &b)
{
	int a[3] = { 1, 2, 3 };
	fff(a);
	printf("%d %d %d\n", *a, *(a + 1), *(a + 2));
	/*
	int a[3][5] = { {1, 2, 3, 4, 5}, { 11, 22, 33, 44, 55}, { 66, 77, 88, 99, 100} };
	int *p = (int*)a;
	int i = 0;

	for (i = 0; i < 15; i++)
		printf("%d\t", *(p + i));


	/*
	char str1[] = { 'C', '+', '+' };		/// sizeof( str1 ) -> 
	char str2[] = "C++";
	char str3[] = { "C++" };

	printf("%d %s\n", sizeof(str1), str1);
	printf("%d %s\n", sizeof(str2), str2);
	printf("%d %s\n", sizeof(str3), str3);
	/*
	int a[8] = {};		/// 모든 요소가 0으로 초기화
	int a[8] = { 1, 2 };	/// 1,2,0,0,0,0,0,0
	int a[8] = { 1, };		/// 1,0,0,0,0,0,0,0
	int a[8] = { 0 };		/// 모든 요소가 0으로 초기화
	int a[8];				/// 모든 요소가 쓰레기 값으로 초기화
	/*
	int i = 0;
	int a[2] = { 0, 1 };
	int b[2] = { a[0], };
	int c[2] = { 1, 2 };
	int *p = &c;
	int *p = a;

	p = &i;
	a = &i;
	/// *( b + 0 ) = a;
	b = 35;
	*/
}

void function()
{
	int a;
	int &ra = a;
	// int *p = &a;

	//ra = 89;
	fun(a);
	// *p = 89;
	printf("%d\n", a);
	/*
	int i = 0;
	void *ptr = &i;
	char *p = (char*)ptr;
	/*
	int i = 0;
	int a[3] = { 1, 2, 3 };
	int *p = a;
	char c;
	p = &c;
	void *v;
	v = a;
	v = &i;
	v = &c;
	

	for (i = 0; i < 3; i++)
		printf("%d\n", a[i]);
	printf("\n");
	for (i = 0; i < 3; i++)
		printf("%d\n", *( a + i ));
	printf("\n");
	for (i = 0; i < 3; i++)
		printf("%d\n", *( p + i ) );

	printf("\n");
	for (i = 0; i < 3; i++)
		printf("%d\n", p[i]);
	*/
}

int main()
{
	function();
	/*
	int a = 0;
	char *s = (char*)&a;
	s++; ++s;		/// s = s + 1; -> + 1 ==> 1 * sizeof( TYPE );
	s--; --s;		/// s = s - 1; 

	*(s + 0) = 'C';
	*(s + 1) = '+';		/// s + 1 ==> s + 1 * sizeof( char )
	*(s + 2) = '+';		/// s + 2 ==> s + ( 2 * sizeof( char ) )
	*(s + 3) = '\0';	
	
	/// int *s; s = s + 1 == > s + 1 * sizeof(int)

	printf("%s\n", (char*)&a);
	printf("%c%c%c%c\n", *s, *(s + 1), *(s + 2), *(s + 3));
	printf("%c%c%c%c\n", *((char*)&a), *(((char*)&a) + 1), *(((char*)&a) + 2), *(((char*)&a) + 3));

	/*
	char c = 65;
	int *p = (int*)&c;		/// 명시적 형변환
	int *pp = &c;			/// 오류의 이유: 메모리 블록 처리 문제

	/*
	int a = 9;
	int *p = &a;
	int **pp = &p;
	int ***ppp = &pp;

	printf("a\tvalue[ %d ] addr[ %p ]\n", a, &a);
	printf("p\tvalue[ %p ] addr[ %p ] *[ %d ]\n", p, &p, *p);
	printf("pp\tvalue[ %p ] addr[ %p ] *[ %p ] **[ %d ]\n", pp, &pp, *pp, **pp);
	printf("ppp\tvalue[ %p ] addr[ %p ] *[ %p ] **[ %p ] ***[ %d ]\n\n", ppp, &ppp, *ppp, **ppp, ***ppp);

	a = 89;
	printf("a\tvalue[ %d ] addr[ %p ]\n", a, &a);
	*p = 123;		/// a = 123;
	printf("p\tvalue[ %p ] addr[ %p ] *[ %d ] a[ %d ]\n", p, &p, *p, a);
	**pp = 65;
	printf("pp\tvalue[ %p ] addr[ %p ] *[ %p ] **[ %d ] a[ %d ]\n", pp, &pp, *pp, **pp, a);
	***ppp = 99;
	printf("ppp\tvalue[ %p ] addr[ %p ] *[ %p ] **[ %p ] ***[ %d ] a[ %d ]\n\n", ppp, &ppp, *ppp, **ppp, ***ppp, a);

    std::cout << "Hello World!\n";
	*/
}
