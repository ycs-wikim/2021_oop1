// 05_20_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

/// 구조체(C) Vs. 클래스(C++의 구조체)
struct SASDF
{
public:
	int			x;

	void printX()
	{
		printf("%d\n", x);
	}

private:
	int			K;

	char		C;
};

/// 클래스 선언 방법: 예약어 클래스명{
/// JAVA와 다른 점 : 클래스 선언시 권한을 줄 수 없다.
//public class CFamily
class CFamily
{
	int			member;
/// 권한 설정
protected:
	char*		m_FamilyName;
public:
/// 권한 설정 이후
	int			x;

	char		K;

/// 다른 권한 만날때까지 설정된 권한 유지
public:
	void SetFamilyname(char* arg)
	{
		m_FamilyName = arg;
	}
};


/// 상속 : 반드시 권한 설정을 해야 한다.
/// C++에서 권한을 생략하면 --> private 이다.
/*
private			private			private
protected						private
public							private

private			protected		private
protected						protected
public							protected

private			public			private
protected						protected
public							public
*/
class CName : public CFamily
{
private:
		char* m_Name;
		void asdf();
public:
	/// 함수 원형
	void SetName(char* arg);

	void ShowName()
	{
		cout << m_FamilyName << " " << m_Name << endl;
	}
};

void CName::asdf()
{

}


/// 클래스 멤버 함수의 외부 선언
/// 클래스명::(범위연산자)
void CName:: SetName(char* arg)
{
	m_Name = arg;
}



int main()
{
	char fname[10] = "KIM";
	char lname[10] = "Won iL";
	CName name;

	name.SetFamilyname(fname);
	name.SetName(lname);
	name.ShowName();

    std::cout << "Hello World!\n";
}
