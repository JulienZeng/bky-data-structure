/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
链栈的基本操作验证，完成基本操作的代码填空。 

输入
输入数据有两行，第一行为序列的长度n，第二行为n个整数序列a1,a2,a3...,an，当ai不等于-1时将ai进栈；当ai=-1时，输出栈顶元素并将其出栈。

输出
每行为相应的出栈元素。当出栈异常时，输出“POP ERROR”。     最后判定栈是否为空，若空输出“栈空！”，若不空输出栈顶元素！

样例输入1：
5
1 2 -1 -1 7

样例输出1：
2
1
栈顶元素为： 7



样例输入2：
5
1 -1 -1 2 2

样例输出2：
1
POP ERROR
栈空！


样例输入3：
5
2 3 5 6 9

样例输出3：
栈顶元素为： 9


--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/
/***链栈的实现***/
#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void  bky(); 

#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
typedef int SElemType;

typedef struct StackNode {
	SElemType data;
	struct StackNode *next;
} StackNode, *LinkStack;

//算法3.5　链栈的初始化
Status InitStack(LinkStack &S) { // 构造一个空栈 S，栈顶指针置空
	S = NULL;
	return OK;
}

//算法3.6　链栈的入栈
Status Push(LinkStack &S, SElemType e) {//在栈顶插入元素e

	LinkStack p;
	p = new StackNode; //生成新结点
	p->data = e; //将新结点数据域置为e
	p->next = S; //将新结点插入栈顶
	S = p; //修改栈顶指针为p
	return OK;
	
}

//算法3.7　链栈的出栈
Status Pop(LinkStack &S, SElemType &e) {//删除S的栈顶元素，用e返回其值
	/**********Begin**********/





		 /**********  End  **********/	
}
//算法3.8　取链栈的栈顶元素
SElemType GetTop(LinkStack S) {//返回S的栈顶元素，不修改栈顶指针
	if (S != NULL) //栈非空
		return S->data; //返回栈顶元素的值，栈顶指针不变
}

int StackEmpty(LinkStack S)
{//判定栈是否非空，空返回1，非空返回0
     	if (S == NULL) //栈空
     	  return 1;
     	else
     	  return 0;
}


int main() {
	LinkStack s;
	int n,t;
	SElemType e,temp;
	InitStack(s); 
	cin>>n;
	while(n--)
	{			
		cin>>e; 
		if(e!=-1)
		   Push(s,e);
		else
		{
			t=Pop(s,temp);
			if(t==0)
			  { //当出栈异常时，输出"POP ERROR",并结束。
			     cout<<"POP ERROR"<<endl;
			     break;			    				
			  } 
			else
			  cout<<temp<<endl;
		}			 
	}
	if(StackEmpty(s))
	   cout<<"栈空！"<<endl;	  
	else
	   cout<<"栈顶元素为： "<<GetTop(s)<<endl;
	cout<<endl;
	bky(); 
	return 0;
}


void bky()
{	
	ofstream fout("output.txt");
  	ifstream fin("in.txt");  
	LinkStack s;
	int k, n,t,flag;//************************
	SElemType e,temp;
	for(k=0;k<4;k++)
	{
		InitStack(s);
		fin>>n;
		flag=0; //************************
		while(n--)
		{			
			fin>>e; 
			if(flag==1)//当出栈异常时，输出"POP ERROR"并结束本组数据的输出。//****************
			  continue;//需要把后面数据过滤掉 //***********************
			if(e!=-1)
			   Push(s,e);
			else
			{
				t=Pop(s,temp);
				if(t==0)
				  { //当出栈异常时，输出"POP ERROR",并结束。
				     fout<<"POP ERROR"<<endl;
				     flag=1;  //******************************
					// break;  此处不能直接跳出循环，因为本组数据后面还有数据，会作为下组输入的，需要过滤掉	//*************				    		    				
				  } 
				else
				  fout<<temp<<endl;
			}			 
		}
		if(StackEmpty(s))
		   fout<<"栈空！"<<endl;	  
		else
	 	  fout<<"栈顶元素为： "<<GetTop(s)<<endl;
	 	fout<<endl;
		
	}
}