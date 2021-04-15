/*------------------------------------------------
��������ơ�
--------------------------------------------------
������ͨ������ջ�Ļ�����������ַ�������ƥ����жϡ�
��� ���� Matching(char *exp)�Ĵ�����ա� 
���� Matching(char *exp)���ܣ� ������ʽexp�����������Ƿ���ȷƥ�䣬���ƥ�䣬�򷵻�true�����򷵻�false
���ʽ�ԡ�#�������� �������Ű�����(),[],{} �������ţ�(ע��Ӣ�����뷨�µ����š�) 

��������1��
sd[f][[()]]{s}d}# 
�������1��
����ƥ��ʧ�ܣ�


��������2��
sd[f][[()]]{s}d# 
�������2��
����ƥ��ɹ���

--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/

/***��ջʵ������ƥ��***/

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
{//�ж�ջ�Ƿ�ǿգ��շ���1���ǿշ���0
     	if (S == NULL) //ջ��
     	  return 1;
     	else
     	  return 0;
}

//�㷨3.21�����ŵ�ƥ��
Status Matching(char *exp) 
{
    //������ʽexp�����������Ƿ���ȷƥ�䣬���ƥ�䣬�򷵻�true�����򷵻�false
	//���ʽ�ԡ�#������
	char ch;
	int i=0;
	SElemType x;
	LinkStack S;
	InitStack(S); //��ʼ����ջ
	int flag = 1; //���ƥ�����Կ���ѭ�������ؽ��
	ch=exp[i++]; //�����һ���ַ� //cin >> ch; //�����һ���ַ� 
	while (ch != '#' && flag) //������ʽ�ԡ�#����β
	{
		switch (ch) {
		case '[' :
		case '(': 
		case '{': //���������ţ�����ѹ��ջ
			Push(S, ch);
			break;
			
		/**********Begin**********/	
	




		/**********  End  **********/	
		
		} //switch
		ch=exp[i++];//cin >> ch; //����������һ���ַ�
	} //while
	if (StackEmpty(S) && flag)
		return true; //ƥ��ɹ�
	else
		return false; //ƥ��ʧ��
}
int main() {

	char str[100];
	cin>>str;//�������ƥ��ı��ʽ���ԡ�#��������ע��Ҫ��Ӣ�ĸ�ʽ�½������룡 
	int flag = Matching(str);
	if (flag)
		cout << "����ƥ��ɹ���" << endl;
	else
		cout << "����ƥ��ʧ�ܣ�" << endl;
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
		fin>>str;//�������ƥ��ı��ʽ���ԡ�#��������ע��Ҫ��Ӣ�ĸ�ʽ�½������룡 
		int flag = Matching(str);
		if (flag)
			fout << "����ƥ��ɹ���" << endl;
		else
			fout << "����ƥ��ʧ�ܣ�" << endl;
		
	}

}