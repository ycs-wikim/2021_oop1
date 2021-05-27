// 05_27_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class CTest
{
	int m_I = 1;
	const int m_CI = 2;
	static int s_I;
	static const int s_CI = 4;

	double m_D = 11.1;
	const double m_CD = 2.2;
	static double s_D;
	static const double s_CD;

};

int CTest::s_I = 3;
double CTest::s_D = 3.3;
const double CTest::s_CD = 4.4;


/// 생성자와 소멸자
/// - 생성자 : 클래스가 인스턴스화 될때 자동으로 반드시 호출되는 함수
/// - 소멸자 : 클래스가 메모리 해제될 때 자동으로 반드시 호출되는 함수
/// 생성자와 소멸자가 선언되지 않으면, 컴파일러가 자동으로 만들어서 넣어준다!
///  --> 컴파일러에 의해 자동으로 추가되는 생성자와 소멸자를 default 생성자/소멸자라 한다.

class CTTest
{
public:
	const int		m_x;
	int				*buffer;
	/// 생성자 용도 : 인스턴스 초기화, 메모리 할당 기타 초기화 작업
	CTTest() : m_x(3)
	{
		//m_x = 3;
		buffer = (int*)malloc(sizeof(int));
		cout << "내가 만든 첫 생성자~" << endl;
	}

	/// 생성자는 중복 선언이 가능하다!
	CTTest(int x) : m_x(x)
	{
		//m_x = x;
		cout << "내가 만든 인수 받는 첫 생성자~" << endl;
	}

	/// 소멸자 : 메모리 해제, 불필요한 정보 제거 등
	/// 소멸자는 클래스에 하나만 선언이 가능
	~CTTest()
	{
		free(buffer);
		cout << "내가 만든 첫 소멸자~" << endl;
	}
	/* 인수를 허용하지 않음
	~CTTest(int x)
	{
		cout << "내가 만든 인수 받는 첫 소멸자~" << endl;
	}
	*/
};

int main()
{
	CTTest a(8);

	return 0;
}





/*
class CTest
{
public:
	/// 비정적 멤버 변수
	int				m_l = 4;

	int				m_2 = 5;

	/// 정적 멤버 변수 
	static int		s_I;
};

/// 비정적 멤버는 반드시 클래스 내에서만 초기화 해야 한다!
//int CTest::m_l = 4;		/// Error -> 클래스를 인스턴스화해서 .m_I = 1;
/// 정적 멤버는 클래스 소속이 아님!!!! -> 다른 위치에 미리 생성되어 있다!!!!!!
int CTest::s_I = 2;			/// 


int main()
{
	CTest a;
	printf("%p - %p - %p\n", &a.m_2, &a.m_l, &a.s_I);
/*
	CTest::s_I = 3;
	cout << "S_I " << CTest::s_I << endl;
* /
	CTest t1;
	t1.m_l = 1;
	t1.s_I = 2;
	printf("T1: %p\n", &t1.s_I);

	CTest t2;
	t2.m_l = 3;
	t2.s_I = 4;
	printf("T2: %p\n", &t2.s_I);

	cout << "t1: " << t1.m_l << " " << t1.s_I << endl;
	cout << "t2: " << t2.m_l << " " << t2.s_I << endl;
    std::cout << "Hello World!\n";
	
}
*/