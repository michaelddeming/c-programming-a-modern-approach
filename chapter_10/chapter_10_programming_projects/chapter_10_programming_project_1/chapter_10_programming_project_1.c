
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void) {
    printf("Error: StackOverflow the stack is full\n");
    exit(1);
}

void stack_underflow(void) {
    printf("Error: StackUnderflow the stack is empty\n");
    exit(1);
}

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(char i) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}



int main(void) {

    printf("Enter parentheses and/or braces: ");
    char c;
    while ((c = getchar()) != '\n') {

        if (c != '{' && c != '}' && c != '(' && c != ')') {
            printf("Error: Invalid input. Only parantheses or braces allowed\n");
            exit(1);
        }
        
        if (c == '{' || c == '(') {
            push(c);
            continue;
        }
        char opening = pop();
        if ((opening == '(' && c == ')') || (opening == '{' && c == '}')){
            // printf("%c , %c\n", opening, c); for testing/debug
            continue;}
        else
            break;
    }
    if (is_empty())
        printf("Parentheses/braces are nested properly\n");
    else
        printf("Parentheses/braces are not nested properly\n");
    return 0;
}

