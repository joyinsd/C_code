#include <iostream>

using namespace std;

class String {
public:
	String() {
		cout << "String() : " << this << endl;
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		cout << "String(const char*) : " << this << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}
	String(const String& rhs) {
		cout << "String(const String&) : " << this << endl;
		len + rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData);
	}
	String(String &&rhs) {
		cout << "String(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;

	}

	~String() {
		cout << "~String() : " << this << endl;
		release();
		strData = NULL;
	}

	String &operator=(const String &rhs) {
		cout << "String &operator=(const String&) : " << this << endl;
		if (this != &rhs) {
			release();
			len = rhs.len;
			alloc(len);
			strcpy(strData, rhs.strData);
		}
		return *this;
	}
	String &operator=(String &&rhs) {
		cout << "String &operator=(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
		return *this;
	}


	char* GetStrData() const {
		return strData;
	}
	int GetLen() const {
		return len;
	}
	void SetStrData(const char* str) {
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}

private:
	void alloc(int len) {
		strData = new char[len + 1];
		cout << "strData allocated : " << (void*)strData << endl;
	}
	void release() {
		delete[] strData;
		if (strData) cout << "strData released : " << (void*)strData << endl;
	}

	char* strData;
	size_t len;
};

String getName() {
	cout << "===== 2 =====" << endl;
	String res("Doodle");
	cout << "===== 3 =====" << endl;
	return res;
}

int main() {
	String a;
	cout << "===== 1 =====" << endl;
	a = getName();
	cout << "===== 4 =====" << endl;

	//rvalue 우변에만 올 수 있는 값
	//lvalue 좌변 우변 다 올 수 있는 값
	//임시 객체는  rvalue

	String&& r = getName();
}