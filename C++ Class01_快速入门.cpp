//这是Geekgee的作业本
//学习视频：《【c++】 c++ primer 教程 猎豹网校》：https://www.bilibili.com/video/av16625546?from=search&seid=15382813425029884539
//参考书本：《C++ Primer》 王刚 杨巨峰译



//2018/7/22
//Class1_快速入门

/*Demo1 HELLO WORLD！
#include<iostream>
int main()
{
	std::cout<<"Hello world!"<<std::endl;
return 0;
}
*/

/*Demo2 两变量算加法
#include<iostream>
int main()
{
	std::cout<<"Enter two numbers:"<<std::endl;
	int v1,v2;
	std::cin>>v1>>v2;
	std::cout<<"The sum of "<<v1<<" and "<<v2<<" is "<<v1+v2<<std::endl;
return 0;
}
*/

/*Demo3 引入头文件
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item book;
	std::cout<<"请输入销售的第一本书信息："<<std::endl;
	std::cin>>book;
	std::cout<<"你输入的信息是："<<std::endl;
	std::cout<<book<<std::endl;
}*/

/*Demo4 两本书判断同源相加，不同报错
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item item1,item2;
	std::cout<<"输入两本书的销售信息："<<std::endl;
	std::cin>>item1>>item2;
	if(item1.same_isbn(item2))//同源函数，检测括号内是否等于括号外，注意“.”
	{
	    std::cout<<item1+item2<<std::endl;
	}
	else
	{
		std::cerr<<"Data must refer to same ISBN"<<std::endl;
		return -1;//表示出错了
	}
	return 0;
}*/

/*Demo5 IF语句做选择，比较大小
#include<iostream>
int main()
{
	std::cout<<"Enter two numbers:"<<std::endl;
	int v1,v2;
	std::cin>>v1>>v2;

	int lower,upper;
	if(v1 <= v2){
		lower = v1;
		upper = v2;
	}else{
		lower = v2;
		upper = v1;
	}

    std::cout<<"两个数中比较小的数是："<<lower<<std::endl;
	std::cout<<"两个数中比较大的数是："<<upper<<std::endl;
	return 0;
}*/


/*Demo6 WHILE语句做循环，从1加到100
#include<iostream>
int main()
{
	int sum = 0; 
	int val = 1;
	while(val <= 100){
		sum+=val;//sum=sum+val
		++val;
	}
	std::cout<<"Sum of 1 to 100 inclusive is:"<<sum<<std::endl;
	return 0;
}*/

/*Demo7 FOR语句做循环，从1加到100
#include<iostream>
int main()
{
	int sum = 0;
	for(int val=1; val <= 100; ++val)
		sum += val;
	std::cout<<"Sum of 1 to 100 inclusive is:"<<sum<<std::endl;
return 0;
}*/

/*Demo8 WHILE语句做循环，输多少加多少
#include<iostream>
int main()
{
	int sum = 0,value;
	while(std::cin>>value)//当有输入时循环，没有输入时就不循环
		sum += value;
	std::cout<<"Sum is:"<<sum<<std::endl;
	return 0;
}*/

/*Demo9 输入书号求和，WHILE和IF嵌套
#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item total, trans;//total把所有输入项目加起来，trans输入的每一个项目
	if(std::cin>>total){//有数据输入
		while(std::cin>>trans)//只要有输入存进trans进行while循环
			if(total.same_isbn(trans))//ISBN书号一样
				total = total + trans;//最终结果保存到total里
			else{//ISBN书号不一样
				std::cout<<total<<std::endl;
				total = trans;
			}

	}else{//没有数据输入
		std::cout<<"No Data?!"<<std::endl;
		return -1;
	}
	return 0;
}*/

