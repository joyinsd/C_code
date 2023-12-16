#include <iostream>

using namespace std;

int sum(int a, int b, int c=0, int d=0, int e=0){
    return a+b+c+d+e;
}

int main()
{
    cout << "sum(1, 2)=" << sum(1, 2) << endl;
    cout << "sum(1, 2, 3)=" << sum(1, 2, 3) << endl;
    cout << "sum(1, 2, 3, 4)=" << sum(1, 2, 3, 4) << endl;
    cout << "sum(1, 2,3, 4, 5)=" << sum(1, 2, 3, 4, 5) << endl;

    return 0;
}