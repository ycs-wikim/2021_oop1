// 0422_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
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
}
