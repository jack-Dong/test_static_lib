#include <iostream>  
#include "cpplib.h"
using namespace std;

//���������Ǹ�����������.

int main()
{
	int num1 = 100;
	int num2 = 1000;

	st::CppLib_add(num1, num2);
    st::CppLib_sub(num1, num2);
	string a = "�������Կ��һ�仰";
	st::Show s(a);
	s.say();
	return 0;
}