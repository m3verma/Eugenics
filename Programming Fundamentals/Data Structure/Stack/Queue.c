  #include<stdio.h>
#include<string.h>
struct queue {
  int contents[5];
  int front;
  int count;
} ;

void initQueue(struct queue * q);
void enQueue(struct queue * q, int element);
int deQueue(struct queue * q);
void display( struct queue q);
void printMenu();

int main()
{
	struct queue p;
	int data,ch, data1;
	initQueue(&p);
	do {
	printMenu();	
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch) {
	  case 1:
		printf("Enter the element to be inserted/entered\n");
		scanf("%d",&data);
		enQueue(&p, data);
		break;
	  case 2:
		data1 = deQueue(&p);
		if(data1 != -1000)
		printf("The deleted element is %d\n",data1);
		break;
	  case 3:
		printf("The contents of the queue are");
		display(p);
		printf("\n");
		break;
	  default:
		return 0;
	}
	} while(1);
	return 0;
}


void printMenu()
{
	printf("Choice 1 : Enter element into Queue\n");
	printf("Choice 2 : Delete element from Queue\n");
	printf("Choice 3 : Display\n");
	printf("Any other choice : Exit\n");
}

void initQueue(struct queue * q) 
{
  q->front=0;
  q->count=0;
}

void enQueue(struct queue * q, int element)
{
  int index;
  index=(q->count+q->front)%5;
  if(index==q->front&&q->count!=0)
    printf("Queue is full\n");
  else
  {
      q->count++;
    q->contents[index]=element;
  }
}

int deQueue(struct queue * q)
{
  int elem;
  if(q->count==0)
  {
   printf("Queue is empty\n");
    return (-1000);
  }
  elem=q->contents[q->front];
  q->count--;
  q->front=(q->front+1)%5;
  return elem;
}

void display( struct queue q)
{
  int i,index;
  if(q.count==0)
    printf(" {}");
  else
  {
      for(index=q.front,i=1;i<=q.count;i++,index++)
        printf(" %d",q.contents[index%5]);
  }

}


