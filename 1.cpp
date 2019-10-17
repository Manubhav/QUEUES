#include <stdio.h>
#include <stdlib.h>

void enqueue(int x);
int dequeue();
void display();
int main() 
{
	int ch,c=0,x,k;
	while(1)
	{
		printf("1.Queue In\n2.Queue Out\n3.Display\n4.Exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter the number to be inserted:");
			scanf("%d",&x);
			enqueue(x);
			break;
			case 2: k=dequeue();
			if(k!=-909)
			printf("The value removed is:%d\n\n",k);
			break;
			case 3:display();
			break;
			case 4:printf("Thanks for using the program......Program terminated...");
			c=1;
			break;
			default:printf("Invalid Choice..");
		}
		if(c==1)
		
		break;
	}


	
	return 0;
}
int i,a[200],front=-1,cap=200,rear=-1;
void enqueue(int x)
{
	if(rear<cap)
	{
		a[++rear]=x;
		printf("Element entered successfully\n\n");
		if(front==-1)
		front++;
	}
	else
	printf("Queue is Full\n\n");
}
int dequeue()
{
	if(front>rear)
	{printf("Queue is empty\n\n");
	return(-909);front=-1;rear=-1;}
	else
	return(a[front++]);
	
}
void display()
{
	if(front>rear)
	printf("Queue is empty");
	else
	{
		printf("\n\nThe Elements of the queue are as follows....\n");
		for(i=front;i<=rear;i++)
		printf("%d\n",a[i]);
	}
	printf("\n\n");
}


