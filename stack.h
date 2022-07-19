// stack.h

#ifndef __STACK_H__
#define __STACK_H__

#define TRUE 1
#define FALSE 0

#define LEN 100

typedef int Sdata;
typedef struct __stack
{
  Sdata stack[LEN];
  int top;
} Stack;

void Init(Stack* pstack);
int isEmpty(Stack* pstack);
void Push(Stack* pstack, Sdata data);
Sdata Pop(Stack* pstack);
Sdata Peek(Stack* pstack);

#endif
