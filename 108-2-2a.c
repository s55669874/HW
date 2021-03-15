#include<stdio.h>

struct node
{
           int visit;
           int adj_list[500];
           int num_friend;
}nodes[500];

void make_friend(int a, int b)
{
           nodes[a].adj_list[nodes[a].num_friend]=b;
           nodes[b].adj_list[nodes[b].num_friend]=a;
           nodes[a].num_friend++;
           nodes[b].num_friend++;
}

 void dfs(int a)
{
           nodes[a].visit=1;
           int i;
           for(i=0;i<nodes[a].num_friend;i++)
           {
                      if(nodes[nodes[a].adj_list[i]].visit==0)
                                 dfs(nodes[a].adj_list[i]);
           }
}
int main()
{
           int num_person;
           scanf("%d", &num_person);
           int num_query;
           scanf("%d", &num_query);
           int i;
           for(i=0;i<num_person;i++)
           {
                      nodes[i].num_friend=0;
                      nodes[i].visit=0;
           }
           for(i=0;i<num_query;i++)
           {
                      int a, b;
                      scanf("%d", &a);
                      scanf("%d", &b);
                      make_friend(a, b);
           }
           int question;
           scanf("%d", &question);
           for(i=0;i<question;i++)
           {
                      int c, d;
                      scanf("%d", &c);
                      scanf("%d", &d);
                      dfs(c);
                      if(nodes[d].visit==1)
                                 printf("Yes\n");
                      else
                                 printf("No\n");
                      int j;
                      for(j=0;j<num_person;j++)
                                 nodes[j].visit=0;
           }
           return 0;
}
