#include<iostream>
using namespace std;
#define Sian "可爱"
int main()
{
	cout << "hello world" << endl;
	//变量 类型 名称 = 值
	//常量 记录程序中不可以更改的部分
		// #define 宏常量
		// const 类型 名称 = 值
	cout << "sian这个人" << Sian << endl;

	//sizeof(类型或变量)
	int int1 = 1;
	short short1 = 1;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(short) = " << sizeof(short1) << endl;
	/*
	数据类型
	- 整型：表示的是整数数据
		- short:2字节
		- int:4字节
		- long:Windows4字节 linux（32位）4字节 linux（64位）8字节
		- long long:8字节
	- 浮点型
		- float:4B
		- double:8B
	- 字符型
		- char:1B
		- 用单引号括起来，只能是一个字符
		- 字符对应的ASCII码，cout<<(int)a；即可输出a的ASCII码 A64 a97
	- 字符串
		- C语言风格 char a[] = "sdf";
		- C++风格 string a = "asd"; 需要头文件#include<string>,vs2019不用加这个头文件了
		- 用双引号括起来
	- 布尔型
		- true 1
		- false 0
	*/

	float f1 = 3.14;
	//会默认3.14是double类型，用float接收时会产生一个类型转换，所以声明float变量时后边加f
	float f2 = 3.14f; 

	char c = 'y';
	cout << c << endl;

	//科学计数法 AeB = A*10^B
	cout << "3e-2 = " << 3e-2 << endl;

	/*
	转义字符
	\b 退格
	\n 换行
	\r 回车
	\t 水平制表
	\\ \
	*/

	//数据输入 cin>>变量名

	/*
	运算符
	- 算术运算符 + - * / % ++ --
	- 赋值运算符 = += -= *= /= %=
	- 比较运算符 ==相等 !=不等 > < >= <=
	- 逻辑运算符 !非 &&与 ||或
	*/
	int n1 = 2, n2 = 2;
	int n3 = ++n1, n4 = n2++;
	cout << "n1 = " << n1 << endl;
	cout << "n2 = " << n2 << endl;
	cout << "n3 = " << n3 << endl;
	cout << "n4 = " << n4 << endl;
	
	return 0;
}