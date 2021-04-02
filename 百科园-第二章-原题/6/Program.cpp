/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
定义一个包含图书信息（书号、书名、价格）的链表，
读入相应的图书数据来完成图书信息表的创建，
然后根据指定的待入库的新图书的位置和信息，
将新图书插入到图书表中指定的位置上，最后输出新图书入库后所有图书的信息。
输入
总计n+3行。首先输入n+1行，其中，第一行是图书数目n，后n行是n本图书的信息（书号、书名、价格），
每本图书信息占一行，书号、书名、价格用空格分隔。之后输入第n+2行，内容仅为一个整数，代表待入库的新图书的位置序号。
最后输入第n+3行，内容为新图书的信息，书号、书名、价格用空格分隔。
输出
若插入成功：

输出新图书入库后所有图书的信息（书号、书名、价格），总计n+1行，每行是一本图书的信息，书号、书名、价格用空格分隔。


若插入失败：

只输出以下提示：抱歉，入库位置非法！
样例输入1
7
9787302257646 Data-Structure 35
9787302164340 Operating-System 50
9787302219972 Software-Engineer 32
9787302203513 Database-Principles 36
9787810827430 Discrete-Mathematics 36
9787302257800 Data-Structure 62
9787811234923 Compiler-Principles 62
2
9787822234110 The-C-Programming-Language 38
样例输出1
9787302257646 Data-Structure 35
9787822234110 The-C-Programming-Language 38
9787302164340 Operating-System 50
9787302219972 Software-Engineer 32
9787302203513 Database-Principles 36
9787810827430 Discrete-Mathematics 36
9787302257800 Data-Structure 62
9787811234923 Compiler-Principles 62

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/

//
#include<string.h>
#include<stdlib.h>
#include<fstream>
//#include<math.h>
#include<iostream>  
#include<iomanip> //是I/O流控制头文件，主要是对cin,cout之类的一些操纵运算子 
using namespace std;
#define OK 1
#define ERROR 0
typedef int Status; //Status 是函数返回值类型，其值是函数结果状态代码。
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
	
	LinkList p, r;
	L = new LNode;
	L->next= NULL; //先建立一个带头结点的空链表
	r = L; //尾指针r指向头结点
   	for(int i=0;i<n;i++)
	{ 
		p = new LNode;//生成新结点
		p->data=A[i]; //输入元素A[i]赋给新结点*p的数据域
		p->next = NULL;
		r->next = p;//将新结点*p插入尾结点*r之后 		
		r = p;//r指向新的尾结点*p					
	}		
} 	 
Status ListInsert(LinkList &L, int i, ElemType &e) { //算法2.9 单链表的插入
	//在带头结点的单链表L中第i个位置插入值为e的新结点
	int j;
	LinkList p, s;
	p = L;
	j = 0;
	while (p && j < i - 1) {
		p = p->next;
		++j;
	}//查找第i-1个结点，p指向该结点
	if (!p || j > i - 1)
		return ERROR; //i＞n+1或者i＜1
	
	/**********Begin**********/	



	/**********  End  **********/ 
	
	return OK;
} //ListInsert
	 

   int main()
	{
		int i,n,w,r;
	    LinkList L,p;
		ElemType A[maxn];
		cin>>n;	
		for(i=0; i<n; i++)
		{
			cin>>A[i].num>>A[i].name>>A[i].price;
		}	
		CreateList_R(L,n,A);
		ElemType e;	
		cin>>w;
		cin>>e.num>>e.name>>e.price;
		r=ListInsert(L,w,e);
		cout<<endl;
		if(r==0)
		cout<<"抱歉，入库位置非法！"<<endl;
		else
		{
			p=L->next;
			while(p)
			{
				cout<<p->data.num<<" "<<p->data.name<<" "<<p->data.price<<endl;
				p = p->next;
			}
			cout<<endl;
		}			
		bky();  
		return 0;
	}
	
void  bky()
{
		ofstream fout("output.txt");
  	    ifstream fin("in.txt"); 
		int k,i,n,w,r;
	    LinkList L,p;
		ElemType A[maxn];
	 for(k=0;k<5;k++)
	{
		fin>>n;	
		for(i=0; i<n; i++)
		{
			fin>>A[i].num>>A[i].name>>A[i].price;
		}	
		CreateList_R(L,n,A);
		ElemType e;	
		fin>>w;
		fin>>e.num>>e.name>>e.price;
		r=ListInsert(L,w,e);
		fout<<endl;
		if(r==0)
		fout<<"抱歉，入库位置非法！"<<endl;
		else
		{
			p=L->next;
			while(p)
			{
				fout<<p->data.num<<" "<<p->data.name<<" "<<p->data.price<<endl;
				p = p->next;
			}
			fout<<endl;
		}
	}			

}
	