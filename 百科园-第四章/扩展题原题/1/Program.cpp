/*
�ж���������Ϊ6���ַ����Ƿ�ͬһ���������С�
��������˳���룬Ҳ�����Ƿ�ʱ�룬ͬʱ���Դ�����λ
�ÿ�ʼ�����磺123456 ��432165������Ϊ��ͬһ���������С� 
���Ե��ÿ⺯��ʵ�֣��⺯�������ڴ���ĩβ��
��������1��
123456
765432
�������1��
No 

��������2��
123456
165432
�������2��
YES 

��������3��
123456
143256
�������3��
No 

--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/


#include <string.h>
#include<fstream>
#include<iostream>  
using namespace std; 
#define X 6  //���г���Ϊ6 
void  bky(); 


int equal(char q[],char p[])
{//p���� �� q���н��бȽϣ�������ͬ�������з���1�����򷵻�0  
	//**********Begin**********





			    
 // **********  End  **********	     
}
int main()
{   
    int n,i;
    char a[X+1],b[X+1];
	cin>>a;	//����a����	
	cin>>b;	//����b����	

	if(equal(a,b))
  	 	cout<<"YES\n";	
	else
	    cout<<"NO\n";	
	bky();
	return 0;
}

void bky()
{   
    ofstream fout("output.txt");
  	ifstream fin("in.txt"); 
     
	int k, n,i;
    char a[X+1],b[X+1];
    
    for(k=0;k<11;k++)
    { 
    	fin>>a;	//����a����	
	    fin>>b;	//����b����	
	 	if(equal(a,b))
  	 		fout<<"YES\n";	
		else
	   		fout<<"NO\n";
	
	}

}

/*
 <string.h>��ʹ�õ��Ŀ⺯��˵����
1. strcpy
char *strcpy(char *destin, char *source);
���ܣ���sourceָ����ַ�������destin��
2. strncpy
char *strncpy(char *destin, char *source, int len);
���ܣ���sourceָ���len���ַ�������destin��
ע��strncpyҪ������ַ���������
 3. strcat
char* strcat(char * str1,char * str2);
����: ���ַ���str2�ӵ�str1����,str1����'\0'��ȡ��
 4. strstr
char* strstr(char* str1,char* str2);
����:�ҳ�str2�ַ�����str1�ַ����е�һ�γ��ֵ�λ��(������str2�Ĵ�������)
����: ���ظ�λ�õ�ָ��,���Ҳ���,���ؿ�ָ��
5.��ʽ��strlen ���ַ�ָ����ʽ��
���ܣ���������ַ����ģ�unsigned int�ͣ����ȣ�������'\0'����
˵�������ش��ĳ��ȣ�������������'\0'���ڡ�
 int strcmp(const char *str1, const char *str2) �� str1 ��ָ����ַ����� str2 ��ָ����ַ������бȽϡ�

6.strcmp 
������int strcmp(const char *str1, const char *str2)
����
str1 -- Ҫ���бȽϵĵ�һ���ַ�����
str2 -- Ҫ���бȽϵĵڶ����ַ�����
����ֵ
�ú�������ֵ���£�
�������ֵС�� 0�����ʾ str1 С�� str2��
�������ֵ���� 0�����ʾ str1 ���� str2��
�������ֵ���� 0�����ʾ str1 ���� str2��
*/ 