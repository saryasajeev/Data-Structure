#include<stdio.h>
void main()
{
int x,i,n,a[50],count=0,flag=0,j,temp;
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
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
flag++;
flag++;
flag++;
}
count++;
}
count++;
}
printf("The sorted array\n");
for(i=0;i<n;i++)
{
flag++;
printf("%d\t",a[i]);
}
printf("\nTime complexity=%d\n",flag);
printf("Space complexity=%d\n",4*10+4*n);
}

