/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
定义一个包含图书信息（书号、书名、价格）的链表，
读入相应的图书数据来完成图书信息表的创建，
然后根据指定的图书的名字，查找该图书，输出该图书的信息。（从前向后查找，只需要查找第一次匹配的图书信息即可） 

输入
总计n+2行。首先输入n+1行，其中，第一行是图书数目n，后n行是n本图书的信息（书号、书名、价格），
每本图书信息占一行，书号、书名、价格用空格分隔。
然后输入待查找的最爱图书名字。（只需要匹配书名即可） 

输出
若查找成功：
总计输出1行，输出图书的信息（书号、书名、价格）书号、书名、价格用空格分隔。

若查找失败：

只输出以下提示：Sorry，there is no your favourite!
样例输入1
8
9787302257646 Data-Structure 35
9787302164340 Operating-System 50
9787302219972 Software-Engineer 32
9787302203513 Database-Principles 36
9787810827430 Discrete-Mathematics 36
9787302257800 Data-Structure 62
9787811234923 Compiler-Principles 62
9787822234110 The-C-Programming-Language 38

Java-Programming-Language
样例输出1
Sorry，there is no your favourite!

样例输入2
8
9787302257646 Data-Structure 35
9787302164340 Operating-System 50
9787302219972 Software-Engineer 32
9787302203513 Database-Principles 36
9787810827430 Discrete-Mathematics 36
9787302257800 Data-Structure 62
9787811234923 Compiler-Principles 62
9787822234110 The-C-Programming-Language 38

Data-Structure
样例输出2
9787302257646 Data-Structure 35
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
	 

LNode *LocateElem(LinkList L, char name[50]) { //按值查找
	//在带头结点的单链表L中查找值为name的元素,返回值为name结点指针
	  /**********Begin**********/




	 /**********  End  **********/		
	return p; //查找成功返回值为name的结点地址，查找失败p为NULL. 
		
} 

	 
	int main()
	{
		int n,k,i=1;
		char name[50];	
		LinkList p,L,t;
		ElemType A[maxn];
		cin>>n;	
		for(i=0; i<n; i++)
		{
			cin>>A[i].num>>A[i].name>>A[i].price;
		}	
		CreateList_R(L,n,A);
		
		cin>>name;
		t=LocateElem(L,name);
		if(t==NULL)
			cout<<"Sorry，there is no your favourite!"<<endl; 
		else
		    cout<<t->data.num<<" "<<t->data.name<<" "<<t->data.price<<endl;
		
			
		bky();    
		return 0;
	}
	
void bky()
	{
		ofstream fout("output.txt");
  	    ifstream fin("in.txt"); 
		int n,k,i=1;
		char name[50];	
		LinkList p,L,t;
		ElemType A[maxn];
		for(k=0;k<4;k++)
		{

		fin>>n;	
		for(i=0; i<n; i++)
		{
			fin>>A[i].num>>A[i].name>>A[i].price;
		}	
		CreateList_R(L,n,A);
		
		fin>>name;
		t=LocateElem(L,name);
		if(t==NULL)
			fout<<"Sorry，there is no your favourite!"<<endl; 
		else
			fout<<t->data.num<<" "<<t->data.name<<" "<<t->data.price<<endl;
		
		}
	}
