/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
编写算法，实现下面函数的功能。
函数 Index(SString S, SString T, int pos) :
返回模式T在主串S中第pos个字符之后第s一次出现的位置。若不存在，则返回值为0,其中，T非空，1≤pos≤StrLength(S)

输入
总计2行。首先输入主串，然后输入模式串(注：这里字符串不能包含空格！)

输出
若匹配成功，输出"YES 第X个字符处首次匹配"，否则返回"NO" 

样例输入1
voidinsert
void

样例输出1
YES 第1个字符处首次匹配

样例输入2
voidinsert
insert

样例输出2
YES 第5个字符处首次匹配


--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/


/***字符串匹配算法***/
#include<iostream>
#include<fstream>
using namespace std;

#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
void  bky(); 

#define MAXSTRLEN 255   		//用户可在255以内定义最长串长
typedef struct{   
   char ch[MAXSTRLEN];	//存储串的一维数组  ,下标0的分量闲置不用 
   int length;		  //串长度   
}SString; 
 
int  strlen(char *s)
{
	int i=0;
	while(s[i]!='\0')
	  i++;
	return i;
}


//算法4.1　BF算法
int Index(SString S, SString T, int pos)
{
	//返回模式T在主串S中第pos个字符之后第s一次出现的位置。若不存在，则返回值为0
	//其中，T非空，1≤pos≤StrLength(S)
	int i = pos;
	int j = 1;
	
		
	/**********Begin**********/	
	




	/**********End**********/
	
	if (j > T.length)
		return i - T.length;
	else
		return 0;
	return 0;
}//Index

int main()
{
	int w; 
	SString S,T; //定义 主串，模式串
	cin>>(S.ch+1);   //输入主串，下标0的分量闲置不用 
	cin>>(T.ch+1);  //输入模式串，下标0的分量闲置不用 
	//cout<<S.ch+1<<endl;
	//cout<<T.ch+1<<endl; 
	S.length=strlen(S.ch+1);//***********************
	T.length=strlen(T.ch+1);//***********************
	w= Index(S,T,1);
	if(w) 
	   cout<<"YES 第"<<Index(S,T,1)<<"个字符处首次匹配\n";
	else
	   cout<<"NO\n"; 
	bky();
	return 0;
}

void bky()
{
    ofstream fout("output.txt");
  	ifstream fin("in.txt");  
	int k,w; 
	SString S,T; //定义主串，模式串
	
	for(k=0;k<5;k++)
	{
		fin>>(S.ch+1);   //输入主串，下标0的分量闲置不用 
		fin>>(T.ch+1);  //输入模式串，下标0的分量闲置不用 
		S.length=strlen(S.ch+1);//***********************
		T.length=strlen(T.ch+1);//***********************
		w= Index(S,T,1);
		if(w) 
		   fout<<"YES 第"<<Index(S,T,1)<<"个字符处首次匹配\n";
		else
	 	   fout<<"NO\n"; 
	}
}