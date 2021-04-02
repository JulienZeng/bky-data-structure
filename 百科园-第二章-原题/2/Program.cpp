/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
定义一个包含图书信息（书号、书名、价格）的链表，读入相应的图书数据来
完成图书信息表的创建，然后查找价格最低的图书，输出相应图书的信息。
注：所有图书价格范围：1~10000 之间 
样例输入1
3
9787302257646 Data-Structure 35
9787302164340 Operating-System 50
9787302219972 Software-Engineer 32


样例输出1
1
9787302219972 Software-Engineer 32



--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/


#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<fstream>
#include<iostream>  
#include<iomanip> //是I/O流控制头文件，主要是对cin,cout之类的一些操纵运算子 
using namespace std;
#define maxn 100

void  bky(); 
typedef struct
{
		char num[50];
		char name[50];
		int price;
}ElemType; 

typedef struct LNode
{
	    ElemType data;
		struct LNode *next;
} LNode,*LinkList;
 

void CreateList_R(LinkList &L,int n,ElemType A[]) 
{ //算法2.12 后插法创建单链表

	int i=0;
	LinkList p, r;
	L = new LNode;
	L->next= NULL; //先建立一个带头结点的空链表
	r = L; //尾指针r指向头结点
	while(n--)
	{ 
		p = new LNode;//生成新结点
		p->data = A[i++]; //A[]中元素值赋给新结点*p的数据域
	 	p->next = NULL;
		r->next = p;//将新结点*p插入尾结点*r之后 		
		r = p;//r指向新的尾结点*p				
	}

 
} 
void MinLinkList_R(LinkList &L,int &min) 
{ //返回链表中最低价格图书的价格 
    /**********Begin**********/






	/**********  End  **********/ 
} 
	 
	int main()
	{	
	    int n,i,min,nummin=0;
		LinkList L,p;
		ElemType A[maxn];
		
	    cin>>n;	
		for(i=0; i<n; i++)
		{
			cin>>A[i].num>>A[i].name>>A[i].price;
		}
	
		CreateList_R(L,n,A);
	    MinLinkList_R(L,min);
        
		p=L->next;
		while(p)
		{
			if(min==p->data.price)
			    nummin++;
			p = p->next;
		}
        cout<<nummin<<endl;        
		p=L->next;
		while(p)
		{
			if(min==p->data.price)
         	{
         		cout<<p->data.num<<" "<<p->data.name<<" "<<p->data.price<<endl;
		     }	
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
	    int k,n,i,min,nummin=0;
		LinkList L,p;
		ElemType A[maxn];
	for(k=0;k<4;k++)
    { 	 nummin=0; 
	    fin>>n;	
		for(i=0; i<n; i++)
		{
			fin>>A[i].num>>A[i].name>>A[i].price;
		}
	
		CreateList_R(L,n,A);
	    MinLinkList_R(L,min);
        
		p=L->next;
		while(p)
		{
			if(min==p->data.price)
			    nummin++;
			p = p->next;
		}
        fout<<nummin<<endl;        
		p=L->next;
		while(p)
		{
			if(min==p->data.price)
         	{
         		fout<<p->data.num<<" "<<p->data.name<<" "<<p->data.price<<endl;
		     }	
			p = p->next;		
		}
		fout<<endl;
    }
	}
