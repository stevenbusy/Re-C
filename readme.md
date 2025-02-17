就是两年不写C++快忘光了。我工作都找好了，又莫名其妙有上岸了。所以重拾写代码这个大业。从最基础的迅速过一遍，然后再写几个项目。虽然我会，但是说不定会有什么新收获呢。

![](https://gitee.com/LolitaAnn/rec/raw/master/pic.jpg)

# Note

## 1 基础

**变量**：类型 名称 = 值

`int num = 5;`

**常量**：记录程序中不可以更改的部分
`#define num 7`
`const int num 7`

**sizeof**(类型或变量)

**数据类型****

- 整型：表示的是整数数据
  - short:2字节
  - int:4字节
  - long:Windows4字节 linux（32位）4字节 linux（64位）8字节
  - long long:8字节
- 浮点型
  - float:4B
  - 会默认3.14是double类型，用float接收时会产生一个类型转换，所以声明float变量时后边加f
    `float f2 = 3.14f; `
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


**科学计数法** AeB = A*10^B

**转义字符**

| 字符 | 含义     |
| ---- | -------- |
| \b   | 退格     |
| \n   | 换行     |
| \r   | 回车     |
| \t   | 水平制表 |

**运算符**

- 算术运算符 + - * / % ++ --
- 赋值运算符 = += -= *= /= %=
- 比较运算符 ==相等 !=不等 > < >= <=
- 逻辑运算符 !非 &&与 ||或

## 2 程序流程结构

 最基本的三种程序运行结构：顺序、选择、循环

### 2.1 选择结构

**if语句** `if - esle if - esle`

**三目元算符**`条件?1:0`

**switch**`switch case: break`

### 2.2 循环结构

**while**`while(条件){条件满足执行}`

**do while**`do{循环语句}while(条件)`不管条件是否符合都会执行一次

**for**`for(起始表达式0;条件表达式1;终止表达式3){循环语句2}`执行顺序0 123 123 123……

**补充：随机数**

C/C++里没有自带的random(int number)函数。
如果你只要产生随机数而不需要设定范围的话，你只要用rand()就可以了：rand()会返回一随机数值, 范围在0至RAND_MAX（2147483647）间。

但是生成的随机数都只能是一次性的，如果你第二次运行的时候输出结果仍和第一次一样。这与srand()函数有关。srand()用来设置rand()产生随机数时的随机数种子。在调用rand()函数产生随机数前，必须先利用srand()设好随机数种子（seed）, 如果未设随机数种子, rand()在调用时会自动设随机数种子为1。上面的两个例子就是因为没有设置随机数种子，每次随机数种子都自动设成相同值1 ，进而导致rand()所产生的随机数值都一样。

srand()函数定义 ：`srand ((unsigned)int seed);`一般用时间做种子`srand((unsigned)time(NULL));`，需要头文件`#include<ctime>`

### 2.3 跳转语句

**break**用于跳出选择或者循环

**continue**跳过本次循环中未执行的语句继续下一循环

**goto**不要用

```c++
	cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	goto FLAG;
	cout << 4 << endl;
	cout << 5 << endl;
	FLAG:	//位置用冒号，一般都大写
	cout << 6 << endl;
```

##　3 数组

放在一块连续的内存空间，数组中每个元素都是相同的数据类型。

### 3.1一维数组

**定义方式**

`数据类型 数组名[长度];`
`数据类型 数组名[长度]={值1，值2……};`  
`数据类型 数组名={值1，值2……};`

**长度**`sizeof(arr)/sizeof(arr[0])`

数组名就是数组首地址

### 3.2**二维数组**

`数据类型 数组名[行][列];`
`数据类型 数组名[行][列]={{值1,值2},……};`  
`数据类型 数组名[行][列]={值1,值2……};`
`数据类型 数组名[][列]={值1,值2……};`

## 4 函数

封装代码，降低代码重复率。

**定义**：`返回值类型 函数名(参数列表) {函数体}`

**声明：**如果自定义函数写在main函数后边会报错，所以可以提前声明。

**==值传递==**：函数中值传递，形参的改变不会引起实参改变。因为内存中是给形参分配空间之后将实参的值赋值给形参，并不会影响实参本身。

<font color=red>**函数分文件编写**</font>

1. 创建后缀名为.h的头文件
2. 创建后缀名为.cpp的源文件，源文件中用`#include"头文件"`
3. 在有文件中写函数的声明
4. 在源文件中写函数的定义
5. 在代码中引用`#include"头文件"`

## 5 指针

指针就是一个地址。

**定义：**`数据类型 *指针名 `

在32位系统下指针4字节，64位占8字节。

**空指针：**指针变量指向内存中编号为0的空间，用于初始化指针很，空指针是不能访问的。`int *p = NULL;`

**野指针：**指针变量指向非法内存空间，程序中要避免出现野指针

**const修饰指针**：

- const修饰指针：常量指针，指针指向可以修改，值不可以修改

  ```c++
  const int* q = &a;
  *q = 20;	//×
  q = &b;		//√
  ```

  

- const修饰常量：指针常量，指针指向不可以改，指向的值可以改

  ```c++
  int* const s = &a;
  *s = 666; 	//√
  s = &b; 	//×
  ```

  

- const修饰指针又修饰常量：都不能改

**指针和数组**

```c++
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* a = arr; //数组名就是数组首地址
	for (int i = 0; i < 10; i++)
	{
		cout << *a << " ";
		a++;
	}
```

**指针和函数**

（4函数中提到）**==值传递==**：函数中值传递，形参的改变不会引起实参改变。因为内存中是给形参分配空间之后将实参的值赋值给形参，并不会影响实参本身。

**==地址传递==**：内存中给指针分配空间之后，指针指向对应的实参，函数运行时对，对形参指针指向的实参进行修改。

