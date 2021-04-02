/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
定义一个包含图书信息（书号、书名、价格）的顺序表，
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


#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<iostream>  
#include<iomanip> //是I/O流控制头文件，主要是对cin,cout之类的一些操纵运算子 
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status; //Status 是函数返回值类型，其值是函数结果状态代码。

#define maxn 100
void  bky(); 
	 
typedef struct
{
	char num[50];
	char name[50];
	int price;
}ElemType;
typedef struct
{
	ElemType *elem;
	int length;
}SqList;

void CreateSqList_R(SqList &L,int n,ElemType A[]) 
{ //后插法创建顺序表
      int i; 
	  L.elem = new ElemType[maxn];
   	  for(i=0;i<n; i++)
		{  
		   L.elem[i]=A[i];		
		}
		L.length = n;	
} 

Status ListInsert_Sq(SqList &L, int i, ElemType e) 
{ //算法2.4 顺序表的插入
	//在顺序表L中第i个位置之前插入新的元素e
	//i值的合法范围是1<=i<=L.length+1
	if ((i < 1) || (i > L.length + 1))
		return ERROR; //i值不合法
	if (L.length == maxn)
		return ERROR; //当前存储空间已满
		
	/**********Begin**********/	
	

	
	/**********  End  **********/ 
	
	return OK;
} 
	 
	int main()
	{
		int i,n,w,r;
	    SqList L;
		ElemType A[maxn];
		cin>>n;	
		for(i=0; i<n; i++)
		{
			cin>>A[i].num>>A[i].name>>A[i].price;
		}	
		CreateSqList_R(L,n,A);
		ElemType e;	
		cin>>w;
		cin>>e.num>>e.name>>e.price;
		r=ListInsert_Sq(L,w,e);
		cout<<endl;
		if(r==0)
		cout<<"抱歉，入库位置非法！"<<endl;
		else
		{
		for(i=0; i<L.length; i++)
		{
			cout<<L.elem[i].num<<" "<<L.elem[i].name<<" "<<L.elem[i].price<<endl;
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
	    SqList L;
		ElemType A[maxn];
		for(k=0;k<5;k++)
	  {
		fin>>n;	
		for(i=0; i<n; i++)
		{
			fin>>A[i].num>>A[i].name>>A[i].price;
		}	
		CreateSqList_R(L,n,A);
		ElemType e;	
		fin>>w;
		fin>>e.num>>e.name>>e.price;
		r=ListInsert_Sq(L,w,e);
		fout<<endl;
		if(r==0)
		fout<<"抱歉，入库位置非法！"<<endl;
		else
		{
		for(i=0; i<L.length; i++)
		{
			fout<<L.elem[i].num<<" "<<L.elem[i].name<<" "<<L.elem[i].price<<endl;
		}
		fout<<endl;
	 	}	
	 }
			  
		
		
		
	}
