/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
设二叉树中每个结点的元素均为一个字符，按先序遍历的顺序建立二叉链表
输入为二叉树的前序序列（序列中元素为'#'时，表示该结点为空）。
编写函数返回这个树层次遍历序列。   
输入建立二叉树前序序列。 

输出
这个树层次遍历序列。

样例输入1
ab##c##


样例输出1
abc

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/

#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int I;
void  bky(); 


//二叉树的二叉链表存储表示
typedef struct BiNode
{				
	char data;						//结点数据域
	struct BiNode *lchild,*rchild;	//左右孩子指针
}BiTNode,*BiTree;

void CreateBiTree(BiTree &T,char s[])
{	
	//s存储了按先序次序遍历二叉树结点值构成的序列（序列中元素为'#'时，表示该结点为空），
	//利用s创建二叉链表表示的二叉树T

	char ch;
	ch=s[I++];
	if(ch=='#')  T=NULL;			//递归结束，建空树
	else{							
		T=new BiTNode;
		T->data=ch;					//生成根结点
		CreateBiTree(T->lchild,s);	//递归创建左子树
		CreateBiTree(T->rchild,s);	//递归创建右子树
	}								//else
}	//CreateBiTree



//*********************************************************************
 #define TRUE 1
 #define FALSE 0
 #define OK 1
 #define ERROR 0
 #define OVERFLOW -2 
  typedef int Status; // Status是函数的类型，其值是函数结果状态代码，如OK等

typedef BiTree QElemType ;//定义队列的元素类型
// 队列的顺序存储结构(循环队列)。在教科书第64页
 #define MAXQSIZE 50 // 最大队列长度+1
 typedef struct 
 { QElemType *base; // 初始化的动态分配存储空间
   int front; // 头指针，若队列不空，指向队列头元素
   int rear; // 尾指针，若队列不空，指向队列尾元素的下一个位置
 }SqQueue;

 // 循环队列的基本操作
//算法3.11　循环队列的初始化
Status InitQueue(SqQueue &Q) {//构造一个空队列Q
	Q.base = new QElemType[MAXQSIZE]; //为队列分配一个最大容量为MAXSIZE的数组空间
	if (!Q.base)
		exit(OVERFLOW); //存储分配失败
	Q.front = Q.rear = 0; //头指针和尾指针置为零，队列为空
	return OK;
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

int QueueEmpty(SqQueue Q)
{
	if (Q.front == Q.rear) //队列空
		return 1;
	else
		return 0;	
}
//******************************************************************
 

void  LevelOrderTraverse(BiTree T,char Lever[]) 
{//用队列层次遍历二叉树,将层次遍历结果用Lever数组返回 
	/*********Begin**********/ 







	 /**********  End  **********/ 
} 


	
int main()
{
	    BiTree T;
	    char s[100];
	    char Lever[100];
	    cin>>s;		 
		I=0; //全局变量，CreateBiTree()函数需要使用    
		CreateBiTree(T,s);
	    LevelOrderTraverse(T,Lever);
	    cout<<Lever<<endl;
   
		bky(); 
		return 0;

}
void bky()
{
	    ofstream fout("output.txt");
		ifstream fin("in.txt");  
	    BiTree T;
	    char s[100];
	    char Lever[100];
	    int k=5;
	    while(k--)
	    {
	       fin>>s;		 
		   I=0; //全局变量，CreateBiTree()函数需要使用    
	       CreateBiTree(T,s);
		    LevelOrderTraverse(T,Lever);
	        fout<<Lever<<endl; 
		
		}
	
 } 


