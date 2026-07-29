#include<stdio.h>
#include<conio.h>
#define MAX 7

int stack[MAX], top = -1;
int isfull() {
	if (top == MAX - 1)
		return 1;
	else
		return 0;

}

int isempty() {
	if (top == -1)
		return 1;
	else
		return 0;
}

void push(int val){
	if (!isfull()) {
		top ++;
		stack[top] = val;
	}
	else
		printf("\nStack Full (Stack Overflow)! Can't Push Element!");
}
int pop () {
	int val;
	if (!isempty()) {
		val = stack[top];
		top --;
		return val;
	}
	else {
		printf("\nStack Empty! No Element To Pop");
		return -1;
	}
}
int peek () {
	if (!isempty())
		return stack[top];
	else
		return -1;
}
void display() {
	int i;
	printf("\n");
	for (i = top; i>= 0; i--){
		printf("%d\t", stack[i]);
	}
}
void main(){
	int  full, empty, p, pk;
	clrscr();
	pop();
	push(6);
	push(7);
	display();
	p=pop ();
	display();
	pk = peek ();
	printf("\n%d",pk);
	display();
	getch();
}
