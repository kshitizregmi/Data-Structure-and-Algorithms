#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void enQueue(int);
void deQueue();
void display();

int queue[SIZE], front = 0, rear = -1;

void main()
{
   int value, choice;
    while(1){
      printf("\n\t\t\t***** MENU *****\n\n");
      printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("\n\tEnter the value to be insert:\t ");
		 scanf("%d",&value);
		 enQueue(value);
		 break;
	 case 2: deQueue();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\n\nWrong selection!!! Try again!!!");
      }
   }
}
void enQueue(int value){
   if(rear == SIZE-1){
   
      printf("\n\tQueue is Full!!! Insertion is not possible!!!");
  }
    else{
    		// front = 0;
      rear++;
      queue[rear] = value;
      printf("\n\nInsertion success!!!");
	}

}
void deQueue(){
	int i;
   if( rear<front){
   
      printf("\nQueue is Empty!!! Deletion is not possible!!!");
  }
   else{
      printf("\nDeleted : %d", queue[front]);
      front++;
    // for(i=0;i<rear;i++){
    // 	queue[i]=queue[i+1];
	 }
	// rear--;
   }
//}
void display(){
   if(rear <front){
   
      printf("\nQueue is Empty!!!");
  }
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++)
	 printf("%d\t",queue[i]);
   }
}
