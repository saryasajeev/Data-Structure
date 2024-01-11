#include<stdio.h>
void main()
{
int row,col,i=0,j=0,k=1,count=0;
printf("Enter the no of rows and columns");
scanf("%d%d",&row,&col);
int a[row][col];
printf("Enter the array elements");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Sparse matrix is\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
struct sparse
{
int row;
int col;
int val;
}s[50];
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(a[i][j]!=0)
{
s[k].row=i;
s[k].col=j;
s[k].val=a[i][j];
k++;
count++;
}
}
}
s[0].row=i;
s[0].col=j;
s[0].val=count;
printf("The tuple matrix is\n");
printf("Row\tColumn\tValue\n");
for(int i=0;i<k;i++)
{
printf("%d\t%d\t%d\n",s[i].row,s[i].col,s[i].val);
}
}
