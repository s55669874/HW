#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person
{
           char name[100];
           int age;
           int weight;
}persons[100];

int cmp(const void *a, const void *b)
{
           struct person *c=(struct person *)a;
           struct person *d=(struct person *)b;

           if(strcmp( c->name, d->name )!=0)
                      return strcmp( c->name, d->name );

           else if(c->age!=d->age )
                      return d->age-c->age;

           else
                      return d->weight-c->weight;

}

int main()
{
           int n;
           scanf("%d", &n);

           int i;
           for(i=0;i<n;i++)
           {
                    scanf("%s", persons[i].name);
                    scanf("%d", &persons[i].age);
                    scanf("%d", &persons[i].weight);
           }
           qsort(persons, n, sizeof(persons[0]),cmp);

           int remember=1 ,j , start;

           for(i=0;i<n;i++)
           {
                      printf("%s ", persons[i].name);
                      printf("%d ", persons[i].age);
                      printf("%d", persons[i].weight);
                      printf("\n");
           }


           return 0;
}
