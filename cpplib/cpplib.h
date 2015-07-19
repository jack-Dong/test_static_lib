#include<iostream>
#ifndef CPPLIB_H
#define CPPLIB_H
namespace st
{
	using namespace std;
	int CppLib_add(int num1, int num2);  //声明  
	int CppLib_sub(int num1, int num2);  //声明 
	//下面测试类
	class Show
	{
	public:
		Show(string str);
		string  say();
	private:
		string words;
	};
	/*
		说明在静态库的头文件中不能包含类的实现 
	*/
	//Show::Show(string str)
	//{
	//	this->words = str;
	//}
}
#endif