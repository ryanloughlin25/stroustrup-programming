#include "../std_lib_facilities.h"

int main()
{
	cout << "Enter a prefix math operation:\n";
	char op;
	double x, y;
	cin >> op;
	cin >> x;
	cin >> y;
	if (op == '+') {
		cout << x + y;
	} else if (op == '-') {
		cout << x - y;
	} else if (op == '*') {
		cout << x * y;
	} else if (op == '/') {
		cout << x / y;
	} else {
		cout << "operation not supported.";
	}
	cout << '\n';
	return 0;
}
