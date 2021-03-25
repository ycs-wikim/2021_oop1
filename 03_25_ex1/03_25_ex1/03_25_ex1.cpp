// 03_25_ex1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

/// C++ 표준 네임스페이스를 사용하겠다.
using namespace std;

/// 매크로 선언
/// #define(키워드) A B
/// --> 앞으로 A는 B로 사용하겠다.
#define PI	3.1415

/// 매크로 함수
/// #define(키워드) A(x) B
/// --> A함수를 호출하면 B의 동작이 실행된다.
#define Add(x,y)	x+y

/// 단순 선언 -> B를 적지 않아도 문제 없음
///#define OOP1

class CPerson
{
public:
	char m_Name[ 16 ];
	//char *m_Name;
	int m_Age;

	void print()
	{
		cout << "Name : " << m_Name << endl;
		cout << "Age : " << m_Age << endl;
	}
};


/// 새로운 자료형을 정의
/// keyword A B
/// --> A자료형을 앞으로 B로 쓰겠다.
typedef int INT;
typedef double D;
typedef float FF;


int main()
{
	auto i = 90;
	auto f = 3.14;

	printf("%d\n", i);
	printf("%f\n", f);

/*
	/// const : 변수의 상수화
	/// 특별한 경우를 제외하면, 반드시 초기화를 해야 합니다.
	/// 바로 뒤에 오는 누군가를 항상 상수화 시킨다.
	const int const x = 10;
	int a;
	int b;
	char c;
	const int const *cp;
	cp = &a;
	cp = &b;
	printf("%p %p %p\n", &a, &b, cp);
	//a = 2;


/*
	INT a = 3;
	D b = 3.0;
	FF f = 32.00;
	printf("A: %d\n", a);
	printf("B: %f\n", b);


	CPerson p[2];

	//p[0].m_Name = "Kim Do Hyung";
	memcpy(p[0].m_Name, "Kim Do Hyung", sizeof("Kim Do Hyung"));
	p[0].m_Age = 11;
	p[0].print();

	//p[1].m_Name = "Kim Na In";
	strncpy_s(p[1].m_Name, "Kim Na In", strlen("Kim Na In" ) );
	p[1].m_Age = 9;
	p[1].print();

	/// * 포인터 : 일반 변수와 달리 주소 값을 받아서 사용한다.
	/// --> 연산자 : *, &
	int *ptr;
	int a = 3;

	/// 변수의 주소를 받을 수 있음
	ptr = &a;

	/// %p를 이용하여 주소 값 형태로 출력 가능
	printf("%d %p\n", a, &a);
	printf("%d %p\n", ptr, &ptr);


	/// * 배열의 특징 : 동일한 자료형을 갖는 다수의 변수를 한번에 선언할 수 있다.
	/// 배열의 초기화 방법. 입력된 값 뒤의 모든 배열 값은 0으로 초기화가 진행
	int arr[8] = { 0, };
	int i = 0;

	for (; i < 8; i++)
	{
		printf("%d ] %d\n", i, arr[i]);
	}



	char str[] = "대한민국";
	int length = sizeof(str);
	cout << str << "   " << length << endl;

	wchar_t wstr[] = L"대한민국";
	int wlength = sizeof(wstr);
	
	cout << wlength << endl;
	cout << wstr << endl;

	wcout << wstr <<  endl;


	/// char(1byte) : | a | s | d | f | \0 |
	/// 아래와 같이 초기화하면 자동적으로 마지막에 NULL 문자가 추가됨
	char c[ ] = "asdf";

	/// wchar_t(2byte) : | a | \0 | s | \0 | d | \0 | f | \0 | \0 | \0 |
	/// 자동적으로 NULL 문자가 추가되지만 2byte가 문자열 형식이므로 두개의 NULL이 붙게됨
	wchar_t wc[ ] = L"asdf";

	printf("%s\n", c);
	printf("%s\n", wc);
	wcout << wc << endl;

	cout << __FILE__ << endl;
	cout << __LINE__ << endl;
	cout << __FUNCTION__ << endl;
	test();

/// 만약 OOP1이 선언되어 있다면
//#ifdef OOP1

#ifndef OOP1
    std::cout << "Hello " << PI << " World!\n";
/// OOP1이 선언되어 있지 않은 경우
#else
	std::cout << "Hello " << Add(3,8) << " Computer!\n";
/// #ifdef의 마지막을 알림
#endif
*/
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
