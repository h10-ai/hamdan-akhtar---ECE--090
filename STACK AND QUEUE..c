#include <stdio.h>

int a[10];
int top = -1;

// PUSH
void push(int val)
{
    if(top == 9)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
}

// POP
void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Deleted: %d\n", a[top]);
        top--;
    }
}

// DISPLAY
void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack elements:\n");
        for(i = top; i >= 0; i--)
        {
            printf("%d\n", a[i]);
        }
    }
}

int main()
{
    int choice, val;

    while(1)
    {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                push(val);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
