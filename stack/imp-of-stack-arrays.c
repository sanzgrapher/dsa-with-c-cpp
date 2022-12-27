#include <stdio.h>
#define MAX 4
struct stack{
    int stack[MAX];
    int top;
    };
   
    void push(struct stack *pu ,int data)
    {
        if(pu->top==MAX-1){
            printf("\n The stack is full");
            exit(0);
        }

        pu->top = pu->top + 1;
        pu->stack[pu->top] = data;
    }


    int main(){
        struct stack *ps;
        push(ps,10);
        ps->stack[1];
        
    }