/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
����һ������ͼ����Ϣ����š��������۸񣩵�����������Ӧ��ͼ��������
���ͼ����Ϣ��Ĵ�����Ȼ����Ҽ۸���͵�ͼ�飬�����Ӧͼ�����Ϣ��
ע������ͼ��۸�Χ��1~10000 ֮�� 
��������1
3
9787302257646 Data-Structure 35
9787302164340 Operating-System 50
9787302219972 Software-Engineer 32


�������1
1
9787302219972 Software-Engineer 32



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
void MinLinkList_R(LinkList &L,int &min) 
{ //������������ͼ۸�ͼ��ļ۸� 
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
