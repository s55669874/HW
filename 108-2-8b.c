#include<stdio.h>

int main()
{
           int n;
           scanf("%d", &n);
           int A[n+1];
           A[0]=0;
           int i;
           for(i=1;i<=n;i++)
                      scanf("%d", &A[i]);

           int B[n+1];
           B[0]=0;
           int h=A[1];
           for(i=1;i<=n;i++)
                     {
                                B[i]=B[i-1]+A[i];
                     }
           int minA[n+1], answer[n+1], left[n+1];
           minA[0]=0, minA[1]=0;
           left[0]=0, left[1]=0;
           for(i=2;i<=n;i++)
           {
                    if(minA[i-1]>B[i-1])
                    {
                               minA[i]=B[i-1];
                               left[i]=i-1;
                    }
                    else
                    {
                               minA[i]=minA[i-1];
                               left[i]=left[i-1];
                    }
           }
           for(i=1;i<=n;i++)
           {
                      answer[i]=B[i]-minA[i];
           }
           int k=answer[1];
           int f=1;
           for(i=2;i<=n;i++)
           {
                      if(answer[i]>k)
                                 {
                                            k=answer[i];
                                            f=i;

                                 }
           }
           printf("%d %d\n", left[f]+1, f);
           printf("%d", answer[f]);

           return 0;
}
