/*------------------------------------------------
��������ơ�
--------------------------------------------------
����
��д�㷨��ʵ�����溯���Ĺ��ܡ�
���� Index(SString S, SString T, int pos) :
����ģʽT������S�е�pos���ַ�֮���sһ�γ��ֵ�λ�á��������ڣ��򷵻�ֵΪ0,���У�T�ǿգ�1��pos��StrLength(S)

����
�ܼ�2�С���������������Ȼ������ģʽ��(ע�������ַ������ܰ����ո�)

���
��ƥ��ɹ������"YES ��X���ַ����״�ƥ��"�����򷵻�"NO" 

��������1
voidinsert
void

�������1
YES ��1���ַ����״�ƥ��

��������2
voidinsert
insert

�������2
YES ��5���ַ����״�ƥ��


--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/


/***�ַ���ƥ���㷨***/
#include<iostream>
#include<fstream>
using namespace std;

#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int Status;
void  bky(); 

#define MAXSTRLEN 255   		//�û�����255���ڶ��������
typedef struct{   
   char ch[MAXSTRLEN];	//�洢����һά����  ,�±�0�ķ������ò��� 
   int length;		  //������   
}SString; 
 
int  strlen(char *s)
{
	int i=0;
	while(s[i]!='\0')
	  i++;
	return i;
}


//�㷨4.1��BF�㷨
int Index(SString S, SString T, int pos)
{
	//����ģʽT������S�е�pos���ַ�֮���sһ�γ��ֵ�λ�á��������ڣ��򷵻�ֵΪ0
	//���У�T�ǿգ�1��pos��StrLength(S)
	int i = pos;
	int j = 1;
	
		
	/**********Begin**********/	
	




	/**********End**********/
	
	if (j > T.length)
		return i - T.length;
	else
		return 0;
	return 0;
}//Index

int main()
{
	int w; 
	SString S,T; //���� ������ģʽ��
	cin>>(S.ch+1);   //�����������±�0�ķ������ò��� 
	cin>>(T.ch+1);  //����ģʽ�����±�0�ķ������ò��� 
	//cout<<S.ch+1<<endl;
	//cout<<T.ch+1<<endl; 
	S.length=strlen(S.ch+1);//***********************
	T.length=strlen(T.ch+1);//***********************
	w= Index(S,T,1);
	if(w) 
	   cout<<"YES ��"<<Index(S,T,1)<<"���ַ����״�ƥ��\n";
	else
	   cout<<"NO\n"; 
	bky();
	return 0;
}

void bky()
{
    ofstream fout("output.txt");
  	ifstream fin("in.txt");  
	int k,w; 
	SString S,T; //����������ģʽ��
	
	for(k=0;k<5;k++)
	{
		fin>>(S.ch+1);   //�����������±�0�ķ������ò��� 
		fin>>(T.ch+1);  //����ģʽ�����±�0�ķ������ò��� 
		S.length=strlen(S.ch+1);//***********************
		T.length=strlen(T.ch+1);//***********************
		w= Index(S,T,1);
		if(w) 
		   fout<<"YES ��"<<Index(S,T,1)<<"���ַ����״�ƥ��\n";
		else
	 	   fout<<"NO\n"; 
	}
}