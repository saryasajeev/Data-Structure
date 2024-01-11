#include<stdio.h>
int a[50],rear=-1,front=-1,item=0,Max_size;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
printf("Enter the maximum size of the Queue");
scanf("%d",&Max_size);
int choice;
while(choice!=5)
{
printf("1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
printf("Enter the choice\n");
scanf("%d",&choice);
if(choice==1)
{
enqueue();
}
else if(choice==2)
{
dequeue();
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
void enqueue()
{
if(rear==-1&&front==-1)
{
front=0;
rear=0;
printf("Enter the number to be enqueued");
scanf("%d",&item);
a[rear]=item;
}
else if(front==(rear+1)%Max_size-1)
{
printf("OVERFLOW\n");
}
else
{
rear=((rear+1)%Max_size);
printf("Enter the number to be enqueued");
scanf("%d",&item);
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{
printf("UNDERFLOW\n");
}
else if(front==rear)
{
item=a[front];
front=-1;
rear=-1;
printf("The dequeued item is %d\n",item);
}
else
{
item=a[front];
printf("The dequeued item is %d\n",item);
}
}
void peek()
{
if(front==-1&&rear==-1)
{
printf("UNDERFLOW\n");
}
else
{
printf("The peek element is %d\n",a[front]);
}
}
void display()
{
int i;
if(front==-1&&rear==-1)
{
printf("UNDERFLOW\n");
}
else
{
for(i=front;i!=rear;(i=(i+1)%Max_size))
{
printf("%d\t",a[i]);
}
printf("%d\t",a[i]);
printf("\n");
}
}
