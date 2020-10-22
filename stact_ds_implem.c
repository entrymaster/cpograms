#include<stdio.h>
#define MAX 101
int a[MAX];
int top = -1;
void push(int x){
	a[++top] = x;
}
void pop(){
	top--;
}
int Top(){
	return a[top];
}
void print(){
	int i;
	for(i=0;i<=top;i++)
	printf("%d ",a[i]);
	printf("\n");
}
int main(){
	push(2);print();
	push(5);print();
	push(100);print();
	pop();print();
	push(12);print();
}
