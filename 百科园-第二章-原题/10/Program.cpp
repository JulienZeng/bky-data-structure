/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
����һ����������������
������Ӧ��������������ɱ�Ĵ�����Ҫ�󴴽����������������
Ȼ�����������ϲ�Ϊһ���������Ȼ������������� 

����
�ܼ�4�С�
���У���1���ǵ�һ�����������Ŀn����2����n����������������룬�ÿո�ָ���������������һ���� 
�������ǵڶ������������Ŀm, ��4����m����������������룬�ÿո�ָ��������������ڶ�����

���
1�� ,����ϲ������������Ԫ�ؼ��ÿո�ָ� 

��������1
8
15 25 36 37 38 39 40 45 
3
1 26 30 
�������1 
1 15 25 26 30 36 37 38 39 40 45 

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
#define maxn 100

void  bky(); 
	 
typedef int ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
} LNode,*LinkList;

void CreateList_R(LinkList &L, int n,ElemType A[]) 
{ //�㷨2.12 ��巨����������
	LinkList p, r;
	L = new LNode;
	L->next= NULL; //�Ƚ���һ����ͷ���Ŀ�����
	r = L; //βָ��rָ��ͷ���
	
	for(int i=0;i<n;i++)
	{ 
		p = new LNode;//�����½��
		p->data=A[i] ;  //����Ԫ��A[i] �����½��*p��������
	    p->next = NULL;
		r->next = p;//���½��*p����β���*r֮�� 		
		r = p;//rָ���µ�β���*p
	}
} 


void MergeList_L(LinkList La,LinkList Lb,LinkList &Lc)
{//La,LbΪ����������ϲ��������γ�Lc,��Ȼ������������ԭ�н��ռ� 
   LNode *pa,*pb,*pc;
   pa=La->next;  pb=Lb->next;
   pc=Lc=La;             //��La��ͷ�����ΪLc��ͷ��� 
    /**********Begin**********/




  /**********  End  **********/
   delete Lb;             //�ͷ�Lb��ͷ���

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
