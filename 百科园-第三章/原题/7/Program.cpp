/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
�����еĻ���������֤����ɻ��������Ĵ�����ա� 

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

/***���ӵĻ�������***/

#include<iostream>
using namespace std;
#include<fstream>
using namespace std;
void  bky(); 

#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int QElemType;
typedef int Status;


//- - - - - ���е���ʽ�洢�ṹ- - - - - 
typedef struct QNode {
	QElemType data;
	struct QNode *next;
} QNode, *QueuePtr;
typedef struct {
	QueuePtr front; //��ͷָ��
	QueuePtr rear; //��βָ��
} LinkQueue;

//�㷨3.16�����ӵĳ�ʼ��
Status InitQueue(LinkQueue &Q) {//����һ���ն���Q
	Q.front = Q.rear = new QNode; //�����½����Ϊͷ��㣬��ͷ�Ͷ�βָ��ָ��˽��
	Q.front->next = NULL; //ͷ����ָ�����ÿ�
	return OK;
}

//�㷨3.17�����ӵ����
Status EnQueue(LinkQueue &Q, QElemType e) {//����Ԫ��eΪQ���µĶ�βԪ��
	/**********Begin**********/




		 /**********  End  **********/	
}

//�㷨3.18�����ӵĳ���
Status DeQueue(LinkQueue &Q, QElemType &e) {//ɾ��Q�Ķ�ͷԪ�أ���e������ֵ 

	QueuePtr p;
	if (Q.front == Q.rear)
		return ERROR; //�����пգ��򷵻�ERROR
	p = Q.front->next; //pָ���ͷԪ��
	e = p->data; //e�����ͷԪ�ص�ֵ
	Q.front->next = p->next; //�޸�ͷָ��
	if (Q.rear == p)
		Q.rear = Q.front; //���һ��Ԫ�ر�ɾ����βָ��ָ��ͷ���
	delete p; //�ͷ�ԭ��ͷԪ�صĿռ�
	return OK;

}

//�㷨3.19��ȡ���ӵĶ�ͷԪ��
QElemType GetHead(LinkQueue Q) {//����Q�Ķ�ͷԪ�أ����޸Ķ�ͷָ��
	if (Q.front != Q.rear) //���зǿ�
		return Q.front->next->data; //���ض�ͷԪ�ص�ֵ����ͷָ�벻��
}

int QueueEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear) //���п�
		return 1;
	else
		return 0;	
}

int main() {
	LinkQueue Q;
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
	LinkQueue Q;
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