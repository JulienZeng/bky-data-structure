/*------------------------------------------------
【程序设计】
--------------------------------------------------
描述：通过调用栈的基本操作完成字符串括号匹配的判断。
完成 函数 Matching(char *exp)的代码填空。 
函数 Matching(char *exp)功能： 检验表达式exp中所含括号是否正确匹配，如果匹配，则返回true，否则返回false
表达式以“#”结束。 其中括号包括：(),[],{} 三种括号！(注：英文输入法下的括号。) 

输入样例1：
sd[f][[()]]{s}d}# 
输出样例1：
括号匹配失败！


输入样例2：
sd[f][[()]]{s}d# 
输出样例2：
括号匹配成功！

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数
      main和其它函数中的任何内容，仅在函
      数的花括号中begin和end之间填入所编写的若干语句。
*********Begin**********和**********  End  **********不可删除
------------------------------------------------*/

/***链栈实现括号匹配***/

#include<iostream>
#include<fstream>
using namespace std;
void  bky(); 

#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef int Status;
typedef char SElemType;
typedef struct SNode {
	SElemType data;
	struct SNode *next;
} SNode, *LinkStack;

Status InitStack(LinkStack &S) {
	S = NULL;
	return OK;
}

Status Push(LinkStack &S, SElemType e) {
	SNode *p = new SNode;
	if (!p) {
		return OVERFLOW;
	}
	p->data = e;
	p->next = S;
	S = p;
	return OK;
}
Status Pop(LinkStack &S, SElemType &e) {
	SNode *p;
	if (!S)
		return ERROR;
	e = S->data;
	p = S;
	S = S->next;
	delete p;
	return OK;
}
SElemType GetTop(LinkStack &S) {
	if (!S)
		return ERROR;
	return S->data;
}
int StackEmpty(LinkStack S)
{//判定栈是否非空，空返回1，非空返回0
     	if (S == NULL) //栈空
     	  return 1;
     	else
     	  return 0;
}

//算法3.21　括号的匹配
Status Matching(char *exp) 
{
    //检验表达式exp中所含括号是否正确匹配，如果匹配，则返回true，否则返回false
	//表达式以“#”结束
	char ch;
	int i=0;
	SElemType x;
	LinkStack S;
	InitStack(S); //初始化空栈
	int flag = 1; //标记匹配结果以控制循环及返回结果
	ch=exp[i++]; //读入第一个字符 //cin >> ch; //读入第一个字符 
	while (ch != '#' && flag) //假设表达式以“#”结尾
	{
		switch (ch) {
		case '[' :
		case '(': 
		case '{': //若是左括号，则将其压入栈
			Push(S, ch);
			break;
			
		/**********Begin**********/	
	




		/**********  End  **********/	
		
		} //switch
		ch=exp[i++];//cin >> ch; //继续读入下一个字符
	} //while
	if (StackEmpty(S) && flag)
		return true; //匹配成功
	else
		return false; //匹配失败
}
int main() {

	char str[100];
	cin>>str;//请输入待匹配的表达式，以“#”结束，注意要在英文格式下进行输入！ 
	int flag = Matching(str);
	if (flag)
		cout << "括号匹配成功！" << endl;
	else
		cout << "括号匹配失败！" << endl;
	bky(); 
	return 0;
}

void bky()
 {
 	ofstream fout("output.txt");
  	ifstream fin("in.txt");  
    int k; 
	char str[100];
	for(k=0;k<6;k++)
	{
		fin>>str;//请输入待匹配的表达式，以“#”结束，注意要在英文格式下进行输入！ 
		int flag = Matching(str);
		if (flag)
			fout << "括号匹配成功！" << endl;
		else
			fout << "括号匹配失败！" << endl;
		
	}

}