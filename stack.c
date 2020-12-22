#include<stdio.h>

int top=-1;

void push(int s[],int sz,int ele)
{
    if(isFull(s,sz))
     {
         printf("\nStack overflow!");
         return;
     }    
    s[++top]=ele;
}

int pop(int s[],int sz)
{
   if(isEmpty(s,sz))
    {
        printf("\nStack underflow");
        exit(-1);
    }
   return s[top--];
}

int isFull(int s[],int sz)
{
   if(top==sz-1)
      return 1;
   return 0;
}

int isEmpty(int s[],int sz)
{
    if(top==-1)
      return 1;
    return 0;
}

int peek(int s[],int sz)
{
    if(isEmpty(s,sz))
      {
          printf("\nStack underflow!");
          exit(-1);
      }
    return s[top];
}

void display(int s[],int sz)
{
    int i;
    if(isEmpty(s,sz))
      {
          printf("\nStack Underflow!");
          return;
      }
    printf("\nElements in the stack : ");
    for(i=0;i<=top;i++)
       printf("%d\t",s[i]);
}

int main()
{
    int size,n,opt;
    printf("\nEnter size of stack: ");
    scanf("%d",&size);
    int stack[size];
    while(1)
    {
        printf("\n\t****MENU****");
        printf("\n1.Insert element");
        printf("\n2.Delete element");
        printf("\n3.Display element at top");
        printf("\n4.Display all elements");
        printf("\n5.Exit");
        printf("\n\nEnter option no. : ");
        scanf("%d",&opt);
        switch(opt)
         {
             case 1:
                printf("\nEnter element to push into the stack : ");
                scanf("%d",&n);
                push(stack,size,n);
                break;
            
            case 2:
                printf("\nElement deleted from stack : %d",pop(stack,size));
                break;
            
            case 3:
                printf("\nElement at top :%d ",peek(stack,size));
                break;

            case 4:
                display(stack,size);
                break;
            
            case 5:
                exit(0);
            
            default:
                printf("\nInvalid choice!");          
         }
    }
   return 0;
}
