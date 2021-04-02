/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
基于链式存储结构的整数线性表，初始为空表，按照递增的方式进行有序插入来创建该线性表并进行输出。 
完成函数InsertOrderList(LinkList &L,ElemType x) 的代码填空，该函数功能是： 
设单链表L是一个递增的有序表或空表，将x插入其中后仍保持L的递增有序性。

输入
输入2行，第1行是所创建的链表中的元素个数， 后1行是n个整数，用空格分隔。

输出
1行，链表中所有元素从头到尾依次输出，元素之间用空格分隔。

样例输入1
3
35 50 32


样例输出1
32 35 50



--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/


#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<math.h>
#include<iostream>  
using namespace std;


#define OK 1
#define ERROR 0
typedef int Status; //Status 是函数返回值类型，其值是函数结果状态代码。
#define maxn 100

void  bky(); 
	 
typedef int ElemType;

typedef struct LNode {
	ElemType data; //数据域
	struct LNode *next; //指针域 
} LNode,*LinkList;

Status InitList(LinkList &L) { //算法2.6 单链表的初始化
	//构造一个空的单链表L
	L = new LNode; //生成新结点作为头结点，用头指针L指向头结点
	if(!L)
	  exit(OVERFLOW); 
	L->next = NULL; //头结点的指针域置空
	return OK;
}


void InsertOrderList(LinkList &L,ElemType x)
{ //设单链表L是一个递增的有序表或空表，将x插入其中后仍保持L的递增有序性。
	  LinkList s, q,pre;
	  pre=L;        //pre用于保存q的前驱，初值为头结点 
	  q=L->next;    //q初始化，指向首元结点 
	  s=new LNode;  //生成新结点 
	  s->data=x;
	/**********Begin**********/	





	/**********  End  **********/ 
}



	 
	int main()
	{
		int i,n;
		LinkList L,p;
		InitList(L); 
		ElemType e;
		cin>>n;	
		for(i=0; i<n; i++)
		{
			
			cin>>e;
			InsertOrderList(L,e);
		}
	
	 	p=L->next;
		 while(p)
		 {
	 		cout << p->data<<" ";
			p=p->next;
		 }	
		 cout << endl;
	    bky();
		return 0;
	}

void bky()
{
  	ofstream fout("output.txt");
  	ifstream fin("in.txt");  	
	
		int k,i,n;
		LinkList L,p;
		ElemType e;
		for(k=0;k<4;k++)
		{  
		   InitList(L); 
		   fin>>n;	
		   for(i=0; i<n; i++)
		   {
			
			fin>>e;
			InsertOrderList(L,e);
		   }
		  p=L->next;
		  while(p)
		  {
	 		fout << p->data<<" ";
			p=p->next;
		  }	
		  fout << endl;
		}


 
}
