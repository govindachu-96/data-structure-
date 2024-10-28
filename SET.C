#include<stdio.h>
#include<conio.h>
void input();
void output();
void setunion();
void intersection();
void difference();
int
 a[]={0,0,0,0,0,0,0,0,0};
 b[]={0,0,0,0,0,0,0,0,0};
 c[]={0,0,0,0,0,0,0,0,0};
void main()
{
 int ch,wish;
 clrscr();
 while(1)
 {
  printf("\n menu \n");
  printf("n1.input \n2.union \n3.intersection \n4.difference\n");
  printf("\n enter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	  input();
	  break;
   case 2:
	  setunion();
	  break;
   case 3:
	  intersection();
	  break;
   case 4:
	 difference();
	 break;
   case 5:
	 exit(0);
	 break;
   default:
	  printf("wrong choice!");

  }
  getch();
  }
  }
 void input()
 {
  int n,ele,i;
  printf("\n enter size of first set:");
  scanf("%d",&n);
  printf("\n enter the elements \n");
  for(i=1;i<=n;i++)
  {
   scanf("%d",&ele);
   a[ele]=1;
  }
  printf("enter size of second set :");
  scanf("%d",&n);
  printf("\n enter the elements \n");
  for(i=1;i<=n;i++)
  {
   scanf("%d",&ele);
  }
  b[ele]=1;
  printf("insert1:{");
  for(i=1;i<=9;i++)
  {
   printf("%d",a[i]);
  }
  printf("}");
  printf("\n set2:{");
  for(i=1;i<=9;i++)
  {
   printf("%d",b[i]);
  }
  printf("}");
 }
 void output(int c[])
 {
  int i;
  printf("\n set:{");
  for(i=1;i<=9;i++)
  {
   if(c[i]!=0)
   {
    printf("%d\t",c[i]);
  }
  printf("}");
  }
 }
 void setunion()
 {
  int i,c[10];
  for(i=1;i<=9;i++)
  {
   if(a[i]!=b[i])
   c[i]=1;
   else
   c[i]=a[i];
  }
  printf("union of set1 and set2 is:{");
  for(i=1;i<9;i++)
  {
   printf("%d",c[i]);
  }
  printf("}");
  output(c);
  }
void intersection()
{
 int i,c[10];
 for(i=1;i<=9;i++)
 {
  if(a[i]==b[i])
  c[i]=a[i];
  else
  c[i]=0;
 }
 printf("intersection of set1 and set2 :{");
 for(i=1;i<=9;i++)
 {
  printf("%d",c[i]);
  }
  printf("}");
  output(c);
 }
 void difference()
 {
  int i,c[10];
  for(i=1;i<=9;i++)
  {
   if(a[i]==1 && b[i]==0)
   c[i]=1;
  else
  c[i]=0;
 }
 printf("differnce of set1 and set2 is :{" );
 for(i=1;i<=9;i++)
{
 printf("%d",c[i]);
 }
 printf("}");
 output(c);
 }