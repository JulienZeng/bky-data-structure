/*
������⣺�о��߽��˵�DNA�Ͳ���DNA����ʾ����һЩ��ĸ��ɵ��ַ������С�
Ȼ����ĳ�ֲ���DNA�����Ƿ��ڻ��ߵ�DNA�����г��ֹ���������ֹ�������˸�Ⱦ�˸ò���������û�и�Ⱦ��
���磬���財����DNA����Ϊbaa������1��DNA����Ϊaaabbba�����Ⱦ������2��DNA����Ϊbabbba����δ��Ⱦ��
��ע�⣬�˵�DNA���������Եģ���������DNA�����ǻ�״��)
Ҫ�����벡��DNA���У�����<100�����˵�DNA���У�����<100�����ж��Ƿ��Ⱦ����Ⱦ���"YES",δ��Ⱦ���"NO" 
���Ե��ÿ⺯��ʵ�֣��⺯�������ڴ���ĩβ��
�뽫���� int isVirus(char Person[],char Virus[])  ���������� 
 
��������1��
baa aaabbba
�������1��
YES

��������2��
baa babbba
�������2��
No

--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/

#include<iostream> 
#include<fstream>
#include<string.h>
using namespace std;
void  bky(); 
int isVirus(char Person[],char Virus[])
{//�ж��˵�DNA�ַ���Person���Ƿ��Ⱦ�˲���DNA�ַ���Virus,��Ⱦreturn 1,û�и�Ⱦreturn 0
//**********Begin**********	









 // **********  End  **********		
	
} 
int main()
{
	char virus[100],Person[100];
	cin>>virus;
	cin>>Person;
	if(isVirus(Person,virus))
		cout<<"Yes"<<endl;
	else
	    cout<<"NO"<<endl;
	bky();
	return 0;
}
void bky()
{   
    ofstream fout("output.txt");
  	ifstream fin("in.txt");     	
	char virus[100],Person[100];
    for(int k=0;k<11;k++)
    { 
   		fin>>virus;
		fin>>Person;
		if(isVirus(Person,virus))
			fout<<"Yes"<<endl;
		else
	    	fout<<"NO"<<endl;	
	}

}

/*
�����������Ŀ⺯��ʵ�֣�Ҳ����ֱ��ʵ�� 
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
