/*------------------------------------------------
��������ơ�
--------------------------------------------------
ͳ���ַ����ֵ�Ƶ��
����
дһ���㷨ͳ���������ַ����и�����ͬ�ַ����ֵ�Ƶ�Ȳ���������
(�ַ����еĺϷ��ַ�Ϊ0-9֮���10�����ֺ�A-Z֮���26����д��ĸ)��


����
������һ�У�Ϊ��ͳ���ַ�Ƶ�ȵ��ַ���(���ܰ����ո�)��

���
���n�У�ÿһ��Ϊһ���ַ����ֵ�Ƶ�ȣ�ֻ������ڵ��ַ�����ʽΪ���ַ���Ƶ�ȣ���
�ַ�����˳����ASCII���С�����˳��

�������� 1 
LITTLE5ILOVEYOU

������� 1
5:1
E:2
I:2
L:3
O:2
T:2
U:1
V:1
Y:1

�������� 2 
LITTLE5ILOVEYOUaaaaaa@@@

������� 2
5:1
E:2
I:2
L:3
O:2
T:2
U:1
V:1
Y:1

--------------------------------------------------
ע�⣺����Դ����������¡�����Ķ�������
      main�����������е��κ����ݣ����ں�
      ���Ļ�������begin��end֮����������д��������䡣
*********Begin**********��**********  End  **********����ɾ��
------------------------------------------------*/




//����0 ��ASCII��ֵ��48��A��ĸ��ASCII��ֵ��65

#include<string.h>
#include<fstream>
#include<stdlib.h>
#include<iostream>  
#include<iomanip> //��I/O������ͷ�ļ�����Ҫ�Ƕ�cin,cout֮���һЩ���������� 
using namespace std;
void  bky(); 

void count(char *str,int num[])
{ //ͳ���ӷ���str�кϷ��ַ����ֵĴ��������ַ�0-9��A-Z���ִ������δ洢������num[]��
  //����:0�ĳ��ִ����洢��num[0],Z �ĳ��ִ����洢��num[35]�С� 
	int k=0;
	int i;
	for(i=0;i<36;i++)
	    num[i]=0;
	while(str[k]!='\0')
	{
		/**********Begin**********/	
	



		/**********End**********/
		k++;			
	}
}	
 
	int main()
	{   
	    int i,num[36];
	   	char str[1000];
	    cin>>str;
		count(str,num);	
		for(i=0;i<10;i++)
		{
			if(num[i]!=0)
        		cout<<i<<":"<<num[i]<<endl;	
		}
  		for(i=10;i<36;i++)
		{   
	  		 if(num[i]!=0)
     	 		cout<<char(i+55)<<":"<<num[i]<<endl;	
		} 
		cout<<endl;		
	    bky(); 
		return 0;
	}
	
	void bky()
	{   
	    ofstream fout("output.txt");
  	    ifstream fin("in.txt");  
	    int k,i,num[36];
	 	char str[1000];
		for(k=0;k<5;k++)
		{
		   fin>>str;
		   count(str,num);	
			for(i=0;i<10;i++)
			{
				if(num[i]!=0)
        			fout<<i<<":"<<num[i]<<endl;	
			}
  			for(i=10;i<36;i++)
			{   
	  		 	if(num[i]!=0)
     	 			fout<<char(i+55)<<":"<<num[i]<<endl;	
			} 
			fout<<endl;	
			
		}
	}