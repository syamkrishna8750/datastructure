#include<stdio.h>
int q[5],item,size,front=-1,rear=-1;
void enqueue(int item)
{
	if(rear==size){
	printf("\n Queue is full");
	}
	else{
		if(rear==-1){
			front=0;
			rear=0;
			q[rear]=item;
		}
		else{
			rear++;
	       q[rear]=item;
	   }
	}
}

void dequeue()
{
	if(front ==-1 && rear==-1)
	{
		printf("\n Queue is empty");
	}
    else
    {
        if(front==rear)
        {
        	printf("\n Deleted item is %d",q[front]);
        	front=-1;
        	rear=-1;
        }
        else
        {
         item=q[front];
         printf("\n Deleted item is %d",q[front]);
         front=front+1;
        }
    }
}
void display()
 {
	for(int i=front;i<=rear;i++)
	{
		printf("%d\t",q[i]);
	}
}
void main()
{
	int choice;
    printf("enter the size:");
    scanf("%d",&size);
    do
    {
    printf("\n 1.enqueue \n 2.dequeue \n 3.display\n 4.exit\n");
    printf("\n enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("enter item to insert");
    scanf("%d",&item);
    enqueue(item);
    break;
    case  2:
    dequeue(item);
    break;
    case 3:
	display();
	break;
    case 4:
	printf("exit");
	break;
	defualt:printf("wrong choice");
    }
    }
    while(choice!=4);
}