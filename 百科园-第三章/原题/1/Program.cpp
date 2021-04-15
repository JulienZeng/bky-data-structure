/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
循环队列的基本操作验证，完成基本操作的代码填空。 

输入
输入数据有两行，第一行为序列的长度n，第二行为n个整数序列a1,a2,a3...,an，当ai不等于-1时将ai进队；当ai=-1时，输出队头元素并将其出队。

输出
每行为相应的出队元素。当出队异常时，输出“出队错误！”。     最后判定队列是否为空，若空输出“队空！”，若不空输出队头元素！

样例输入1：
5
1 2 -1 -1 7

样例输出1：
1
2
队头元素为： 7




样例输入2：
5
1 -1 -1 2 2

样例输出2：
1
出队错误！
队空！



样例输入3：
5
2 3 5 6 9

样例输出3：
队头元素为：2



--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/

/***循环队列基本操作***/

#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void  bky(); 

#define MAXQSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int QElemType;
typedef int Status;

typedef struct {
	QElemType *base;//初始化时动态分配存储空间
	int front;//头指针
	int rear;//尾指针
} SqQueue;

//算法3.11　循环队列的初始化
Status InitQueue(SqQueue &Q) {//构造一个空队列Q
	Q.base = new QElemType[MAXQSIZE]; //为队列分配一个最大容量为MAXSIZE的数组空间
	if (!Q.base)
		exit(OVERFLOW); //存储分配失败
	Q.front = Q.rear = 0; //头指针和尾指针置为零，队列为空
	return OK;
}

//算法3.12　求循环队列的长度
int QueueLength(SqQueue Q) {//返回Q的元素个数，即队列的长度
	return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}

//算法3.13　循环队列的入队
Status EnQueue(SqQueue &Q, QElemType e) {//插入元素e为Q的新的队尾元素
	

	if ((Q.rear + 1) % MAXQSIZE == Q.front) //尾指针在循环意义上加1后等于头指针，表明队满
		return ERROR;
	Q.base[Q.rear] = e; //新元素插入队尾
	Q.rear = (Q.rear + 1) % MAXQSIZE; //队尾指针加1
	return OK;
	
}

//算法3.14　循环队列的出队
Status DeQueue(SqQueue &Q, QElemType &e) {//删除Q的队头元素，用e返回其值

	if (Q.front == Q.rear)
		return ERROR; //队空
	e = Q.base[Q.front]; //保存队头元素
	Q.front = (Q.front + 1) % MAXQSIZE; //队头指针加1
	return OK;

}

//算法3.15　取循环队列的队头元素
QElemType GetHead(SqQueue Q) {//返回Q的队头元素，不修改队头指针

	/**********Begin**********/




/**********  End  **********/	
}

int QueueEmpty(SqQueue Q)
{
	if (Q.front == Q.rear) //队列空
		return 1;
	else
		return 0;	
}

int main() {
	SqQueue Q;
	int n,t;
	QElemType e,temp;
	InitQueue(Q);
	cin>>n;
	while(n--)
	{			
		cin>>e; 
		if(e!=-1)
		   EnQueue(Q,e);
		else
		{
			t=DeQueue(Q,temp);
			if(t==0)
			  { //当出队异常时，输出"出队错误！"
			     cout<<"出队错误！"<<endl;
			     break;			    				
			  } 
			else
			  cout<<temp<<endl;
		}			 
	}
	if(QueueEmpty(Q))
	   cout<<"队空！"<<endl;	  
	else
	   cout<<"队头元素为： "<<GetHead(Q)<<endl;
	cout<<endl;
	bky(); 
	return 0;
}

void bky() 
{
	ofstream fout("output.txt");
  	ifstream fin("in.txt");  
	SqQueue Q;
	int k,n,t,flag;//************************
	QElemType e,temp;
	
	for(k=0;k<6;k++)
	{
		InitQueue(Q);
		fin>>n;
		flag=0; //******************************
		while(n--)
		{			
			fin>>e; 
			if(flag==1)//当出队异常时，输出"出队错误！"并结束本组数据的输出。//****************
			  continue;//需要把后面数据过滤掉 //***********************
			if(e!=-1)
			   EnQueue(Q,e);
			else
			{
				t=DeQueue(Q,temp);
				if(t==0)
				  { //当出队异常时，输出"出队错误！"
				     fout<<"出队错误！"<<endl;
				     flag=1;  //******************************
					// break;  此处不能直接跳出循环，因为本组数据后面还有数据，会作为下组输入的，需要过滤掉	//*************				    				
				  } 
				else
				  fout<<temp<<endl;
			}			 
		}
		if(QueueEmpty(Q))
		   fout<<"队空！"<<endl;	  
		else
		   fout<<"队头元素为： "<<GetHead(Q)<<endl;
		fout<<endl;		
	}

}