#include<stdio.h>

int main()
{
           int n;
           scanf("%d", &n);
           int A[n];
           int i;
           for(i=0;i<n;i++)
                      scanf("%d", &A[i]);

           int B[n], j;
           for(i=0;i<n;i++)
           {
                      B[i]=1;
                      for(j=0;j<=i-1;j++)
                      {
                                 if(A[j]<A[i] &&B[j]+1>B[i])
                                            B[i]=B[i]+1;
                      }
           }
           int k=B[0];
           for(i=1;i<n;i++)
           {
                      if(B[i]>k)
                                 k=B[i];
           }
           printf("%d", k);
           return 0;
}
