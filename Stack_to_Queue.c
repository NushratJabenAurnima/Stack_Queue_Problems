#include<stdio.h>
#define MAX 5

int q[MAX],s[MAX];
int f=-1, r=-1, top=-1;;

int isFull();
int isEmpty();
void push(int);
int pop();
int enqueue(int);

int main()
{
    int val;
    printf("Input Data in stack(5): ");
    for(int i=0 ; i<MAX; i++)
    {
        scanf("%d",&val);
        push(val);
    }
    printf("Output showing in queue)(5): ");
    for(int i=0 ; i<MAX; i++)
    {
        printf("%d ",enqueue(pop()));
    }
    return 0;
}
int isFull()
{
    if(top + 1 == MAX)
        return 1;
    else
        return 0;

}

int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}


void push(int val)
{
    if(isFull())
        printf("Stack Overflow.");
    else
    {

        s[++top] = val;
    }
}

int pop()
{
    int data;
    if(isEmpty())
        printf("Stack Overflow.");

    else
    {
        data = s[top--];
        return data;
    }
}

int enqueue(int val)
{

    if(f == -1 && r == -1)
    {
        f=r=0;
        q[r] = val;
        return q[r];
    }

    else
    {
        r=(r+1)%MAX;
        q[r]=val;
        return q[r];
    }
}
