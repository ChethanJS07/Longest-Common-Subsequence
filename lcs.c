#include<stdio.h>
#include<stdlib.h>

int max(int ,int);
int lcs(int ,int);

char x[]="abcbdab";
char y[]="bcdb";

int main()
{
  printf("The length of Longest Common Subsequence : %d",lcs(sizeof(x)-1,sizeof(y)-1));
}

int max(int a,int b)
{
  if(a>b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int lcs(int m,int n)
{
  if(m==0 || n==0)
  {
    
    return 0;
  }
  else if(x[m]==y[n])
  {
    return 1+lcs(m-1,n-1);
  }
  else if(x[m]!=y[n])
  {
    return max(lcs(m-1,n),lcs(m,n-1));
  }
}