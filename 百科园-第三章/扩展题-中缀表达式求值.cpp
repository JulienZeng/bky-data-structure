/*
OJ��ַ:http://www.bjfuacm.com/problem/240  
��������ο��������ܹ����������copy�� 
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAXSIZE 0xfff
using namespace std;
//��������ջ�Ĵ洢�ṹ
typedef struct numStatus
{
    double data;
    numStatus *next;
} numStatus;
//�������ջ�Ĵ洢�ṹ
typedef struct charStatus
{
    char data;
    charStatus *next;
} charStatus;
//��������ջ����(��ʼ��)
numStatus *createNumStatusList()
{
    numStatus *listHeadNode = new numStatus;
    listHeadNode->next = NULL;
    return listHeadNode;
}
//��������ջ����(��ʼ��)
charStatus *createCharStatusList()
{
    charStatus *listHeadNode = new charStatus;
    listHeadNode->next = NULL;
    return listHeadNode;
}
//������ջ
void createNumNode(numStatus *listHeadNode, double newData)
{
    numStatus *newNode = new numStatus;
    newNode->data = newData;
    newNode->next = listHeadNode->next;
    listHeadNode->next = newNode;
}
//������ջ
void createCharNode(charStatus *listHeadNode, char newData)
{
    charStatus *newNode = new charStatus;
    newNode->data = newData;
    newNode->next = listHeadNode->next;
    listHeadNode->next = newNode;
}
//���ֳ�ջ
double numNodePop(numStatus *listHeadNode)
{
    numStatus *deleNode = listHeadNode->next;
    listHeadNode->next = deleNode->next;
    double re = deleNode->data;
    delete deleNode;
    return re;
}
//���ų�ջ
char charNodePop(charStatus *listHeadNode)
{
    charStatus *deleNode = listHeadNode->next;
    listHeadNode->next = deleNode->next;
    char re = deleNode->data;
    delete deleNode;
    return re;
}
//���ȼ��Ƚ�
char prece(char front, char rear)
{
    if (front == '(')
    {
        if(rear == ')')
            return '=';
        else
            return '<';
    }
    if (front == ')')
        return '>';
    
    if (front == '+' || front == '-')
    {
        if (rear == '+' || rear == '-' || rear == ')')
            return '>';
        if (rear == '*' || rear == '/' || rear == '(')
            return '<';
    }
    if (front == '*' || front == '/')
    {
        if (rear == '(')
            return '<';
        if (rear == ')')
            return '>';
        else
            return '>';
    }
}
//��������
double calculat(double a, double b, char op)
{
    double re;
    switch (op)
    {
    case '+':
        re = a + b;
        break;

    case '-':
        re = a - b;
        break;

    case '*':
        re = a * b;
        break;

    case '/':
        re = a / b;
        break;
    }
    return re;
}
//���ʽ����
double handle(numStatus *numHeadNode, charStatus *charHeadNode,char *in)
{
    char *pa = in;
    double numData = 0, a = 0, b = 0;
    int i = 0;
    char ch,op;
    ch = *pa;
    if(ch == '=')
        return false;
    while (ch != '=')
    {
    	//���Ϊ���� 
        if (ch >= '0' && ch <= '9')
        {
            while (ch >= '0' && ch <= '9')
            {
                numData = numData * 10 + ch - '0';
                ch = *(++pa);
            }
            if (ch == '.')
            {
                ch = *(++pa);
                i = 1;
                while (ch >= '0' && ch <= '9')
                {
                    numData = numData + (ch - '0') * pow(0.1, i);
                    ch = *(++pa);
                }
            }
            createNumNode(numHeadNode, numData);
            numData = 0;
        }
        //���Ϊ�ַ� 
        else
        {
            if (charHeadNode->next == NULL)
            {
                createCharNode(charHeadNode, ch);
                ch = *(++pa);
            }
            else
            {
                switch (prece(charHeadNode->next->data,ch))
                {
                case '<':
                    createCharNode(charHeadNode, ch);
                    ch = *(++pa);
                    break;

                case '>':
                    a = numNodePop(numHeadNode);
                    b = numNodePop(numHeadNode);
                    op = charNodePop(charHeadNode);
                    createNumNode(numHeadNode, calculat(b, a, op));
                    break;

                case '=':
                    charNodePop(charHeadNode);
                    ch = *(++pa);
                    break;

                default:
                    break;
                }
            }
        }
    }
    while( ch == '=' && charHeadNode->next != NULL)
    {
        a = numNodePop(numHeadNode);
        b = numNodePop(numHeadNode);
        op = charNodePop(charHeadNode);
        createNumNode(numHeadNode, calculat(b, a, op));
    }
    return numNodePop(numHeadNode);
}

int main()
{
    char a[MAXSIZE] = {'\0'};
    double re;
    char *pa = a;
    while(scanf("%s",a)!=EOF)
    {
        numStatus *numHeadNode;
        charStatus *charHeadNode;
        numHeadNode = createNumStatusList();
        charHeadNode = createCharStatusList();
        double re;
        re = handle(numHeadNode,charHeadNode,pa);
        if(re == false)
        {
            delete numHeadNode;
            delete charHeadNode;
            break;
        }
        printf("%.2lf\n",re);
        delete numHeadNode;
        delete charHeadNode;
    }
    return 0;
}
