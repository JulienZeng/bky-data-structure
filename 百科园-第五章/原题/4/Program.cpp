/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
���������ÿ������Ԫ�ؾ�Ϊһ���ַ��������������˳������������
����Ϊ��������ǰ�����У�������Ԫ��Ϊ'#'ʱ����ʾ�ý��Ϊ�գ���
��д��������������Ľ������ 
���
�����ܽ���� 
��������1
abcd##e##f##ig##h## 


�������1
9

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



int count_n(BiTree T) 
{//�����ܽ����
   /**********Begin**********/





    /**********  End  **********/
}

	
int main()
{
	    BiTree T;
	    char s[100];
	    cin>>s;		 
		I=0; //ȫ�ֱ�����CreateBiTree()������Ҫʹ��    
		CreateBiTree(T,s);
		cout<<count_n(T)<<endl;
   
		bky(); 
		return 0;

}
void bky()
{
	    ofstream fout("output.txt");
		ifstream fin("in.txt");  
	    BiTree T;
	    char s[100];
	    int k=5;
	    while(k--)
	    {
	       fin>>s;		 
		   I=0; //ȫ�ֱ�����CreateBiTree()������Ҫʹ��    
	       CreateBiTree(T,s);
		   fout<<count_n(T)<<endl;	 
		
		}
	
 } 


