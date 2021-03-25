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

void test()
{
	cout << __FILE__ << endl;
	cout << __LINE__ << endl;
	cout << __FUNCTION__ << endl;

}

int main()
{

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
