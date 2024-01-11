#include<stdio.h>
void main()
{
int l,p,lc,rc;
printf("Enter the limit\n");
scanf("%d",&l);
int a[l];
printf("Enter the elements of tree\n");
for(int i=1;i<=l;i++){
scanf("%d",&a[i]);
}
printf("Enter the position of node\n");
scanf("%d",&p);
if(p<1){
printf("Invalid Position");
}
else if(p==1){
printf("No Parent\n");
}
else{
printf("Parent Node is %d\n",a[p/2]);
}
lc=2*p;
if(lc>l)
{
printf("No Left Child\n");
}
else{
printf("The Left Child of Position %d is %d\n",p,a[lc]);
}
rc=2*p+1;
if(rc>l){
printf("No Right Child\n");
}
else{
printf("The Right Child Of Position %d is %d\n",p,a[rc]);
}
}
