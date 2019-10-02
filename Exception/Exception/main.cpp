#include<iostream>
using namespace std;
using std::cout;
using std::cin;

//#define EXCEPTION_SYNTAX
//#define DIVISION_BY_ZERO_EXCEPTION
#define FACTORIAL


void main()
{
	setlocale(LC_ALL, "");
#ifdef EXCEPTION_SYNTAX
	try
	{
		throw 123;
		throw "Smth";
	}
	catch (int error)
	{
		cout << "ERROR 404 NOT FOUND" << error << endl;
	}
	catch (const char*error)
	{
		cerr << "ERROR 404 NOT FOUND" << error << endl;
	}
	catch (...)
	{
		cerr << "ERROR 404 NOT FOUND" << endl;
	}

	cout << "Hello that`s ok!\n";
#endif // EXCEPTION_SYNTAX
#ifdef DIVISION_BY_ZERO_EXCEPTION

	int a = 20;
	int b = 0;
	try
	{
		cout << a / b << endl;
	}
	catch (std::exception&e)
	{
		cerr << e.what() << endl;
	}
	catch (...)
	{
		cerr << "ERROR 404 NOT FOUND\n";
	}
	_asm
	{

	}
#endif // DIVISION_BY_ZERO_EXCEPTION

#ifdef FACTORIAL
	int n;
	long long int f = 1;
	cout << "Input number to find factorial: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << " != ";
		f *= i;
		cout << f << endl;
	}

#endif // FACTORIAL
}