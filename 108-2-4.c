#include<stdio.h>

int n;
int m, cur_leading=0;


int main()
{
           scanf("%d%d", &n, &m);
           int A[m][n];
           int i, j;
           for(i=0;i<m;i++)
                      {
                      for(j=0;j<n;j++)
                                 {
                                            scanf("%d", &A[i][j]);
                                 }
                      }


           calculation(A, 0);

           int h=0;
           for(i=0;i<m;i++)
           {
                      for(j=0;j<n;j++)
                      {
                                 if(A[i][j]==1)
                                 {
                                            h++;
                                            break;
                                 }
                      }
           }
           printf("%d", h);

           return 0;
}

int calculation(int A[][n],int min)
{
           int i, j, k=0;
           int B[n];


           if(min==m-1 )
                      return 0;

           for(i=min;i<m;i++)
                      if(A[i][cur_leading]==1)
                      k=1;
           if(k==0)
           {
                      for(i=cur_leading+1;i<n;i++)
                        {
                                            for(j=min;j<m;j++)
                                            if(A[j][i]==1)
                                 {
                                            k=1;
                                            cur_leading=i;
                                            break;
                                 }
                                 if(k==1)
                                            break;
                        }
           }

           for(i=min+1;i<m;i++)
           {
                      if(A[min][cur_leading]==1)
                      {
                                 break;
                      }
                      if(A[i][cur_leading]==1)
                      {
                                 for(j=0;j<n;j++)/*把leading 1的放到開頭*/
                                 {
                                            B[j]=A[i][j];
                                            A[i][j]=A[min][j];
                                            A[min][j]=B[j];
                                 }

                                 break;
                      }
           }

           for(i=min+1;i<m;i++)
           {
                      if(A[i][cur_leading]==1)/*對矩陣進行簡化*/
                      {
                                 for(j=cur_leading;j<n;j++)
                                 {
                                            A[i][j]=(A[min][j]+A[i][j])%2;

                                 }
                      }
           }

          if(cur_leading+1<n)
                      {
                                 cur_leading++;
                                 calculation(A, ++min);
                      }
               else
                      return 0;
}
