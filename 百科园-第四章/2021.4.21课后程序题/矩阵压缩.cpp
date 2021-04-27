/*
样例输入：
2 6
6 2
4 2
9 9
样例输出：
A[2][6]=24
A[6][2]=24 
A[4][2]=13 
A[9][9]=55

*/ 
//请在理解代码的情况下copy
#include<iostream>
using namespace std;
#define N 10
int fun(int B[],int i,int j)
{
  int k=0;
  //请在这里补充代码
  if(i>=j)
  {
    for(int x=0,m=1;x<i;x++)
      k += m++;
    k = k + j;
  }
  else
  {
    for(int x=0,m=1;x<j;x++)
        k += m++;
      k += i;
  }
  //
  return B[k];	
}

int main()
{
  int A[N][N];
  int k=1;
  for(int i=0;i<N;i++)
  {
  	for(int j=0;j<=i;j++)
  	{
  		A[i][j]=A[j][i]=k++;
  	}
  }	
  for(int i=0;i<N;i++)
  {
  	for(int j=0;j<N;j++)
  		cout<<A[i][j]<<" ";
  	cout<<endl;		    
  }	
  int m=N*(N+1)/2;
  int B[m]={0};
  
  for(int i=0,m=0;i<N;i++)
  	for(int j=0;j<=i;j++)
  		B[m++]=A[i][j];

	
  for(int i=0;i<m;i++)
    cout<<B[i]<<" ";
  cout<<endl;	
  
  // int r1,r2; 
  // cout<<"请输入原二维数组行号和列号：（-1结束输入）"<<endl;
  // while(1)
  // {
  // 	cin>>r1;
  // 	if(r1==-1)
  // 	  break;
	// cin>>r2; 
  //   cout<<"A["<<r1<<"]["<<r2<<"]="<<fun(B,r1,r2)<<endl; 

  // }
    for(int i=0;i<N;i++)
    {
      for(int j=0;j<N;j++)
      {
        cout<<fun(B,i,j)<<" ";
      }
      cout<<endl;
    }
  return 0;
}
