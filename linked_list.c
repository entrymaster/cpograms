#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head = NULL;
void Insert(int x,int n){
	struct Node* temp1 = malloc(sizeof(struct Node));
	temp1->data = x;
	temp1->next = NULL;
	if(n == 1){
		temp1->next = head;
		head = temp1;
		return;
	}
	struct Node* temp2 = head;
	int i;
	for(i=0;i<n-2;i++){
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}
void Print(){
	struct Node* temp = head;
	printf("List is :");
	while (temp != NULL){
		printf(" %d",temp->data);
		temp = temp->next;
	}
}
int main(){
	Insert(2,1);//List : 2
	Insert(3,2);//List :2 3
	Insert(1,3);//Lst: 2 3 1
	Insert(5,2);//List:2 5 3 1
	Insert(8,1);//List:8 2 5 3 1
	Print();
}
