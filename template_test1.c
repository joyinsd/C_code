#include <iostream>

using std::endl;
using std::cout;

template <typename type>
void display(type a, type b, type c)
{
    cout << a << " " <<  b << " " << c << " " << endl;

}

int main()
{
    display(3, 5, 6);
    display(3.5, 5.5, 6.5);
}