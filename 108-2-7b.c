#include<stdio.h>

int main()
{
           int N;
           scanf("%d", &N);
           int A[N];
           int i;
           for(i=0;i<N;i++)
           {
                    scanf("%d", &A[i]);
           }
           int M;
           scanf("%d", &M);
           int B[M+1];
           int j;
           B[0]=0;
           for(i=1;i<=M;i++)
           {
                      B[i]=20002;
                      for(j=0;j<N;j++)
                      {
                                 if(i>=A[j] &&B[i-A[j]]+1<B[i])
                                            B[i]=B[i-A[j]]+1;
                      }
           }
           if(B[M]>20000)
                      printf("-1");
           else
                      printf("%d", B[M]);
           return 0;
}
