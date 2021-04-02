/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
����һ������ͼ����Ϣ����š��������۸񣩵�����
������Ӧ��ͼ�����������ͼ����Ϣ��Ĵ�����
Ȼ�����ָ���Ĵ�����ľ�ͼ���λ�ã�����ͼ���ͼ�����ɾ����
��������ͼ�����������ͼ�����Ϣ��

����
�ܼ�n+2�С���������n+1�У����У���һ����ͼ����Ŀn����n����n��ͼ�����Ϣ����š��������۸�
��ÿ��ͼ����Ϣռһ�У���š��������۸��ÿո�ָ���֮�������n+2�У�
���ݽ�Ϊһ�������������ɾ���ľ�ͼ���λ����š�

���
��ɾ���ɹ���

�����ͼ����������ͼ�����Ϣ����š��������۸񣩣��ܼ�n-1�У�
ÿ����һ��ͼ�����Ϣ����š��������۸��ÿո�ָ���
��ɾ��ʧ�ܣ�

ֻ���������ʾ����Ǹ������λ�÷Ƿ���
��������1
8
9787302257646 Data-Structure 35
9787302164340 Operating-System 50
9787302219972 Software-Engineer 32
9787302203513 Database-Principles 36
9787810827430 Discrete-Mathematics 36
9787302257800 Data-Structure 62
9787811234923 Compiler-Principles 62
9787822234110 The-C-Programming-Language 38
2
�������1
9787302257646 Data-Structure 35
9787302219972 Software-Engineer 32
9787302203513 Database-Principles 36
9787810827430 Discrete-Mathematics 36
9787302257800 Data-Structure 62
9787811234923 Compiler-Principles 62
9787822234110 The-C-Programming-Language 38


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
typedef int Status; //Status �Ǻ�������ֵ���ͣ���ֵ�Ǻ������״̬���롣

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
{ //�㷨2.12 ��巨����������
	
	LinkList p, r;
	L = new LNode;
	L->next= NULL; //�Ƚ���һ����ͷ���Ŀ�����
	r = L; //βָ��rָ��ͷ���
   	for(int i=0;i<n;i++)
	{ 
		p = new LNode;//�����½��
		p->data=A[i]; //����Ԫ��A[i]�����½��*p��������
		p->next = NULL;
		r->next = p;//���½��*p����β���*r֮�� 		
		r = p;//rָ���µ�β���*p					
	}		
} 	 

Status ListDelete(LinkList &L, int i) { //�㷨2.9 �������ɾ��
	//�ڴ�ͷ���ĵ�����L�У�ɾ����i��λ��	
	LinkList p, q;
	int j;
	p = L;
	j = 0;
	while ((p->next) && (j < i - 1)) //���ҵ�i-1����㣬pָ��ý��
	{
		p = p->next;
		++j;
	}
	if (!(p->next) || (j > i - 1))
    	return ERROR; //��i>n��i<1ʱ��ɾ��λ�ò����� 
    	
/**********Begin**********/	



/**********  End  **********/ 	

	delete q; //�ͷ�ɾ�����Ŀռ� 
	return OK;
} //ListDelete
	 
	 
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
		r=ListDelete(L,w);
		cout<<endl;
		if(r==0)
		cout<<"��Ǹ������λ�÷Ƿ���"<<endl;
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
		r=ListDelete(L,w);
		fout<<endl;
		if(r==0)
		fout<<"��Ǹ������λ�÷Ƿ���"<<endl;
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