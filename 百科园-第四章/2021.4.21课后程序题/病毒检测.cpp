/*
Problem Description：
已知病毒的RNA序列，且病毒为环状结构，人的DNA为线性结构
当人的DNA中含有病毒RNA序列时可以认为人已感染病毒

Input：
每行给定病毒的RNA序列和人的DNA序列，使用空格隔开

Output：
输出人是(YES)否(NO)已感染病毒，每个结果为一行

Sample Input：
baa aabbc

Sample Output
YES

Language：C++
*/
//请在理解代码的情况下copy
#include <iostream>
#include <string.h>
#define MAXSIZE 0xFFFF
using namespace std;

//获取next数组
void GetNext(int next[],char s[])
{
    int len = strlen(s);
    //初始化
    int j=0;
    next[0]=0;
    //循环
    for(int i=1;i<len;i++)
    {
        //前后缀不同
        while( j>0 && s[i] != s[j] )
            j = next[j-1];
        //前后缀相同
        if( s[i] == s[j] )
            j++;
        next[i] = j;
    }
    return;
}
//KMP算法
int KMP(char main[],char search[])
{
    int j=0;
    int slen = strlen(main);
    int tlen = strlen(search);
    if (tlen == 0)
        return 0;
    int next[tlen];
    GetNext(next,search);
    for(int i=0; i<slen;i++)
    {
        while( j>0 && main[i] != search[j])
            j = next[j-1];
        if( main[i] == search[j] )
            j++;
        if (j == tlen )
            return (i - tlen + 1);
    }
    return -1;
}
//病毒的环状结构
void VirusCycle(char RNA[])
{
    char *p = RNA;
    int len = strlen(RNA);
    char temp[len] = {*p++};
    strcpy(RNA,p);
    strcat(RNA,temp);
    return;
}

int main()
{
    char DNA[MAXSIZE] = {'\0'};
    char RNA[MAXSIZE] = {'\0'};
    char clean[MAXSIZE] = {'\0'};
    int len=0,flg=1;
    while(scanf("%s%s",RNA,DNA)!=EOF)
    {
        getchar();
        len = strlen(RNA);
        for(int i=0;i<len;i++)
        {
            if(i!=0)
                VirusCycle(RNA);
            if( KMP(DNA,RNA) != -1 )
            {
                cout<<"YES"<<endl;
                cout<<KMP(DNA,RNA)<<endl;
                flg=0;
                break;
            }
        }
        if(flg)
            cout<<"NO"<<endl;
        flg = 1;
        memset(DNA,'\0',sizeof(DNA));
        memset(RNA,'\0',sizeof(RNA));
    }
    return 0;
}