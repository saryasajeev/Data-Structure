#include<stdio.h>
void main()
{
int i,j,limit,min_index,count=0,temp;
count++;
printf("Enter the limit\n");
scanf("%d",&limit);
count++;
int a[limit];
printf("Enter the numbers\n");
for(i=0;i<limit;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
for(i=0;i<limit;i++)
{
count++;
min_index=i;
count++;
for(j=i+1;j<limit;j++)
{
count++;
if(a[min_index]>a[j])
{
count++;
min_index=j;
count+=2;
}
count++;
}
temp=a[i];
count++;
a[i]=a[min_index];
count++;
a[min_index]=temp;
count+=2;
}
printf("The sorted array:\n");
for(i=0;i<limit;i++)
{
count++;
printf("%d\t",a[i]);
count++;
}
count+=2;
printf("\nTime complexity=%d\n",count);
printf("Space complexity=%d\n",20+4*limit);
}
