// stl.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

#include <stack>
#include <queue>
#include <vector>

/// template
template <class T1>
T1 add(T1 a, T1 b)
{
	cout << "A : " << a << endl;
	cout << "B : " << b << endl;

	return a + b;
}

/// STL(Standard Template Library) -> 컨테이너
/// -> 자료형과 관계 없이 처리할 수 있도록 구현된 특수 기능



int main()
{
	int i = 0;
	vector<int> v;
	v.push_back(2375);
	v.push_back(4387);
	v.push_back(87);

	for (; i < v.size(); i++)
		printf("%d\n", v[i]);
	v.clear();


	queue<char> q;
	q.push(65);
	q.push(68);
	q.push(75);
	printf("%c - %c\n", q.front(), q.back());
	q.pop();
	printf("%c - %c\n", q.front(), q.back());
	q.pop();
	printf("%c - %c\n", q.front(), q.back());
	q.pop();

	stack<int> s;
	s.push(333);
	s.push(888);
	s.push(777);

	printf("%d\n", s.top());
	s.pop();
	printf("%d\n", s.top());
	s.pop();
	printf("%d\n", s.top());
	s.pop();

	int i1 = 3, i2 = 8;
	char c1 = 65, c2 = 66;
	float f1 = 1.1f, f2 = 2.2f;
	double d1 = 5.6, d2 = 6.7;

	cout << add(i1, i2) << endl;
	cout << add(c1, c2) << endl;
	cout << add(f1, f2) << endl;
	cout << add(d1, d2) << endl;

    std::cout << "Hello World!\n";
	return 0;
}
