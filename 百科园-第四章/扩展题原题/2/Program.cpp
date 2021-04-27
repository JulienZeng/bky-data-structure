/*
病毒检测：研究者将人的DNA和病毒DNA均表示成由一些字母组成的字符串序列。
然后检测某种病毒DNA序列是否在患者的DNA序列中出现过，如果出现过，则此人感染了该病毒，否则没有感染。
例如，假设病毒的DNA序列为baa，患者1的DNA序列为aaabbba，则感染，患者2的DNA序列为babbba，则未感染。
（注意，人的DNA序列是线性的，而病毒的DNA序列是环状的)
要求输入病毒DNA序列（长度<100）和人的DNA序列（长度<100），判定是否感染，感染输出"YES",未感染输出"NO" 
可以调用库函数实现，库函数介绍在代码末尾。
请将函数 int isVirus(char Person[],char Virus[])  补充完整！ 
 
输入样例1：
baa aaabbba
输出样例1：
YES

输入样例2：
baa babbba
输出样例2：
No

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/

#include<iostream> 
#include<fstream>
#include<string.h>
using namespace std;
void  bky(); 
int isVirus(char Person[],char Virus[])
{//判断人的DNA字符串Person，是否感染了病毒DNA字符串Virus,感染return 1,没有感染return 0
//**********Begin**********	









 // **********  End  **********		
	
} 
int main()
{
	char virus[100],Person[100];
	cin>>virus;
	cin>>Person;
	if(isVirus(Person,virus))
		cout<<"Yes"<<endl;
	else
	    cout<<"NO"<<endl;
	bky();
	return 0;
}
void bky()
{   
    ofstream fout("output.txt");
  	ifstream fin("in.txt");     	
	char virus[100],Person[100];
    for(int k=0;k<11;k++)
    { 
   		fin>>virus;
		fin>>Person;
		if(isVirus(Person,virus))
			fout<<"Yes"<<endl;
		else
	    	fout<<"NO"<<endl;	
	}

}

/*
允许调用下面的库函数实现，也可以直接实现 
 <string.h>中使用到的库函数说明：
1. strcpy
char *strcpy(char *destin, char *source);
功能：将source指向的字符串拷到destin。
2. strncpy
char *strncpy(char *destin, char *source, int len);
功能：将source指向的len个字符串拷到destin。
注：strncpy要额外加字符结束符！
 3. strcat
char* strcat(char * str1,char * str2);
功能: 把字符串str2接到str1后面,str1最后的'\0'被取消
 4. strstr
char* strstr(char* str1,char* str2);
功能:找出str2字符串在str1字符串中第一次出现的位置(不包括str2的串结束符)
返回: 返回该位置的指针,如找不到,返回空指针
5.格式：strlen （字符指针表达式）
功能：计算给定字符串的（unsigned int型）长度，不包括'\0'在内
说明：返回串的长度，不包括结束符'\0'在内。
6.strcmp 
声明：int strcmp(const char *str1, const char *str2)
参数
str1 -- 要进行比较的第一个字符串。
str2 -- 要进行比较的第二个字符串。
返回值
该函数返回值如下：
如果返回值小于 0，则表示 str1 小于 str2。
如果返回值大于 0，则表示 str1 大于 str2。
如果返回值等于 0，则表示 str1 等于 str2。
*/ 
