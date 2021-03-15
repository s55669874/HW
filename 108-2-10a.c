#include<stdio.h>

int main()
{
    int n, W;
    scanf("%d%d", &n, &W);
    int A[n+1][W+1];
    int thing[n+1][2];
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d%d", &thing[i][0], &thing[i][1]);
    }
    thing[0][0]=0, thing[0][1]=0;

    for(i=0;i<=W;i++)
        A[0][i]=0;

    for(i=0;i<=n;i++)
        A[i][0]=0;

    int j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=W;j++)
        {
            if(j>=thing[i][1])
            {
                if(A[i-1][j]>= thing[i][0]+A[i-1][j-thing[i][1]])
                    A[i][j]=A[i-1][j];
                else
                    {
                               A[i][j]=thing[i][0]+A[i-1][j-thing[i][1]];

                    }
            }
            else
                A[i][j]=A[i-1][j];

        }
    }
    /*for(i=0;i<=n;i++)
        for(j=0;j<=W;j++)
        printf("~%d~", A[i][j]);*/
    printf("%d", A[n][W]);
    return 0;
}

