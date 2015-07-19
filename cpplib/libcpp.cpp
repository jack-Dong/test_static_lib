#include"cpplib.h"
namespace st
{
	int CppLib_add(int num1, int num2)
	{
		cout << "num1 + num2 = " << num1 + num2 << endl;
		return num1 + num2;
	}

	int CppLib_sub(int num1, int num2)
	{
		return num1 - num2;
	}
	string Show::say()
	{
		cout << (this->words).c_str() << endl;
		return this->words;
	}
	Show::Show(string str)
	{
		this->words = str;
	}
}