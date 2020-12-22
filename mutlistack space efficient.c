//Implementation of two stacks in a single array

#include<stdio.h>

typedef struct DoubleStack{
    int top1;
    int top2;
    int size;
    int *data;
}DoubleStack;

DoubleStack D;

void push1(int ele)
{
    if(D.top1<D.top2-1)
      {
          D.top1++;
          printf("top1=%d,top2=%d",D.top1,D.top2);
          D.data[D.top1]=ele;
      }
    else 
       {
           printf("\nStack Overflow!");
           return;
       }   
}

void push2(int ele)
{
    if(D.top1<D.top2-1)
      {
          D.top2--;
          printf("top1=%d,top2=%d",D.top1,D.top2);
          D.data[D.top2]=ele;
      }
    else
    {
         printf("\nStack Overflow!");
         return;
    }  
}

int pop1()
{
   if(D.top1==-1)
      {
          printf("\nStack Underflow!");
          exit(-1);
      }
    int ele=D.data[D.top1];
    D.top1--;
    printf("top1=%d,top2=%d",D.top1,D.top2);
    return ele;
}

int pop2()
{
    if(D.top2==D.size)
      {
          printf("\nStack Underflow!");
          exit(-1);
      }
    int ele=D.data[D.top2];
    D.top2++;
    printf("top1=%d,top2=%d",D.top1,D.top2);
    return ele;
}

int main()
{
    int ch,ele;
    printf("\nImplementation of two stacks in a single array");
    printf("\n\nEnter total no of elements in the stack(both stacks inclusive) : ");
    scanf("%d",&D.size);
    D.data=(int*)malloc(sizeof(int)*D.size);
    D.top1=-1;
    D.top2=D.size;
    while(1)
    {
    printf("\nChoose operation: ");
    printf("\n1.Push into stack 1");
    printf("\n2.Push into stack 2");
    printf("\n3.Pop from stack 1");
    printf("\n4.Pop from stack 2");
    printf("\n5.Exit");
    printf("\nEnter operation no : ");
    scanf("%d",&ch);
    switch(ch)
     {
        case 1: 
            printf("\nEnter element to push into stack 1 : ");
            scanf("%d",&ele);
            push1(ele);
            break;
        
        case 2:
            printf("\nEnter element to push into stack 2 : ");
            scanf("%d",&ele);
            push2(ele);
            break;
        
        case 3:
            printf("\nElement popped from stack 1 : %d ",pop1());
            break;
        
        case 4:
            printf("\nElement popped from stack 2 : %d ",pop2());
            break;
        
        case 5:
            printf("\nYou chose to exit!");
            exit(0);
        
        default: 
            printf("\nInvalid choice!");
     }
    }
   return 0; 
}