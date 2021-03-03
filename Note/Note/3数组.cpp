#include<iostream>
using namespace std;
int main()
{
	cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	goto FLAG;
	cout << 4 << endl;
	cout << 5 << endl;
	FLAG:	//位置用冒号，一般都大写
	cout << 6 << endl;

}