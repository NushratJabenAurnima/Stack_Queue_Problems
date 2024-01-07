#include <stdio.h>
#define MAX 20
int q[MAX], s[MAX], f =-1, r =-1, top = -1;
int enq(int);
int deq();
int push(int);
int pop();
void print();

int main()
{
    int val,k,i;
    printf("Input: ");
    for(i=0; i<10 ; i++)
    {
        scanf("%d",&val);
        enq(val);
    }
    printf("Enter key: ");
    scanf("%d",&k);
    for(i=0 ; i<k ; i++)
       push(deq());

    for(i=0 ; i<k ; i++)
       enq(pop());

    printf("Output: ");
    for(i=f; i<=r; i++)
    {
        printf("%d ",q[i]);
    }
    return 0;
}

int enq(int data)
{
    if(r+1 == MAX)
        printf("Queue is full.");
    else if(f == -1 && r == -1)
        {
        f = r = 0;
        q[r] = data;
        return q[r];
        }
        else
        {
            r++;
            q[r] = data;
            return q[r];
        }
}
int push(int data)
{
    if(top+1 == MAX)
        printf("Stack overflow.");
    else
    {
        top++;
        s[top] = data;
        return s[top];
    }
}

int deq()
{
    int data;
    if(f == -1 && r == -1)
        printf("Queue is empty.");
    else if(f == r)
    {
        data = q[f];
        f = r = -1;
        return data;
    }
    else
    {
        data = q[f];
        f++;
        return data;
    }
}

int pop()
{
    int data;
    if(top == -1)
        printf("Stack underflow.");
    else
    {
        data = s[top];
        top--;
        return data;
    }
}
<!DOCTYPE html>
<html>
<body>
<h2>Project Done by &copy; Nushrat Jaben Aurnima. All Rights Reserved .</h2>
</body>
</html>
