#include<stdio.h>
int lim,a[50],i,f,l,j,p,temp;
void quicksort(int a[50],int f,int l);
void main(){
printf("Enter the limit");
scanf("%d",&lim);
printf("Enter the array elements");
for(i=0;i<lim;i++){
scanf("%d",&a[i]);
}
printf("Array before Quick Sort:");
for(i=0;i<lim;i++){
printf("%d\t",a[i]);
}
quicksort(a,0,lim-1);
printf("\nArray after Quick Sort:");
for(i=0;i<lim;i++){
printf("%d\t",a[i]);
}
printf("\n");
}
void quicksort(int a[50],int f,int l){
if(f<l){
p=f;
i=f;
j=l;
}
while(i<j){
while(a[i]<=a[p]&&i<l){
i++;
while(a[j]>a[p]){
j--;
if(i<j){
temp=a[i];
a[i]=a[j];
a[j]=temp;}
}
temp=a[p];
a[p]=a[j];
a[j]=temp;
quicksort(a,f,j-1);
quicksort(a,j+1,l);
}
}
}
