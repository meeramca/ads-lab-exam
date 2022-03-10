#include<stdio.h>
#include<stdlib.h>
  int set1[20],set2[20],uni[20],inter[20],diff12[20],diff21[20],i,j,k,n1,n2,n3,choice=0;
void main()
{

    printf("Enter the size of the first set:\n");
    scanf("%d",&n1);
    printf("Enter the size of the second set:\n");
    scanf("%d",&n2);
    printf("Enter the elements of first set :\n");
    for(i=0;i<n1;i++)
        scanf("%d",&set1[i]);
    printf("Enter the elements of second set :\n");
    for(j=0;j<n2;j++)
        scanf("%d",&set2[j]);
    while(choice != 5)
    {
        printf("1- union \n");
        printf("2-intersection \n");
        printf("3- set1 -set2\n");
        printf("4- set2-set1 \n");
        printf("5- exit\n");
        printf("Enter your choice :\n");
        scanf("%d",&choice);
        switch(choice)
        {
       case 1:
            unio();
            break;
       case 2:
            intersection();
            break;
       case 3:
             difference12();
             break;
       case 4:
             difference21();
             break;
       case 5:
             exit(0);
             break;
       default:
             printf("invalid choice :\n");
        }
    }
    getch();
}
void unio()
{
  int k;
  n3 = n1+n2;
  printf("set 1:\n");
  for(i=0;i<n1;i++)
    printf("%d\n", set1[i]);
  printf("set 2:\n");
  for(j=0;j<n2;j++)
    printf("%d\n", set2[j]);
  printf("union of the entered set1 and set2  are :\n");
  for(i=0;i<n1;i++)
  {
    uni[i] = set1[i];
  }
  k = n1;
  for(j=0;j<n2;j++)
  {
    uni[k]= set2[j];
    k++;
  }
  for(k=0;k<n3;k++)
  {
      printf("%d\n",uni[k]);

  }
}
void intersection()
{
int size=0;
printf("Intersection of set1 and set2 are :\n");

 for(i=0;i<n1;i++)
 {
  for(j=0;j<n2;j++)
  {
      if(set1[i] == set2[j])
        {
         inter[k]= set1[i];
         k++;
         size++;
        }
  }
 }

 for(k=0;k<size;k++)
 {
    printf("%d\n",inter[k]);
 }
}
void difference12()
{
  int l=0,size =0;
  for(i=0;i<n1;i++)
  {
      for(j=0;j<n2;j++)
      {
          if(set2[j] == set1[i])
          {
             j++;
          }
          else
          {
            diff12[l] = set1[i];
            l++;
            size ++;
          }
      }
  }
  printf("set1 - set2 =\n");
  for(l=0;l<size;l++)
    printf("%d\n",diff12[l]);
}
void difference21()
{
int m=0;
  for(j=0;j<n2;j++)
  {
      for(i=0;i<n1;i++)
      {
          if(set2[j] == set1[i])
          {
             i++;
          }
          else
          {
            diff12[m] = set2[j];

          }
      }
  }
  printf("set1 - set2 =\n");
  for(m=0;m<n2;m++)
    printf("%d\n",diff21[m]);
}
