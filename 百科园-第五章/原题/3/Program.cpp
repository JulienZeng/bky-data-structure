/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
���������ÿ������Ԫ�ؾ�Ϊһ���ַ�����д�������Ľ������������������˳������������
����Ϊ��������ǰ�����У�������Ԫ��Ϊ'#'ʱ����ʾ�ý��Ϊ�գ���
���
Ϊ����������������ͺ������С�
��������1
abcd##e##f##ig##h## 

�������1
abcdefigh
dcebfagih
decfbghia

--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;
int I;
void  bky(); 
ofstream fout("output.txt");
ifstream fin("in.txt");  

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
   /**********Begin**********/





								//else
	 /**********  End  **********/	
}	//CreateBiTree


//���㷨5.1 ��������ĵݹ��㷨							
void InOrderTraverse(BiTree T)
{  
	//�������������T�ĵݹ��㷨
	if(T){
		InOrderTraverse(T->lchild);
		cout << T->data;
		InOrderTraverse(T->rchild);
	}
}
void preOrderTraverse(BiTree T)
{  
	//�������������T�ĵݹ��㷨
	if(T){
		cout << T->data;
		preOrderTraverse(T->lchild);
		preOrderTraverse(T->rchild);
	}
}
void postOrderTraverse(BiTree T)
{  
	//�������������T�ĵݹ��㷨
	if(T){
		
		postOrderTraverse(T->lchild);
		postOrderTraverse(T->rchild);
		cout << T->data;
	}
}

//����������������������Բ����� 						
void InOrderTraversef(BiTree T)
{  
	//�������������T�ĵݹ��㷨
	if(T){
		InOrderTraversef(T->lchild);
		fout << T->data;
		InOrderTraversef(T->rchild);
	}
}
void preOrderTraversef(BiTree T)
{  
	//�������������T�ĵݹ��㷨
	if(T){
		fout << T->data;
		preOrderTraversef(T->lchild);
		preOrderTraversef(T->rchild);
	}
}
void postOrderTraversef(BiTree T)
{  
	//�������������T�ĵݹ��㷨
	if(T){
		
		postOrderTraversef(T->lchild);
		postOrderTraversef(T->rchild);
		fout << T->data;
	}
}
int main()
{
	    BiTree T;
	    char s[100];
	    cin>>s;		 
		I=0; //ȫ�ֱ�����CreateBiTree()������Ҫʹ��    
		CreateBiTree(T,s);
		preOrderTraverse(T);
		cout<<endl;
		InOrderTraverse(T);
		cout<<endl;			
		postOrderTraverse(T);
		cout<<endl<<endl;
		bky(); 
		return 0;

}
void bky()
{
	
	    BiTree T;
	    char s[100];
	    int k=5;
	    while(k--)
	    {
	    	fin>>s;		 
			I=0; //ȫ�ֱ�����CreateBiTree()������Ҫʹ��    
			CreateBiTree(T,s);
			preOrderTraversef(T);
			fout<<endl;
			InOrderTraversef(T);
			fout<<endl;			
			postOrderTraversef(T);
			fout<<endl<<endl;
		}
	
 } 