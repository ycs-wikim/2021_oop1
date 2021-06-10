// 06_10_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

/// 동적 (할당) 메모리 : OS에 요청해서 사용할 메모리를 별도로 할당 받는 메모리
/// 사용 후 반드시 해제

/// C : 요청[ malloc, calloc, realloc ] , 해제 [ free ]
/// C++ : 요청 [ new ] , 해제 [ delete ]

class CTest
{
public:
	CTest()
	{
		cout << "Contructor!\n" << endl;
	}

	~CTest()
	{
		cout << "소멸자!\n" << endl;
	}
};


void main()
{
	cout << "<malloc>" << endl;
	/// 생성자가 호출이 안되고
	CTest *pT1 = (CTest*)malloc(sizeof(CTest));
	/// 소멸자가 호출이 안되고...
	free(pT1);

	cout << "<new>" << endl;
	/// 생성자가 호출되고
	CTest *pT2 = new CTest;
	/// 소멸자가 호출된다.
	delete pT2;
}


/*
class CTest
{
	/// friend class 친구할클래스명; -> 친구 클래스는 모든 멤버에 접근 가능
	friend class CChild;
	/// friend 반환타입 함수명(인수); -> 함수에서 모든 멤버에 접근 가능
	friend void main();

public:
	void Func()
	{
		m_Public++;
		m_Protected++;
		m_Private++;
	}

	/// public 멤버는 어디서나 누구든지 사용이 가능
	int m_Public = 1;

protected:
	/// protected 멤버 : 특별한 관계(상속)가 있어야만 외부에서 사용이 가능!
	int m_Protected = 2;

private:
	/// private 멤버 : 나만 사용 가능!
	int m_Private = 3;
};


class CChild : public CTest
{
public:
	void Func()
	{
		m_Public++;		/// CTest public 멤버
		m_Protected++;	/// CTest protected 멤버는 상속 상태이기 때문에 접근 가능
		m_Private++;	/// CTest private 멤버는 무조건 접근 불가!
	}
};

void main()
{
	CTest t;
	t.m_Public++;		/// public 멤버 -> 접근 가능
	t.m_Protected++;	/// protected 멤버 -> 접근 불가
	t.m_Private++;		/// private 멤버 -> 접근 불가
}
*/


/*
class CMember
{
public:
	int m_Value;
	int m_value;
	int value;
	int v;
};

class CTest
{
public:
	char t_V;
	char t_v;
	char t;

	CMember* operator ->()
	{
		return &m_Member;
	}

	CMember m_Member;
};

int main()
{
	CTest t;
	t->m_Value = 1;

	/// t. 과 t->의 멤버가 다르게 출력된다.
	
	cout << t.m_Member.m_Value << endl;
}
*/

/*
class CTest
{
public:
	/// 반환타입 : CTest -> 자기자신
	/// 연산자 중복 정의 : 반환타입 operator +(연산자) ( 인수 )
	CTest operator + (int arg)
	{
		CTest t;
		/// m_Value = t.m_Value => 3 + 3
		t.m_Value = m_Value + arg;
		/// t.m_Value = 6
		return t;
	}

	CTest operator + (const CTest& arg);

	int m_Value = 0;
};

/// operator + (인수)
/// 객체 + (인수)
/// + 중복연산이 가능하려면 반드시 객체가 선행되어야 함
/// 자기자신 t1 , 인수 t2
CTest CTest::operator+(const CTest& arg)
{
	CTest t;
	/// m_Value => 1
	/// arg.m_Value => 2
	t.m_Value = m_Value + arg.m_Value;
	/// t.m_Value = 3;
	return t;
}


int main()
{
	CTest t1;
	t1.m_Value = 1;

	CTest t2;
	t2.m_Value = 2;

	/// CTest s = t;
	/// CTest s = t + 3;
	CTest s = t1 + t2 + 3;

	/// c = ( t1 + t2 -> t ) + 3 + t1;
	/// c = t + 3 + t1;
	/// c = t + t1;
	/// c = t
	/// c = t
	CTest c = t1 + t2 + 3 + t1;
	//CTest c = 3 + t1;

	cout << s.m_Value << endl;
    std::cout << "Hello World!\n";
}
*/
