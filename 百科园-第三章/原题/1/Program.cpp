/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
ѭ�����еĻ���������֤����ɻ��������Ĵ�����ա� 

����
�������������У���һ��Ϊ���еĳ���n���ڶ���Ϊn����������a1,a2,a3...,an����ai������-1ʱ��ai���ӣ���ai=-1ʱ�������ͷԪ�ز�������ӡ�

���
ÿ��Ϊ��Ӧ�ĳ���Ԫ�ء��������쳣ʱ����������Ӵ��󣡡���     ����ж������Ƿ�Ϊ�գ�����������ӿգ����������������ͷԪ�أ�

��������1��
5
1 2 -1 -1 7

�������1��
1
2
��ͷԪ��Ϊ�� 7




��������2��
5
1 -1 -1 2 2

�������2��
1
���Ӵ���
�ӿգ�



��������3��
5
2 3 5 6 9

�������3��
��ͷԪ��Ϊ��2



--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/

/***ѭ�����л�������***/

#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
void  bky(); 

#define MAXQSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int QElemType;
typedef int Status;

typedef struct {
	QElemType *base;//��ʼ��ʱ��̬����洢�ռ�
	int front;//ͷָ��
	int rear;//βָ��
} SqQueue;

//�㷨3.11��ѭ�����еĳ�ʼ��
Status InitQueue(SqQueue &Q) {//����һ���ն���Q
	Q.base = new QElemType[MAXQSIZE]; //Ϊ���з���һ���������ΪMAXSIZE������ռ�
	if (!Q.base)
		exit(OVERFLOW); //�洢����ʧ��
	Q.front = Q.rear = 0; //ͷָ���βָ����Ϊ�㣬����Ϊ��
	return OK;
}

//�㷨3.12����ѭ�����еĳ���
int QueueLength(SqQueue Q) {//����Q��Ԫ�ظ����������еĳ���
	return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}

//�㷨3.13��ѭ�����е����
Status EnQueue(SqQueue &Q, QElemType e) {//����Ԫ��eΪQ���µĶ�βԪ��
	

	if ((Q.rear + 1) % MAXQSIZE == Q.front) //βָ����ѭ�������ϼ�1�����ͷָ�룬��������
		return ERROR;
	Q.base[Q.rear] = e; //��Ԫ�ز����β
	Q.rear = (Q.rear + 1) % MAXQSIZE; //��βָ���1
	return OK;
	
}

//�㷨3.14��ѭ�����еĳ���
Status DeQueue(SqQueue &Q, QElemType &e) {//ɾ��Q�Ķ�ͷԪ�أ���e������ֵ

	if (Q.front == Q.rear)
		return ERROR; //�ӿ�
	e = Q.base[Q.front]; //�����ͷԪ��
	Q.front = (Q.front + 1) % MAXQSIZE; //��ͷָ���1
	return OK;

}

//�㷨3.15��ȡѭ�����еĶ�ͷԪ��
QElemType GetHead(SqQueue Q) {//����Q�Ķ�ͷԪ�أ����޸Ķ�ͷָ��

	/**********Begin**********/




/**********  End  **********/	
}

int QueueEmpty(SqQueue Q)
{
	if (Q.front == Q.rear) //���п�
		return 1;
	else
		return 0;	
}

int main() {
	SqQueue Q;
	int n,t;
	QElemType e,temp;
	InitQueue(Q);
	cin>>n;
	while(n--)
	{			
		cin>>e; 
		if(e!=-1)
		   EnQueue(Q,e);
		else
		{
			t=DeQueue(Q,temp);
			if(t==0)
			  { //�������쳣ʱ�����"���Ӵ���"
			     cout<<"���Ӵ���"<<endl;
			     break;			    				
			  } 
			else
			  cout<<temp<<endl;
		}			 
	}
	if(QueueEmpty(Q))
	   cout<<"�ӿգ�"<<endl;	  
	else
	   cout<<"��ͷԪ��Ϊ�� "<<GetHead(Q)<<endl;
	cout<<endl;
	bky(); 
	return 0;
}

void bky() 
{
	ofstream fout("output.txt");
  	ifstream fin("in.txt");  
	SqQueue Q;
	int k,n,t,flag;//************************
	QElemType e,temp;
	
	for(k=0;k<6;k++)
	{
		InitQueue(Q);
		fin>>n;
		flag=0; //******************************
		while(n--)
		{			
			fin>>e; 
			if(flag==1)//�������쳣ʱ�����"���Ӵ���"�������������ݵ������//****************
			  continue;//��Ҫ�Ѻ������ݹ��˵� //***********************
			if(e!=-1)
			   EnQueue(Q,e);
			else
			{
				t=DeQueue(Q,temp);
				if(t==0)
				  { //�������쳣ʱ�����"���Ӵ���"
				     fout<<"���Ӵ���"<<endl;
				     flag=1;  //******************************
					// break;  �˴�����ֱ������ѭ������Ϊ�������ݺ��滹�����ݣ�����Ϊ��������ģ���Ҫ���˵�	//*************				    				
				  } 
				else
				  fout<<temp<<endl;
			}			 
		}
		if(QueueEmpty(Q))
		   fout<<"�ӿգ�"<<endl;	  
		else
		   fout<<"��ͷԪ��Ϊ�� "<<GetHead(Q)<<endl;
		fout<<endl;		
	}

}