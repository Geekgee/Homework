//这是Geekgee的作业本
//学习视频：《【c++】 c++ primer 教程 猎豹网校》：https://www.bilibili.com/video/av16625546?from=search&seid=15382813425029884539
//参考书本：《C++ Primer》 王刚 杨巨峰译



//2018/7/26
//Class4_字面值常量
/*Demo14 整型字面值规则
#include<iostream>
int main()
{
	int a,b;
	short x;
	long y;
	long long m;
	unsigned int c;
	a = 1;
	b = 2;

	std::cout<< a + b <<std::endl;//3
	std::cout<< 2 + 3 <<std::endl;//5
	//字面值默认int或lang，整数+U/LL
	std::cout<< 10ULL <<std::endl;//10
    std::cout<< 014L <<std::endl;//12
	std::cout<< 0x14L <<std::endl;//20
	return 0;
}
*/

/*Demo15 浮点字面值规则
#include<iostream>
int main()
{
	//浮点值默认double，小数+f/F单精度，+L=long double
	std::cout<< 3.14159 <<std::endl;
	std::cout<< 3.14159f <<std::endl;
	std::cout<< 3.14159L <<std::endl;
	//科学计数法0.001=1e-3=1E-3
	std::cout<< 3.14159e-3 <<std::endl;
	std::cout<< 3.14159e3f<<std::endl;
	return 0;
}
*/

/*Demo16 布尔字面值
#include<iostream>
int main()
{
	int a;//a是变量
	a = 12;//12是字面值
	bool test = false;//false是字面值
	std::cout<<(true && false)<<std::endl;//0
	std::cout<<(true || false)<<std::endl;//1
	return 0;
}
*/

/*Demo17 字符字面值
#include<iostream>
#include<locale.h>
#include<wchar.h>
#include<stdlib.h>
int main()
{
	char x = 'a';
	wchar_t y =L'中';//宽字符
	printf("%c\n",'A');//不能是宽字符
	setlocale(LC_ALL,"chs");
	wprintf(L"%c\n", L'中');//宽字符
	return 0;
}
*/

//Demo18 转义字符
#include<iostream>
int main()
{
	std::cout<<"我说：\"我在学习C++！\""<<std::endl;//把“转义才能输出来
	std::cout<<"我的文件夹是： c:\\bit\\test"<<std::endl;//把\转义
	std::cout<<"Hello\n"<<std::endl;//换行
	std::cout<<"Hello\r\n"<<std::endl;//回车
	std::cout<<"M\123"<<std::endl;

	std::cout<<"2\nM"<<std::endl;//二进制转义2换行M
	std::cout<<"\062\012\115"<<std::endl;//八进制转义2换行M
	std::cout<<"\x032\x00A\x04d"<<std::endl;//十六进制转义2换行M

	std::cout<<'2';
	std::cout<<'\n';
	std::cout<<'M';
	std::cout<<std::endl;

	std::cout<<'\062';
	std::cout<<'\012';
	std::cout<<'\115';
	std::cout<<std::endl;

	std::cout<<'\x032';
	std::cout<<'\x00A';
	std::cout<<'\x04d';
	std::cout<<std::endl;
	return 0;
}

//2018/8/21
//*Demo19 字符串
#include<iostream>
#include<locale.h>
int main()
{ 
	std::cout << 'A' << std::endl;//字符，1个字节
	std::cout << "A" << std::endl;//字符串，"A"='A','\0'

	std::cout << "这是普通字符串." << std::endl;//普通字符串
	//std::cout << L"这是宽字符串." << std::endl;//宽字符串
	setlocale(LC_ALL, "chs");
	wprintf(L"%ls\n",L"这是宽字符串");

	std::cout << "a multi-line string " 
		"literal using concatentation" << std::endl;//分开段落要加双引号

	std::cout << "a multi-line string \
literal using \
concatentation" << std::endl;//续行符
	return 0;
}
