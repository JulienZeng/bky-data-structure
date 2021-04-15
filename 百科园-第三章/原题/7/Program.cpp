/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
链队列的基本操作验证，完成基本操作的代码填空。 

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

/***链队的基本操作***/

#include<iostream>
using namespace std;
#include<fstream>
using namespace std;
void  bky(); 

#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int QElemType;
typedef int Status;


//- - - - - 队列的链式存储结构- - - - - 
typedef struct QNode {
	QElemType data;
	struct QNode *next;
} QNode, *QueuePtr;
typedef struct {
	QueuePtr front; //队头指针
	QueuePtr rear; //队尾指针
} LinkQueue;

//算法3.16　链队的初始化
Status InitQueue(LinkQueue &Q) {//构造一个空队列Q
	Q.front = Q.rear = new QNode; //生成新结点作为头结点，队头和队尾指针指向此结点
	Q.front->next = NULL; //头结点的指针域置空
	return OK;
}

//算法3.17　链队的入队
Status EnQueue(LinkQueue &Q, QElemType e) {//插入元素e为Q的新的队尾元素
	/**********Begin**********/




		 /**********  End  **********/	
}

//算法3.18　链队的出队
Status DeQueue(LinkQueue &Q, QElemType &e) {//删除Q的队头元素，用e返回其值 

	QueuePtr p;
	if (Q.front == Q.rear)
		return ERROR; //若队列空，则返回ERROR
	p = Q.front->next; //p指向队头元素
	e = p->data; //e保存队头元素的值
	Q.front->next = p->next; //修改头指针
	if (Q.rear == p)
		Q.rear = Q.front; //最后一个元素被删，队尾指针指向头结点
	delete p; //释放原队头元素的空间
	return OK;

}

//算法3.19　取链队的队头元素
QElemType GetHead(LinkQueue Q) {//返回Q的队头元素，不修改队头指针
	if (Q.front != Q.rear) //队列非空
		return Q.front->next->data; //返回队头元素的值，队头指针不变
}

int QueueEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear) //队列空
		return 1;
	else
		return 0;	
}

int main() {
	LinkQueue Q;
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
	LinkQueue Q;
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