/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
��ջ�Ļ���������֤����ɻ��������Ĵ�����ա� 

����
�������������У���һ��Ϊ���еĳ���n���ڶ���Ϊn����������a1,a2,a3...,an����ai������-1ʱ��ai��ջ����ai=-1ʱ�����ջ��Ԫ�ز������ջ��

���
ÿ��Ϊ��Ӧ�ĳ�ջԪ�ء�����ջ�쳣ʱ�������POP ERROR����     ����ж�ջ�Ƿ�Ϊ�գ����������ջ�գ��������������ջ��Ԫ�أ�

��������1��
5
1 2 -1 -1 7

�������1��
2
1
ջ��Ԫ��Ϊ�� 7



��������2��
5
1 -1 -1 2 2

�������2��
1
POP ERROR
ջ�գ�


��������3��
5
2 3 5 6 9

�������3��
ջ��Ԫ��Ϊ�� 9


--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/
/***��ջ��ʵ��***/
#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void  bky(); 

#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
typedef int SElemType;

typedef struct StackNode {
	SElemType data;
	struct StackNode *next;
} StackNode, *LinkStack;

//�㷨3.5����ջ�ĳ�ʼ��
Status InitStack(LinkStack &S) { // ����һ����ջ S��ջ��ָ���ÿ�
	S = NULL;
	return OK;
}

//�㷨3.6����ջ����ջ
Status Push(LinkStack &S, SElemType e) {//��ջ������Ԫ��e

	LinkStack p;
	p = new StackNode; //�����½��
	p->data = e; //���½����������Ϊe
	p->next = S; //���½�����ջ��
	S = p; //�޸�ջ��ָ��Ϊp
	return OK;
	
}

//�㷨3.7����ջ�ĳ�ջ
Status Pop(LinkStack &S, SElemType &e) {//ɾ��S��ջ��Ԫ�أ���e������ֵ
	/**********Begin**********/





		 /**********  End  **********/	
}
//�㷨3.8��ȡ��ջ��ջ��Ԫ��
SElemType GetTop(LinkStack S) {//����S��ջ��Ԫ�أ����޸�ջ��ָ��
	if (S != NULL) //ջ�ǿ�
		return S->data; //����ջ��Ԫ�ص�ֵ��ջ��ָ�벻��
}

int StackEmpty(LinkStack S)
{//�ж�ջ�Ƿ�ǿգ��շ���1���ǿշ���0
     	if (S == NULL) //ջ��
     	  return 1;
     	else
     	  return 0;
}


int main() {
	LinkStack s;
	int n,t;
	SElemType e,temp;
	InitStack(s); 
	cin>>n;
	while(n--)
	{			
		cin>>e; 
		if(e!=-1)
		   Push(s,e);
		else
		{
			t=Pop(s,temp);
			if(t==0)
			  { //����ջ�쳣ʱ�����"POP ERROR",��������
			     cout<<"POP ERROR"<<endl;
			     break;			    				
			  } 
			else
			  cout<<temp<<endl;
		}			 
	}
	if(StackEmpty(s))
	   cout<<"ջ�գ�"<<endl;	  
	else
	   cout<<"ջ��Ԫ��Ϊ�� "<<GetTop(s)<<endl;
	cout<<endl;
	bky(); 
	return 0;
}


void bky()
{	
	ofstream fout("output.txt");
  	ifstream fin("in.txt");  
	LinkStack s;
	int k, n,t,flag;//************************
	SElemType e,temp;
	for(k=0;k<4;k++)
	{
		InitStack(s);
		fin>>n;
		flag=0; //************************
		while(n--)
		{			
			fin>>e; 
			if(flag==1)//����ջ�쳣ʱ�����"POP ERROR"�������������ݵ������//****************
			  continue;//��Ҫ�Ѻ������ݹ��˵� //***********************
			if(e!=-1)
			   Push(s,e);
			else
			{
				t=Pop(s,temp);
				if(t==0)
				  { //����ջ�쳣ʱ�����"POP ERROR",��������
				     fout<<"POP ERROR"<<endl;
				     flag=1;  //******************************
					// break;  �˴�����ֱ������ѭ������Ϊ�������ݺ��滹�����ݣ�����Ϊ��������ģ���Ҫ���˵�	//*************				    		    				
				  } 
				else
				  fout<<temp<<endl;
			}			 
		}
		if(StackEmpty(s))
		   fout<<"ջ�գ�"<<endl;	  
		else
	 	  fout<<"ջ��Ԫ��Ϊ�� "<<GetTop(s)<<endl;
	 	fout<<endl;
		
	}
}