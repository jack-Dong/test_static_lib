#include<iostream>
#ifndef CPPLIB_H
#define CPPLIB_H
namespace st
{
	using namespace std;
	int CppLib_add(int num1, int num2);  //����  
	int CppLib_sub(int num1, int num2);  //���� 
	//���������
	class Show
	{
	public:
		Show(string str);
		string  say();
	private:
		string words;
	};
	/*
		˵���ھ�̬���ͷ�ļ��в��ܰ������ʵ�� 
	*/
	//Show::Show(string str)
	//{
	//	this->words = str;
	//}
}
#endif