/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
����һ������ͼ����Ϣ����š��������۸񣩵�˳���
������Ӧ��ͼ�����������ͼ����Ϣ��Ĵ�����
Ȼ�����ָ���Ĵ�������ͼ���λ�ú���Ϣ��
����ͼ����뵽ͼ�����ָ����λ���ϣ���������ͼ����������ͼ�����Ϣ��
����
�ܼ�n+3�С���������n+1�У����У���һ����ͼ����Ŀn����n����n��ͼ�����Ϣ����š��������۸񣩣�
ÿ��ͼ����Ϣռһ�У���š��������۸��ÿո�ָ���֮�������n+2�У����ݽ�Ϊһ�������������������ͼ���λ����š�
��������n+3�У�����Ϊ��ͼ�����Ϣ����š��������۸��ÿո�ָ���
���
������ɹ���

�����ͼ����������ͼ�����Ϣ����š��������۸񣩣��ܼ�n+1�У�ÿ����һ��ͼ�����Ϣ����š��������۸��ÿո�ָ���


������ʧ�ܣ�

ֻ���������ʾ����Ǹ�����λ�÷Ƿ���
��������1
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
�������1
9787302257646 Data-Structure 35
9787822234110 The-C-Programming-Language 38
9787302164340 Operating-System 50
9787302219972 Software-Engineer 32
9787302203513 Database-Principles 36
9787810827430 Discrete-Mathematics 36
9787302257800 Data-Structure 62
9787811234923 Compiler-Principles 62

--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/


#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<iostream>  
#include<iomanip> //��I/O������ͷ�ļ�����Ҫ�Ƕ�cin,cout֮���һЩ���������� 
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status; //Status �Ǻ�������ֵ���ͣ���ֵ�Ǻ������״̬���롣

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
{ //��巨����˳���
      int i; 
	  L.elem = new ElemType[maxn];
   	  for(i=0;i<n; i++)
		{  
		   L.elem[i]=A[i];		
		}
		L.length = n;	
} 

Status ListInsert_Sq(SqList &L, int i, ElemType e) 
{ //�㷨2.4 ˳���Ĳ���
	//��˳���L�е�i��λ��֮ǰ�����µ�Ԫ��e
	//iֵ�ĺϷ���Χ��1<=i<=L.length+1
	if ((i < 1) || (i > L.length + 1))
		return ERROR; //iֵ���Ϸ�
	if (L.length == maxn)
		return ERROR; //��ǰ�洢�ռ�����
		
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
		cout<<"��Ǹ�����λ�÷Ƿ���"<<endl;
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
		fout<<"��Ǹ�����λ�÷Ƿ���"<<endl;
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
