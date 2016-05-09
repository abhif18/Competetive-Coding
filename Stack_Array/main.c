#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int count=0;
struct Stack{
int capacity,top;
int *array;
};
struct Stack * createStack(int n)
{
    struct Stack *stack=(struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity=n;
    stack->top=-1;
    stack->array=(int *)malloc(sizeof(int)*n);
    return stack;
}
int isFull(struct Stack *stack)
{
    return stack->top==stack->capacity-1;
}
int isEmpty(struct Stack *stack)
{
    return stack->top==-1;
}
void push(struct Stack *stack,int item)
{
    if(isFull(stack))
        return;
    stack->array[++stack->top]=item;
    count++;
}
int pop(struct Stack *stack)
{
    if(isEmpty(stack))
        return INT_MIN;
        count--;
    return stack->array[stack->top--];
}
void display(struct Stack *stack)
{
    int i,j;
    if(stack->top==-1)
    {
        printf("Stack is Empty\n");
        return;
    }
     i=count;
    for(j=0;j<=i;j++)
        printf("%d \n",stack->array[j]);
}
void displayMenu()
{
    printf("1.Create\n");
    printf("2.PUSH\n");
    printf("3.POP\n");
        printf("4.Display Stack\n ");
    printf("5.EXIT\n");

}
int main()
{
    struct Stack *stack;
    int n,choice,item;
    printf("Hello world!\n");
    while(1)
    {
        displayMenu();
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter Capacity\n");
            scanf("%d",&n);
            stack=createStack(n);
            break;
        case 2:
            scanf("%d",&item,printf("Enter Item\n"));
            push(stack,item);
            break;
        case 3:
            printf("POPed Item is %d \n",pop(stack));
            break;
        case 4:
            display(stack);
            break;
        case 5:
            return 0;

        }
    }
    return 0;
}
