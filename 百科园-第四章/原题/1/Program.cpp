/*------------------------------------------------
【程序设计】
--------------------------------------------------
统计字符出现的频度
描述
写一个算法统计在输入字符串中各个不同字符出现的频度并将结果输出
(字符串中的合法字符为0-9之间的10个数字和A-Z之间的26个大写字母)。


输入
数据有一行，为待统计字符频度的字符串(不能包含空格)。

输出
输出n行，每一行为一个字符出现的频度（只输出存在的字符，格式为：字符：频度），
字符排列顺序按照ASCII码从小到大的顺序。

输入样例 1 
LITTLE5ILOVEYOU

输出样例 1
5:1
E:2
I:2
L:3
O:2
T:2
U:1
V:1
Y:1

输入样例 2 
LITTLE5ILOVEYOUaaaaaa@@@

输出样例 2
5:1
E:2
I:2
L:3
O:2
T:2
U:1
V:1
Y:1

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/




//数字0 的ASCII码值是48，A字母的ASCII码值是65

#include<string.h>
#include<fstream>
#include<stdlib.h>
#include<iostream>  
#include<iomanip> //是I/O流控制头文件，主要是对cin,cout之类的一些操纵运算子 
using namespace std;
void  bky(); 

void count(char *str,int num[])
{ //统计子符串str中合法字符出现的次数，将字符0-9和A-Z出现次数依次存储到数组num[]中
  //例如:0的出现次数存储到num[0],Z 的出现次数存储到num[35]中。 
	int k=0;
	int i;
	for(i=0;i<36;i++)
	    num[i]=0;
	while(str[k]!='\0')
	{
		/**********Begin**********/	
	



		/**********End**********/
		k++;			
	}
}	
 
	int main()
	{   
	    int i,num[36];
	   	char str[1000];
	    cin>>str;
		count(str,num);	
		for(i=0;i<10;i++)
		{
			if(num[i]!=0)
        		cout<<i<<":"<<num[i]<<endl;	
		}
  		for(i=10;i<36;i++)
		{   
	  		 if(num[i]!=0)
     	 		cout<<char(i+55)<<":"<<num[i]<<endl;	
		} 
		cout<<endl;		
	    bky(); 
		return 0;
	}
	
	void bky()
	{   
	    ofstream fout("output.txt");
  	    ifstream fin("in.txt");  
	    int k,i,num[36];
	 	char str[1000];
		for(k=0;k<5;k++)
		{
		   fin>>str;
		   count(str,num);	
			for(i=0;i<10;i++)
			{
				if(num[i]!=0)
        			fout<<i<<":"<<num[i]<<endl;	
			}
  			for(i=10;i<36;i++)
			{   
	  		 	if(num[i]!=0)
     	 			fout<<char(i+55)<<":"<<num[i]<<endl;	
			} 
			fout<<endl;	
			
		}
	}