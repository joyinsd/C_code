#include <iostream>
using namespace std;

//function overloading : 함수명은 같지만 매개변수가 다른 경우
void outDate(int year, int month, int day);
void outDate(int year, int month, int day, char separ); //Default parameter : default값은 선언부에만 명시
void outDate(const char* pDate);

int main() {
	////문자열 상수 == 주소(포인터)
	//const char* p = "Hello";
	//const char* ptr = "odd";

	////출력 : 주소부터 널문자('\0') 이전까지 출력
	//cout << p << endl;
	//cout << ptr << endl;
	outDate(2024, 12, 14);
	outDate(1995, 6, 7, '$');
	outDate(2014, 8, 12, '#');
	outDate("2012년 8월 29일");

	return 0;
}

void outDate(int year, int month, int day)
{
	cout << year << '/' << month << '/' << day << endl;
}

void outDate(int year, int month, int day, char separ)
{
	cout << year << separ << month << separ << day << endl;
}

void outDate(const char* pDate) //pDate포인터는 문자열 상수(literal)의 주소를 저장한다.
{
	cout << pDate << endl;
}