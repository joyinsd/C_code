#include <iostream>
#include <string.h> //strcpy, strrev, strcmp, strlen
using std::cout;
using std::endl;
using std::cin;

#pragma warning (disable : 4996)

bool isPalindrome(char* p);

int main() {
	char str[255];
	cout << "문자열 입력 : ";
	cin.getline(str, 255);

	if (isPalindrome(str)) //회문이면 true을 리턴, 평문이면 false을 리턴
		cout << str << "은(는) 회문 입니다.\n";
	else
		cout << str << "은(는) 평문 입니다.\n";
	return 0;
}

bool isPalindrome(char* p)
{
	//char copy[255];
	char* copy = new char[strlen(p) + 1];

	strcpy(copy, p);//복사본 : 주소부터 널문자까지 복사
	strrev(copy); //복사본 역순저장

	//strcmp : 두 문자열이 같으면 0을 리턴
	if (strcmp(copy, p) == 0) { //원본과 복사본 비교	
		delete[] copy; //동적 메모리를 제거
		return true;
	}
	else {
		delete[] copy;
		return false;
	}
}