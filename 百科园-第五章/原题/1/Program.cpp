/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
���������ÿ������Ԫ�ؾ�Ϊһ���ַ��������������˳������������
����Ϊ��������ǰ�����У�������Ԫ��Ϊ'#'ʱ����ʾ�ý��Ϊ�գ���
��д���������������α������С�   
���뽨��������ǰ�����С� 

���
�������α������С�

��������1
ab##c##


�������1
abc

--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/

#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int I;
void  bky(); 


//�������Ķ�������洢��ʾ
typedef struct BiNode
{				
	char data;						//���������
	struct BiNode *lchild,*rchild;	//���Һ���ָ��
}BiTNode,*BiTree;

void CreateBiTree(BiTree &T,char s[])
{	
	//s�洢�˰��������������������ֵ���ɵ����У�������Ԫ��Ϊ'#'ʱ����ʾ�ý��Ϊ�գ���
	//����s�������������ʾ�Ķ�����T

	char ch;
	ch=s[I++];
	if(ch=='#')  T=NULL;			//�ݹ������������
	else{							
		T=new BiTNode;
		T->data=ch;					//���ɸ����
		CreateBiTree(T->lchild,s);	//�ݹ鴴��������
		CreateBiTree(T->rchild,s);	//�ݹ鴴��������
	}								//else
}	//CreateBiTree



//*********************************************************************
 #define TRUE 1
 #define FALSE 0
 #define OK 1
 #define ERROR 0
 #define OVERFLOW -2 
  typedef int Status; // Status�Ǻ��������ͣ���ֵ�Ǻ������״̬���룬��OK��

typedef BiTree QElemType ;//������е�Ԫ������
// ���е�˳��洢�ṹ(ѭ������)���ڽ̿����64ҳ
 #define MAXQSIZE 50 // �����г���+1
 typedef struct 
 { QElemType *base; // ��ʼ���Ķ�̬����洢�ռ�
   int front; // ͷָ�룬�����в��գ�ָ�����ͷԪ��
   int rear; // βָ�룬�����в��գ�ָ�����βԪ�ص���һ��λ��
 }SqQueue;

 // ѭ�����еĻ�������
//�㷨3.11��ѭ�����еĳ�ʼ��
Status InitQueue(SqQueue &Q) {//����һ���ն���Q
	Q.base = new QElemType[MAXQSIZE]; //Ϊ���з���һ���������ΪMAXSIZE������ռ�
	if (!Q.base)
		exit(OVERFLOW); //�洢����ʧ��
	Q.front = Q.rear = 0; //ͷָ���βָ����Ϊ�㣬����Ϊ��
	return OK;
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

int QueueEmpty(SqQueue Q)
{
	if (Q.front == Q.rear) //���п�
		return 1;
	else
		return 0;	
}
//******************************************************************
 

void  LevelOrderTraverse(BiTree T,char Lever[]) 
{//�ö��в�α���������,����α��������Lever���鷵�� 
	/*********Begin**********/ 







	 /**********  End  **********/ 
} 


	
int main()
{
	    BiTree T;
	    char s[100];
	    char Lever[100];
	    cin>>s;		 
		I=0; //ȫ�ֱ�����CreateBiTree()������Ҫʹ��    
		CreateBiTree(T,s);
	    LevelOrderTraverse(T,Lever);
	    cout<<Lever<<endl;
   
		bky(); 
		return 0;

}
void bky()
{
	    ofstream fout("output.txt");
		ifstream fin("in.txt");  
	    BiTree T;
	    char s[100];
	    char Lever[100];
	    int k=5;
	    while(k--)
	    {
	       fin>>s;		 
		   I=0; //ȫ�ֱ�����CreateBiTree()������Ҫʹ��    
	       CreateBiTree(T,s);
		    LevelOrderTraverse(T,Lever);
	        fout<<Lever<<endl; 
		
		}
	
 } 


