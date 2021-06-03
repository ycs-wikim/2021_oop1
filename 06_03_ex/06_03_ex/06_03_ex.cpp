// 06_03_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class CA
{
public:
	int m_x;
	/// 생성자
	CA()
	{
		printf("%s :: %p\n", __FUNCTION__, &m_x);
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
};

class CC : public CB
{
public:
	int xxx;
	void print__()
	{
		printf("Pro[ %d : %p ], Private[ %d : %p\n", yyy, &yyy, zzz, &zzz);
	}
protected:
	int yyy;
private:
	int zzz;
};


int main()
{
	int i = 0;
	CC c;
	int *ptr = (int*)&c;

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
	*/
}
