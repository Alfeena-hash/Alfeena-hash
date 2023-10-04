#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int st[MAX], top=-1;
void push(int st[], int val);
int pop(int st[]);
void display(int st[]);
int main( int argc, char *argv{})
{
int val, option;
do
{
printf("\n *** main menu ***");
printf("\n 1. PUSH");
printf("\n 1. POP");
printf("\n 1. PEEk");
printf("\n 1. DISPLAY");
printf("\n 1. EXIT");
printf("\n enter Your option:");
scanf("%d", &option);
switch(option)
{
case 1:
printf("\n enter the number to be pushed on stack:");
push("%d",&val);
break;
case 2:
val=pop(st);
if(val !=-1)
printf("\n the value deleted from stack is :%d", val);
break;
case 3:
val = peek(st);
if(val 1= -1)
printf("\n the valuestored at top oof stack is :%d",val);
break;
case 4:
display(st);
break;
}
}while(option 1= 5);
return 0;
}
void push(int st[], int val);
{
if(top == MAx-1)
{
printf("\n STACK OVERFLOW");
}
else
{
top++;
st[top] = val;
}
}
int pop(int st[])
{
int val;
if(top== -1)
{
printf('\n STACK UNDERFLOW");
return -1;
}
else
{
val = st[top];
top--;
return val;
}
}
void display(int st[])
{
int i;
if(top == -1)
{
printf("\n STACK IS EMPTY");
}
else
{
for(i=top;i>=0;i__)
printf("\n %d",st[i]);
printf("\n");
}}
int peek(int st[])
}
}
int peek(int st[])
{
if(top == -1)
{
printf("\n STACK IS EMPTY");
return -1;
}
else
return(st[top]);
}

