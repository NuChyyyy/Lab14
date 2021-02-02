#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;
	char s = ' ';
	cout << a << s << b << s << c << s << x << s << (void*)y << s << z << "\n";
	cout << &a << s << (void*)&b << s << (void*)&c << s << &x << s << &y << s << &z << '\n';
	c = 'F';
	cout << a << s << b << s << c << s << x << s << (void*)y << s << z << "\n";
	*y = 'W';
	cout << a << s << b << s << c << s << x << s << (void*)y << s << z << "\n";
	*x = 6;
	cout << a << s << b << s << c << s << x << s << (void*)y << s << z << "\n";
	**z = 7;
	cout << a << s << b << s << c << s << x << s << (void*)y << s << z << "\n";
	return 0;
}
