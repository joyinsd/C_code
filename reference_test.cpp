#include <iostream>
#include <string.h> //문자열 관련 함수 //strcpy
using std::cout;
using std::endl;
using std::cin;

//C언어의 대부분의 함수들은 안정성의 이유로 4996경고가 발생한다.
//overflow(메모리 부족)등을 체크하지 못하기 때문이다.
//그 경고를 무시하고 쓰기 위해 아래의 명령을 추가한다.
#pragma warning (disable : 4996)

//overloading
void swap(int* p1, int* p2);
void swap(int& r1, int& r2);
void swap(double *p1, double* p2);
void swap(double& r1, double& r2);
void swap(char* p1, char* p2);

int main() {
	int a = 3, b = 5;
	//swap(&a, &b); //call by address
	swap(a, b);
	cout << "swapped a = " << a << ", b = " << b << endl;

	// double d1 = 1.1, d2 = 2.2;
	// //swap(&d1, &d2);
	// swap(d1, d2);
	// cout << "swapped d1 = " << d1 << ", d2 = " << d2 << endl;

	// char str1[10] = "odd", str2[10] = "Happyeven";
	// swap(str1, str2); //str1 == &str[0]
	// cout << "swapped str1 = " << str1 << ", str2 = " << str2 << endl;
	// return 0;
}

// void swap(int* p1, int* p2){
// 	int temp = *p1; //a == *p1, b == *p2
// 	*p1 = *p2;
// 	*p2 = temp;
// 	cout << "call by address\n";
// }

void swap(int& r1, int& r2){
	int temp = r1;
	r1 = r2;
	r2 = temp;
	cout << "call by reference\n";
}

// void swap(double* p1, double* p2){
// 	double temp = *p1; //a == *p1, b == *p2
// 	*p1 = *p2;
// 	*p2 = temp;
// 	cout << "call by address\n";
// }

void swap(double& r1, double& r2){
	double temp = r1;
	r1 = r2;
	r2 = temp;
	cout << "call by reference\n";
}

// void swap(char* p1, char* p2){
// 	char temp[255];
// 	//temp = p1; //주소를 변경해!!!
// 	//p1 = p2;
// 	//p2 = temp;

// 	//strcpy(도착지, 출발지);
// 	strcpy(temp, p1); //출발지 주소부터 널문자까지 temp주소에 복사
// 	strcpy(p1, p2);
// 	strcpy(p2, temp);
// }