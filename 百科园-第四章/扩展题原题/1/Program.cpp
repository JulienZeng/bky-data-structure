/*
判定两个长度为6的字符串是否同一个项链序列。
，可以是顺序针，也可以是反时针，同时可以从任意位
置开始，例如：123456 和432165可以认为是同一个项链序列。 
可以调用库函数实现，库函数介绍在代码末尾。
输入样例1：
123456
765432
输出样例1：
No 

输入样例2：
123456
165432
输出样例2：
YES 

输入样例3：
123456
143256
输出样例3：
No 

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/


#include <string.h>
#include<fstream>
#include<iostream>  
using namespace std; 
#define X 6  //序列长度为6 
void  bky(); 


int equal(char q[],char p[])
{//p序列 和 q序列进行比较，若是相同项链序列返回1，否则返回0  
	//**********Begin**********





			    
 // **********  End  **********	     
}
int main()
{   
    int n,i;
    char a[X+1],b[X+1];
	cin>>a;	//输入a序列	
	cin>>b;	//输入b序列	

	if(equal(a,b))
  	 	cout<<"YES\n";	
	else
	    cout<<"NO\n";	
	bky();
	return 0;
}

void bky()
{   
    ofstream fout("output.txt");
  	ifstream fin("in.txt"); 
     
	int k, n,i;
    char a[X+1],b[X+1];
    
    for(k=0;k<11;k++)
    { 
    	fin>>a;	//输入a序列	
	    fin>>b;	//输入b序列	
	 	if(equal(a,b))
  	 		fout<<"YES\n";	
		else
	   		fout<<"NO\n";
	
	}

}

/*
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
 int strcmp(const char *str1, const char *str2) 把 str1 所指向的字符串和 str2 所指向的字符串进行比较。

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