/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
����һ������ͼ����Ϣ����š��������۸񣩵�����������Ӧ��ͼ�����������ͼ����Ϣ��Ĵ�����
Ȼ�󽫶����ͼ����Ϣ����洢�������������洢��ÿ��ͼ�����Ϣ��

��������1
3
9787302257646 Data-Structure 35
9787302164340 Operating-System 50
9787302219972 Software-Engineer 32


�������1
9787302219972 Software-Engineer 32
9787302164340 Operating-System 50
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


void InverseList_L(LinkList &L)
{
   //����ͷ���ĵ�����͵�����
   	/**********Begin**********/





    /**********  End  **********/ 
   
}// InverseList_L


	 
	int main()
	{
		int i,n;
		LinkList L;
		ElemType A[maxn];
		cin>>n;	
		for(i=0; i<n; i++)
		{
			cin>>A[i].num>>A[i].name>>A[i].price;
		}
	
		CreateList_R(L,n,A);
		InverseList_L(L); 
		
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
		int i,n,k;
		LinkList L;
		ElemType A[maxn];
	for(k=0;k<4;k++)
    { 
		fin>>n;	
		for(i=0; i<n; i++)
		{
			fin>>A[i].num>>A[i].name>>A[i].price;
		}
	
		CreateList_R(L,n,A);
		InverseList_L(L); 
		
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
