/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
设二叉树中每个结点的元素均为一个字符，按先序遍历的顺序建立二叉链表
输入为二叉树的前序序列（序列中元素为'#'时，表示该结点为空）。
编写函数返回这个树的结点数。 
输出
树的总结点数 
样例输入1
abcd##e##f##ig##h## 


样例输出1
9

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;
int I;
void  bky(); 


//二叉树的二叉链表存储表示
typedef struct BiNode
{				
	char data;						//结点数据域
	struct BiNode *lchild,*rchild;	//左右孩子指针
}BiTNode,*BiTree;

void CreateBiTree(BiTree &T,char s[])
{	
	//s存储了按先序次序遍历二叉树结点值构成的序列（序列中元素为'#'时，表示该结点为空），
	//利用s创建二叉链表表示的二叉树T

	char ch;
	ch=s[I++];
	if(ch=='#')  T=NULL;			//递归结束，建空树
	else{							
		T=new BiTNode;
		T->data=ch;					//生成根结点
		CreateBiTree(T->lchild,s);	//递归创建左子树
		CreateBiTree(T->rchild,s);	//递归创建右子树
	}								//else
}	//CreateBiTree



int count_n(BiTree T) 
{//计算总结点数
   /**********Begin**********/





    /**********  End  **********/
}

	
int main()
{
	    BiTree T;
	    char s[100];
	    cin>>s;		 
		I=0; //全局变量，CreateBiTree()函数需要使用    
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
		   I=0; //全局变量，CreateBiTree()函数需要使用    
	       CreateBiTree(T,s);
		   fout<<count_n(T)<<endl;	 
		
		}
	
 } 


