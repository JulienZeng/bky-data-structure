/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
定义一个包含整数的链表，
读入相应的整数数据来完成表的创建，要求创建两个递增的有序表。
然后将两个有序表合并为一个有序表（仍然递增）并输出。 

输入
总计4行。
其中，第1行是第一个表的数据数目n，第2行是n个数（必须递增输入，用空格分隔），用来创建第一个表。 
接下来是第二个表的数据数目m, 第4行是m个数（必须递增输入，用空格分隔），用来创建第二个表。

输出
1行 ,输出合并后整个有序表，元素间用空格分隔 

样例输入1
8
15 25 36 37 38 39 40 45 
3
1 26 30 
样例输出1 
1 15 25 26 30 36 37 38 39 40 45 

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
#define maxn 100

void  bky(); 
	 
typedef int ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
} LNode,*LinkList;

void CreateList_R(LinkList &L, int n,ElemType A[]) 
{ //算法2.12 后插法创建单链表
	LinkList p, r;
	L = new LNode;
	L->next= NULL; //先建立一个带头结点的空链表
	r = L; //尾指针r指向头结点
	
	for(int i=0;i<n;i++)
	{ 
		p = new LNode;//生成新结点
		p->data=A[i] ;  //输入元素A[i] 赋给新结点*p的数据域
	    p->next = NULL;
		r->next = p;//将新结点*p插入尾结点*r之后 		
		r = p;//r指向新的尾结点*p
	}
} 


void MergeList_L(LinkList La,LinkList Lb,LinkList &Lc)
{//La,Lb为递增有序表，合并两个表形成Lc,仍然递增有序，利用原有结点空间 
   LNode *pa,*pb,*pc;
   pa=La->next;  pb=Lb->next;
   pc=Lc=La;             //用La的头结点作为Lc的头结点 
    /**********Begin**********/




  /**********  End  **********/
   delete Lb;             //释放Lb的头结点

}  






	 
	int main()
	{
		int i,n,m;
		LinkList L1,L2,L3,p;
		ElemType A[maxn];
		cin>>n;	
		for(i=0; i<n; i++)
		{
			cin>>A[i];
		}	
		CreateList_R(L1,n,A);
		cin>>m;	
		for(i=0; i<m; i++)
		{
			cin>>A[i];
		}
		CreateList_R(L2,m,A);
		
		MergeList_L(L1,L2,L3);
		    
			p=L3->next;
			while(p)
			{
				if(p->next==NULL)
					cout<<p->data;
				else
				   cout<<p->data<<" ";
				p=p->next;
			}
			cout<<endl;


	    bky();
		return 0;
	}

void bky()
{
  	ofstream fout("output.txt");
  	ifstream fin("in.txt");  	
	
		int k,i,n,m;
		LinkList L1,L2,L3,p;
		ElemType A[maxn];

	for(k=0;k<6;k++)
    {  
        fin>>n;	
		for(i=0; i<n; i++)
		{
			fin>>A[i];
		}	
		CreateList_R(L1,n,A);
		
		fin>>m;	
		for(i=0; i<m; i++)
		{
			fin>>A[i];
		}
		CreateList_R(L2,m,A);
		
		MergeList_L(L1,L2,L3);
		
     	   p=L3->next;
			while(p)
			{
				if(p->next==NULL)
					fout<<p->data;
				else
				   fout<<p->data<<" ";
				p=p->next;
			}
			fout<<endl;
	
	}

 
}
