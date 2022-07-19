// func_stack.c

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void Init(Stack* pstack)
{
  pstack->top = -1;
}

int isEmpty(Stack* pstack)
{
  if(pstack->top == -1)
    return TRUE; // stack is empty.
  else
    return FALSE;
}

void Push(Stack* pstack, Sdata data)
{
  if((pstack->top) == LEN-1)
  {
    printf("Stack is Full!\n");
    exit(-1); // abnormal terminated.
  }
  else
  {
    (pstack->top)++;
    pstack->stack[pstack->top] = data;
  }
}

Sdata Pop(Stack* pstack)
{
  if(pstack->top == -1)
  {
    printf("Stack is Empty!\n");
    exit(-1);
  }
  else
  {
    Sdata temp = pstack->stack[pstack->top];
    (pstack->top)--;
    return temp;
  }
}

Sdata Peek(Stack* pstack)
{
  if(pstack->top == -1)
  {
    printf("Stack is Empty!\n");
    exit(-1);
  }
  else
  {
    return pstack->stack[pstack->top];
  }
}
  
