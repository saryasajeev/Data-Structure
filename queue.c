#include<stdio.h>
int a[50],rear=-1,front=0,item=0,Max_size;
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
printf("\n1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
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
printf("Enter the number to be enqueued\n");
scanf("%d",&item);
if(rear<Max_size-1)
{
rear++;
a[rear]=item;
}
else
{
printf("OVERFLOW\n");
}
}
void dequeue()
{
a[front]=item;
printf("The dequeued item is %d\n",item);
if(rear==front)
{
front=0;
rear=-1;
}
else if(front>rear)
{
printf("UNDERFLOW\n");
}
else
{
item=a[front];
printf("Dequeued item is %d\n",item);
front++;
}
}
void peek()
{
if(front>rear)
{
printf("UNDERFLOW\n");
}
else
{
printf("%d",a[front]);
}
}
void display()
{
if(rear==-1)
{
printf("UNDERFLOW\n");
}
else
{
for(int i=front;i<=rear;i++)
{
printf("%d",a[i]);
}
}
}
