#include <iostream>  
#include "cpplib.h"
using namespace std;

//以上三句是给编译器看得.

int main()
{
	int num1 = 100;
	int num2 = 1000;

	st::CppLib_add(num1, num2);
    st::CppLib_sub(num1, num2);
	string a = "这是来自库的一句话";
	st::Show s(a);
	s.say();
	return 0;
}