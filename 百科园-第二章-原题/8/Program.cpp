/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
����һ������ͼ����Ϣ����š��������۸񣩵�����
������Ӧ��ͼ�����������ͼ����Ϣ��Ĵ�����
Ȼ�����ָ����ͼ������֣����Ҹ�ͼ�飬�����ͼ�����Ϣ������ǰ�����ң�ֻ��Ҫ���ҵ�һ��ƥ���ͼ����Ϣ���ɣ� 

����
�ܼ�n+2�С���������n+1�У����У���һ����ͼ����Ŀn����n����n��ͼ�����Ϣ����š��������۸񣩣�
ÿ��ͼ����Ϣռһ�У���š��������۸��ÿո�ָ���
Ȼ����������ҵ��ͼ�����֡���ֻ��Ҫƥ���������ɣ� 

���
�����ҳɹ���
�ܼ����1�У����ͼ�����Ϣ����š��������۸���š��������۸��ÿո�ָ���

������ʧ�ܣ�

ֻ���������ʾ��Sorry��there is no your favourite!
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

Java-Programming-Language
�������1
Sorry��there is no your favourite!

��������2
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
�������2
9787302257646 Data-Structure 35
--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/

#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<fstream>
#include<iostream>  
#include<iomanip> //��I/O������ͷ�ļ�����Ҫ�Ƕ�cin,cout֮���һЩ���������� 
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
{ //�㷨2.12 ��巨����������

	int i=0;
	LinkList p, r;
	L = new LNode;
	L->next= NULL; //�Ƚ���һ����ͷ���Ŀ�����
	r = L; //βָ��rָ��ͷ���
	while(n--)
	{ 
		p = new LNode;//�����½��
		p->data = A[i++]; //A[]��Ԫ��ֵ�����½��*p��������
	 	p->next = NULL;
		r->next = p;//���½��*p����β���*r֮�� 		
		r = p;//rָ���µ�β���*p				
	}

 
} 	 
	 

LNode *LocateElem(LinkList L, char name[50]) { //��ֵ����
	//�ڴ�ͷ���ĵ�����L�в���ֵΪname��Ԫ��,����ֵΪname���ָ��
	  /**********Begin**********/




	 /**********  End  **********/		
	return p; //���ҳɹ�����ֵΪname�Ľ���ַ������ʧ��pΪNULL. 
		
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
			cout<<"Sorry��there is no your favourite!"<<endl; 
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
			fout<<"Sorry��there is no your favourite!"<<endl; 
		else
			fout<<t->data.num<<" "<<t->data.name<<" "<<t->data.price<<endl;
		
		}
	}
