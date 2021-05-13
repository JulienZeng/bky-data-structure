/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述
设二叉树中每个结点的元素均为一个字符，编写二叉树的建立函数按先序遍历的顺序建立二叉链表
输入为二叉树的前序序列（序列中元素为'#'时，表示该结点为空）。
输出
为二叉树的先序、中序和后序序列。
样例输入1
abcd##e##f##ig##h## 

样例输出1
abcdefigh
dcebfagih
decfbghia

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
ofstream fout("output.txt");
ifstream fin("in.txt");  

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
   /**********Begin**********/





								//else
	 /**********  End  **********/	
}	//CreateBiTree


//用算法5.1 中序遍历的递归算法							
void InOrderTraverse(BiTree T)
{  
	//中序遍历二叉树T的递归算法
	if(T){
		InOrderTraverse(T->lchild);
		cout << T->data;
		InOrderTraverse(T->rchild);
	}
}
void preOrderTraverse(BiTree T)
{  
	//先序遍历二叉树T的递归算法
	if(T){
		cout << T->data;
		preOrderTraverse(T->lchild);
		preOrderTraverse(T->rchild);
	}
}
void postOrderTraverse(BiTree T)
{  
	//后序遍历二叉树T的递归算法
	if(T){
		
		postOrderTraverse(T->lchild);
		postOrderTraverse(T->rchild);
		cout << T->data;
	}
}

//下面三个函数，考生请忽略不看！ 						
void InOrderTraversef(BiTree T)
{  
	//中序遍历二叉树T的递归算法
	if(T){
		InOrderTraversef(T->lchild);
		fout << T->data;
		InOrderTraversef(T->rchild);
	}
}
void preOrderTraversef(BiTree T)
{  
	//先序遍历二叉树T的递归算法
	if(T){
		fout << T->data;
		preOrderTraversef(T->lchild);
		preOrderTraversef(T->rchild);
	}
}
void postOrderTraversef(BiTree T)
{  
	//后序遍历二叉树T的递归算法
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
		I=0; //全局变量，CreateBiTree()函数需要使用    
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
			I=0; //全局变量，CreateBiTree()函数需要使用    
			CreateBiTree(T,s);
			preOrderTraversef(T);
			fout<<endl;
			InOrderTraversef(T);
			fout<<endl;			
			postOrderTraversef(T);
			fout<<endl<<endl;
		}
	
 } 