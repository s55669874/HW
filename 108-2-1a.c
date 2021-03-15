#include<stdio.h>
#include<string.h>

#define MaxPersons 500

struct person
{
           int index;
           char name[21];
           int list_of_friends[MaxPersons];
           int num_of_friends;
};

int num_of_persons=0;

struct person persons[MaxPersons];

int find_idx(char *s)
{
           int c;
           for(c=0;c<num_of_persons;c++)
           {
                      if(strcmp(s, persons[c].name)==0)
                                 break;
           }
           return persons[c].index;
};

void make_friend(int a, int b)
{
           persons[a].list_of_friends[persons[a].num_of_friends]=b;
           persons[b].list_of_friends[persons[b].num_of_friends]=a;
           persons[a].num_of_friends++;
           persons[b].num_of_friends++;
}

void list_friend(int a)
{
           int t;
           for(t=0;t<persons[a].num_of_friends;t++)
           {
                      printf("%s ", persons[persons[a].list_of_friends[t]].name);
           }
           printf("\n");
}

int main()
{
           scanf("%d", &num_of_persons);
           int i;
           for(i=0;i<num_of_persons;i++)
           {
              char name_cpy[21];
              scanf("%s", name_cpy);
              persons[i].index=i ;
              strcpy(persons[i].name, name_cpy);
              persons[i].num_of_friends=0;
           }

           int queries;
           scanf("%d", &queries);
           int j;
           for(j=0;j<queries;j++)
           {
                      char query[11];
                      scanf("%s", query);
                      if(strcmp(query, "MakeFriend")==0)
                      {
                                 char name_a[21], name_b[21];
                                 scanf("%s", name_a);
                                 scanf("%s", name_b);
                                 int index_of_a, index_of_b;
                                 index_of_a=find_idx(name_a);
                                 index_of_b=find_idx(name_b);
                                 make_friend(index_of_a, index_of_b);
                      }

                      if(strcmp(query, "ListFriend")==0)
                      {
                                char name[21];
                                scanf("%s", name);
                                int a;
                                a=find_idx(name);
                                list_friend(a);
                      }
           }
      return 0;
}

