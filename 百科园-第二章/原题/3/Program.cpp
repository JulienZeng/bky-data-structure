/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
基于链式存储结构的图书信息表的创建和输出，这里要求必须采用头插法方式进行插入创建信息表。  
定义一个包含图书信息（书号、书名、价格）的链表，读入相应的图书数据来完成图书信息表的创建，然后逐行输出每本图书的信息。

输入
输入n+1行，第1行是所创建的图书表中的图书个数， 后n行是n本图书的信息（书号、书名、价格），每本图书信息占一行，书号、书名、价格用空格分隔，价格之后没有空格。其中书号和书名为字符串类型，价格为整数类型。

输出
总计n行，n本图书的信息（书号、书名、价格），每本图书信息占一行，书号、书名、价格用空格分隔。

样例输入1
3
9787302257646 Data-Structure 35
9787302164340 Operating-System 50
9787302164345 Software-Engineer 32


样例输出1
9787302219972 Software-Engineer 32 
9787302164340 Operating-System 50
9787302257646 Data-Structure 35


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
#include<iomanip> //是I/O流控制头文件，主要是对cin,cout之类的一些操纵运算子 
using namespace std;
#define maxn 100

void  bky(); 
typedef struct
{
		char num[50];
		char name[50];
		int  price;
}ElemType; 

typedef struct LNode
{
	    ElemType data;
		struct LNode *next;
} LNode,*LinkList;

void CreateList_H(LinkList &L, int n,ElemType A[])
 { //算法2.11 前插法创建单链表
	//A[]中存储了逆位序n个元素的值，建立长度为n的带表头结点的单链表L 
	/**********Begin**********/







	 /**********  End  **********/	
}	 

	 
	int main()
	{
		int n,i;
		LinkList L;
		ElemType A[maxn];
		
	    cin>>n;	
		for(i=0; i<n; i++)
		{
			cin>>A[i].num>>A[i].name>>A[i].price;
		}
	
		CreateList_H(L,n,A);
		    
	    LinkList p;
		p=L->next;
		while(p)
		{
			cout<<p->data.num<<" "<<p->data.name<<" "<<p->data.price<<endl;
			p = p->next;
		}
		cout<<endl;
		bky();
		return 0;
	}

void bky()
{
  	ofstream fout("output.txt");
  	ifstream fin("in.txt");  	
	
		int k,i,n;
		LinkList L;
		ElemType A[maxn];

	for(k=0;k<4;k++)
    {  
    
         fin>>n;	
		for(i=0; i<n; i++)
		{
			fin>>A[i].num>>A[i].name>>A[i].price;
		}
	
		CreateList_H(L,n,A);
		    
	    LinkList p;
		p=L->next;
		while(p)
		{
			fout<<p->data.num<<" "<<p->data.name<<" "<<p->data.price<<endl;
			p = p->next;
		}
		fout<<endl;
	}

 
}