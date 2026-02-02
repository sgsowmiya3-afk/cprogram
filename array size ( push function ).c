#include<stdio.h>
#define size 5
int array[size];
int top=-1;

void push(int value) {
    if(top==size-1){
        printf("No space left\n");
    }
    else{
        top++;
        array[top] = value;
        printf("The value %d pushed to array\n",value);
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    
    return 0;
}