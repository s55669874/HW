#include<stdio.h>

int main()
{
           int n, m;
           scanf("%d%d", &n, &m);
           int A[n+1];
           A[0]=0;
           int i;
           for(i=1;i<=n;i++)
                  scanf("%d", &A[i]);

           int B[n+1];
           B[0]=0;
           for(i=1;i<=n;i++)
                      B[i]=B[i-1]+A[i];

           int left, right;
           for(i=0;i<m;i++)
                     {
                                 scanf("%d%d", &left, &right);
                                 printf("%d\n", B[right]-B[left-1]);
                     }
           return 0;

}
