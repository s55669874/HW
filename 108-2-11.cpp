#include<bits/stdc++.h>

using namespace std;
int  distances[500], visited[500];
vector<int> persons[500];
deque<int> que;
void bfs(int a)
{
    int i;
    que.push_back(a);
    visited[a]=1;
    distances[a]=0;
    while(!que.empty())
    {
        int remember=que.front();
        que.pop_front();

        for(i=0;i<persons[remember].size();i++)
        {
            if(visited[persons[remember][i]]==0)
                {
                           visited[persons[remember][i]]=1;
                           que.push_back(persons[remember][i]);
                           distances[persons[remember][i]]=distances[remember]+1;
                }
        }
    }
}
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int i;


    int a, b;
    for(i=0;i<m;i++)
    {
        scanf("%d%d", &a, &b);
        persons[a].push_back(b);
        persons[b].push_back(a);

    }

    int query, c, d, j;
    scanf("%d", &query);
    for(i=0;i<query;i++)
    {
           for(j=0;j<n;j++)
        {
            distances[j]=0;
            visited[j]=0;
        }
        scanf("%d%d", &c, &d);
        bfs(c);
        if(visited[d]==0)
           printf("-1\n");
        else
           printf("%d\n", distances[d]);

    }

        return 0;
}
