/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
������ʽ�洢�ṹ���������Ա���ʼΪ�ձ����յ����ķ�ʽ����������������������Ա���������� 
��ɺ���InsertOrderList(LinkList &L,ElemType x) �Ĵ�����գ��ú��������ǣ� 
�赥����L��һ��������������ձ���x�������к��Ա���L�ĵ��������ԡ�

����
����2�У���1�����������������е�Ԫ�ظ����� ��1����n���������ÿո�ָ���

���
1�У�����������Ԫ�ش�ͷ��β���������Ԫ��֮���ÿո�ָ���

��������1
3
35 50 32


�������1
32 35 50



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
using namespace std;


#define OK 1
#define ERROR 0
typedef int Status; //Status �Ǻ�������ֵ���ͣ���ֵ�Ǻ������״̬���롣
#define maxn 100

void  bky(); 
	 
typedef int ElemType;

typedef struct LNode {
	ElemType data; //������
	struct LNode *next; //ָ���� 
} LNode,*LinkList;

Status InitList(LinkList &L) { //�㷨2.6 ������ĳ�ʼ��
	//����һ���յĵ�����L
	L = new LNode; //�����½����Ϊͷ��㣬��ͷָ��Lָ��ͷ���
	if(!L)
	  exit(OVERFLOW); 
	L->next = NULL; //ͷ����ָ�����ÿ�
	return OK;
}


void InsertOrderList(LinkList &L,ElemType x)
{ //�赥����L��һ��������������ձ���x�������к��Ա���L�ĵ��������ԡ�
	  LinkList s, q,pre;
	  pre=L;        //pre���ڱ���q��ǰ������ֵΪͷ��� 
	  q=L->next;    //q��ʼ����ָ����Ԫ��� 
	  s=new LNode;  //�����½�� 
	  s->data=x;
	/**********Begin**********/	





	/**********  End  **********/ 
}



	 
	int main()
	{
		int i,n;
		LinkList L,p;
		InitList(L); 
		ElemType e;
		cin>>n;	
		for(i=0; i<n; i++)
		{
			
			cin>>e;
			InsertOrderList(L,e);
		}
	
	 	p=L->next;
		 while(p)
		 {
	 		cout << p->data<<" ";
			p=p->next;
		 }	
		 cout << endl;
	    bky();
		return 0;
	}

void bky()
{
  	ofstream fout("output.txt");
  	ifstream fin("in.txt");  	
	
		int k,i,n;
		LinkList L,p;
		ElemType e;
		for(k=0;k<4;k++)
		{  
		   InitList(L); 
		   fin>>n;	
		   for(i=0; i<n; i++)
		   {
			
			fin>>e;
			InsertOrderList(L,e);
		   }
		  p=L->next;
		  while(p)
		  {
	 		fout << p->data<<" ";
			p=p->next;
		  }	
		  fout << endl;
		}


 
}
