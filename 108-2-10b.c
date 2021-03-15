#include<stdio.h>

int main()
{
           int n, L;
           scanf("%d%d", &n, &L);

           int A[n+1], i;
           A[0]=0;
           for(i=1;i<=n;i++)
                      scanf("%d", &A[i]);

           int prefix[n+1];
           prefix[0]=0;
           prefix[1]=A[1];
           for(i=1;i<=n;i++)
                      prefix[i]=prefix[i-1]+A[i];

           int j, answer[n+1], left=0;
           answer[0]=0;
           answer[1]=0;
           /*for(i=1;i<=n;i++)
           {
                      printf("%d ", prefix[i]);
           }
           printf("\n");*/
           for(i=1;i<=n;i++)
           {
                      if(A[i]>=L)
                      {
                           answer[i]=i;
                           left=i-1;
                      }
                      if(prefix[i]-prefix[left]>=L)
                      {
                                 for(j=left;j<i;j++)
                                 {
                                            if(prefix[i]-prefix[j]>=L)
                                            {
                                                       answer[i]=j+1;
                                                       left=j;
                                            }
                                            else
                                                       break;
                                 }
                      }
                      else
                      {
                                 answer[i]=-1;
                      }
           }
           for(i=1;i<=n;i++)
                      printf("%d ", answer[i]);

           return 0;
}
