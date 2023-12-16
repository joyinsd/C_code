#include <iostream>
#include <iomanip> //input output manipulator
using namespace std;

int main() {

	cout << left; //right
	for (int i = 1; i <= 100; i++) {
		cout << setw(8) << i; //printf("%5d", i);
	}
	cout << endl;

	char str[255]; //배열이름은 포인터(str == &str[0])

	cout << "문자열 입력 : ";
	cin >> str; //입력 : 주소부터 차례대로 저장한 후, 끝에 널문자('\0')가 추가 된다.


	//출력 : 주소부터 널문자('\0') 이전까지 출력
	cout << "입력 받은 문자열은 " << str << "입니다.\n";
	return 0;
}