#include<stdio.h>
int a[50],top=-1,item=0,Max_size;
void push();
void pop();
void peek();
void display();
void main()
{
printf("Enter the maximum size of the stack");
scanf("%d",&Max_size);
int choice;
while(choice!=5)
{
printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
printf("Enter the choice\n");
scanf("%d",&choice);
if(choice==1)
{
push();
}
else if(choice==2)
{
pop();
}
else if(choice==3)
{
peek();
}
else if(choice==4)
{
display();
}
}
}
void push()
{
printf("Enter the number to be pushed\n");
scanf("%d",&item);
if(top<Max_size-1)
{
top++;
a[top]=item;
}
else
{
printf("OVERFLOW\n");
}
}
void pop()
{
if(top==-1)
{
printf("UNDERFLOW\n");
}
else
{
item=a[top];
printf("Poped item is %d\n",item);
top--;
}
}
void peek()
{
if(top==-1)
{
printf("UNDERFLOW\n");
}
else
{
printf("%d",a[top]);
}
}
void display()
{
if(top==-1)
{
printf("UNDERFLOW\n");
}
else
{
for(int i=top;i>=0;i--)
{
printf("%d\t",a[i]);
}
}
}

