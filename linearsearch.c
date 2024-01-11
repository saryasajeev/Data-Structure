#include<stdio.h>
void main()
{
int x,i,n,a[50],count=0,flag=0;
printf("Enter the limit\n");
scanf("%d",&n);
flag++;
printf("Enter the numbers\n");
for(i=0;i<n;i++)
{
flag++;
scanf("%d",&a[i]);
flag++;
}
printf("Enter the number that you want to check\n");
scanf("%d",&x);
flag++;
for(i=0;i<n;i++)
{
flag++;
if(a[i]==x)
{
flag++;
count++;
break;
}
}
if(count==1)
{
flag++;
printf("The number is present in the array\n");
}
else
{
printf("The number is not present in the array\n");
}
flag=flag+2;
printf("Time complexity=%d\n",flag);
printf("Space complexity=%d\n",4*5+4*n);
}

