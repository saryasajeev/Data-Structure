#include<stdio.h>
void main(){
int a[50],lim,i,temp,j;
printf("Enter the limit");
scanf("%d",&lim);
printf("Enter the array elements\n");
for(i=0;i<lim;i++)
{
scanf("%d",&a[i]);
}
printf("Array before insertion sort:\n");
for(i=0;i<lim;i++)
{
printf("%d",a[i]);
}
i=1;
while(i<lim){
j=i;
while(a[j]<a[j-1])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
j--;
}
i=i+1;
}
printf("\nArray after insertion sort:\n");
for(i=0;i<lim;i++)
{
printf("%d",a[i]);
}
}


