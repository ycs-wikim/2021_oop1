// 06_03_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


class CTest
{
public:
	int m_x;
};


int main()
{
	CTest *t = new CTest;
	t->m_x = 3;
	printf("%d\n", t->m_x);
	
	t->m_x = 78;
	printf("%d\n", t->m_x);
	delete t;

	return 0;
}

/*
class CTest
{
public:
	const int x;
	CTest() : x(3)
	{
		m_value = 0;
	}

	/// 복사 생성자	
	//CTest(const CTest& obj)
	CTest(CTest& obj) : x(90)
	{
		m_value = 2;
		///m_value = obj.m_value + 900;
		//m_value = obj.m_value;
	}
	
	int m_value;
};



int main()
{
	/// 일반 인스턴스 선언 : default 생성자가 호출
	CTest t;					/// m_value = 0
	t.m_value = 1;				/// m_value = 1

	/// 생성자가 인수를 받는 경우의 초기화 방법
	CTest t1(t);				/// 복사 생성자가 호출 --> m_value = 2
	CTest t2 = t;				/// 초기화를 수행하는 인스턴스 생성 --> 복사 생성자 호출 --> m_value = 2
	CTest t3;					/// 일반 인스턴스 선언 --> m_value = 0
	t3 = t;						/// 대입/할당 --> 그대로 복사가 발생

	std::cout << "t1: " << t1.m_value << std::endl;
	std::cout << "t2: " << t2.m_value << std::endl;
	std::cout << "t3: " << t3.m_value << std::endl;
}

/ *
class CA
{
public:
	const int yy;
	int m_x;
	/// 생성자
	CA() : yy(3)
	{
		printf("%s :: %p\n", __FUNCTION__, &m_x);
	}
	/// 소멸자
	~CA()
	{
		m_x = 35;
		printf("%s called [ %d ] \n", __FUNCTION__, m_x);
	}
};

class CB : public CA
{
public:
	int m_y;
	CB()
	{
		printf("%s :: %p\n", __FUNCTION__, &m_y);
	}
	~CB()
	{
		printf("%s called\n", __FUNCTION__);
	}
};

class CC : public CB
{
public:
	int xxx;
	void print__()
	{
		printf("Pro[ %d : %p ], Private[ %d : %p\n", yyy, &yyy, zzz, &zzz);
	}

	CC()
	{
		printf("%s called\n", __FUNCTION__);
	}
	~CC()
	{
		printf("%s called\n", __FUNCTION__);
	}
protected:
	int yyy;
private:
	int zzz;
};


void Iiasdf(int *x, const char string[8], int y = 67)
{
	char *ptr = (char*)string;
	ptr[0] = 65;
}


int main()
{
	int i = 0;
	CC c;
	char string[8] = "asdf123";
	int *ptr = (int*)&c;

	printf("Before: %s\n", string);
	Iiasdf(&i, string);
	printf("After: %s\n", string);
	printf("public: %d %d %d\n", c.m_x, c.m_y, c.xxx);

	for (; i < 5; i++)
	{
		printf("Memeber: %d - %p\n", *(ptr + i), ptr + i);
		*(ptr + i) = 950 + i;
	}
	printf("After....\n");
	for (i=0; i < 5; i++)
	{
		printf("Memeber: %d - %p\n", *(ptr + i), ptr + i);

	}

	c.print__();

	/*
	/// 상속 받은 클래스의 크기
	printf("i size: %d\n", sizeof(CB));
	/// 메모리 주소
	CB b;
	printf("B start address: %p\n", &b);
    std::cout << "Hello World!\n";
	* /
}
*/