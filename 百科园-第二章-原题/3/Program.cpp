/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
������ʽ�洢�ṹ��ͼ����Ϣ��Ĵ��������������Ҫ��������ͷ�巨��ʽ���в��봴����Ϣ��  
����һ������ͼ����Ϣ����š��������۸񣩵�����������Ӧ��ͼ�����������ͼ����Ϣ��Ĵ�����Ȼ���������ÿ��ͼ�����Ϣ��

����
����n+1�У���1������������ͼ����е�ͼ������� ��n����n��ͼ�����Ϣ����š��������۸񣩣�ÿ��ͼ����Ϣռһ�У���š��������۸��ÿո�ָ����۸�֮��û�пո�������ź�����Ϊ�ַ������ͣ��۸�Ϊ�������͡�

���
�ܼ�n�У�n��ͼ�����Ϣ����š��������۸񣩣�ÿ��ͼ����Ϣռһ�У���š��������۸��ÿո�ָ���

��������1
3
9787302257646 Data-Structure 35
9787302164340 Operating-System 50
9787302164345 Software-Engineer 32


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
#include<fstream>
#include<math.h>
#include<iostream>  
#include<iomanip> //��I/O������ͷ�ļ�����Ҫ�Ƕ�cin,cout֮���һЩ���������� 
using namespace std;
#define maxn 100

void  bky(); 
typedef struct
{
		char num[50];
		char name[50];
		int  price;
}ElemType; 

typedef struct LNode
{
	    ElemType data;
		struct LNode *next;
} LNode,*LinkList;

void CreateList_H(LinkList &L, int n,ElemType A[])
 { //�㷨2.11 ǰ�巨����������
	//A[]�д洢����λ��n��Ԫ�ص�ֵ����������Ϊn�Ĵ���ͷ���ĵ�����L 
	/**********Begin**********/







	 /**********  End  **********/	
}	 

	 
	int main()
	{
		int n,i;
		LinkList L;
		ElemType A[maxn];
		
	    cin>>n;	
		for(i=0; i<n; i++)
		{
			cin>>A[i].num>>A[i].name>>A[i].price;
		}
	
		CreateList_H(L,n,A);
		    
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
	
		int k,i,n;
		LinkList L;
		ElemType A[maxn];

	for(k=0;k<4;k++)
    {  
    
         fin>>n;	
		for(i=0; i<n; i++)
		{
			fin>>A[i].num>>A[i].name>>A[i].price;
		}
	
		CreateList_H(L,n,A);
		    
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