#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

long long int gcd(long long int a,long long int b)
{
           while(b!=0)
           {
                      long long int k=a%b;
                      a=b;
                      b=k;
           }
           return a;
}
int cmp(const void *a, const void *b)
{
           if(*(long long int *)a-*(long long int *)b>=0)
                      return 1;
           else
                      return -1;
}
int main()
{
           long long int A[8];
           int i ;
           //char H[50];
           for(i=0;i<8;i++)
           {
                      long long int question=rand();
                      printf("? %lld", question);
                      printf("\n");
                      fflush(stdout);
                      if(i<8)
                                 scanf("%lld", &A[i]);
           }
           qsort(A, 8, sizeof(A[0]), cmp);
           /*for(i=0;i<8;i++)
                      printf("-%lld-\n", A[i]);*/
           for(i=1;i<8;i++)
           {
                      A[i]=A[i]-A[0];
           }

           long long int answer=gcd(A[1], A[2]);
           for(i=3;i<8;i++)
           {
                      answer=gcd(answer, A[i]);
           }


           printf("! %lld\n", answer);
           fflush(stdout);
           return 0;
}
