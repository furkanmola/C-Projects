#include <iostream>

using namespace std;

void non_return_func()
{
	cout << "there is no returnable function.\n";
}

int return_func(int *a)
{
	++*a;
	return *a;
}

int main()
{
	int x = 4;
	non_return_func();
	cout << return_func(&x);
	return 0;
}
