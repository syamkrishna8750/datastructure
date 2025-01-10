#include<stdio.h>
int q[5],i,item,front=-1,rear=-1;
void enqueue(int item){
if ((rear+1)%5 == front ) {
        printf("\nQueue is full");
    } else {
        if (rear == -1 && front == -1) { 
            front = (front+1)%5;
            rear=(rear+1)%5;
        }
        else{
            rear=(rear+1)%5;
        }
        q[rear] = item;
    }
}
void dequeue() {
    if (front == -1 && rear == -1) { 
        printf("\n Queue is empty");
    } else {
        printf("\n Deleted item is %d", q[front]); 
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front=(front+1)%5; 
        }
    }
}
void display(){
    if(front<=rear){
    for(i=front;i<=rear;i++)
        printf("%d\t",q[i]);
    }
    else{
        for(i=front;i<5;i++)
        printf("%d\t",q[i]);
        for(i=0;i<=rear;i++)
        printf("%d",q[i]);
    }
}
void main(){
    int choice;
    do{
        printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter item to be inserted:");
            scanf("%d",&item);
            enqueue(item);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Exit");
            break;
            default:printf("Wrong choice");
        }
    }
        while(choice != 4);
}