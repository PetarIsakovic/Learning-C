#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

void display(struct Node *head){
	if(head == NULL){
		printf("LinkedList is empty\n");
	}
	else{
		struct Node *tmp = head;
		while(tmp != NULL){
			printf("%d ", tmp->data);
			tmp = tmp->next;
		}
		printf("\n");
	}
}

struct Node* delete(struct Node *head, int index){
	if(index == 0){
		head = head->next;
	}
	else{
		struct Node *tmp = head;
		for(int i = 0; i < index-1; i++){
			tmp = tmp->next;
		}
		tmp->next = tmp->next->next;
	}
	return head;
}


struct Node* insertAtBeginning(struct Node *head, int value){
        struct Node *tmp = (struct Node *)malloc(sizeof(struct Node));
        tmp->data = value;
        tmp->next = head;
        return tmp;
}

struct Node* createNode(int value){
	struct Node *tmp = (struct Node *)(malloc(sizeof(struct Node)));
	tmp->data = value;
	tmp->next = NULL;
	return tmp;
}

struct Node* insertAtSpecificIndex(struct Node *head, int value, int index){
	struct Node *tmp = head;

	if(index == 0){
		head = insertAtBeginning(head, value);
	}
	else{
		for(int i = 0; i < index-1; i++){
			tmp = tmp->next;
		}
		struct Node *holder = tmp->next;
		tmp->next = (struct Node *)malloc(sizeof(struct Node));
		tmp->next->data = value;
		tmp->next->next= holder;
	}
	return head;
}


struct Node* insertInMiddle(struct Node *head, int value){
	struct Node *newNode = createNode(value);	
	if(head == NULL){
		head = newNode;
	}
	else{
		int sizeOfLinkedList = 0;
		struct Node* tmp = head;
		while(tmp->next != NULL){
			sizeOfLinkedList++;
			tmp = tmp->next;
		}
		tmp = head;
		for(int i = 0; i < sizeOfLinkedList/2; i++){
			tmp = tmp->next;
		}
		struct Node *holder = tmp->next;
		tmp->next = newNode;
		tmp->next->next = holder;
	}
	return head;
}

struct Node* insertAtEnd(struct Node *head, int value){
	if(head == NULL){
		head = (struct Node *) malloc(sizeof(struct Node));
		head->data = value;
	}
	else{
		struct Node *tmp = head;
		while(tmp->next != NULL){
			tmp = tmp->next;
		}
		struct Node *newNode = (struct Node *)(malloc(sizeof(struct Node)));
		newNode->data = value;
		tmp->next = newNode;
	}
	return head;
}

int main(){
	struct Node *head = NULL;
	display(head);
	head = insertAtEnd(head, 10);
	head = insertAtEnd(head, 11);
	head = insertAtEnd(head, 12);
	head = insertAtEnd(head, 13);
	head = insertAtEnd(head, 14);
	head = insertAtEnd(head, 15);
	display(head);
	head = insertInMiddle(head, 300);
	display(head);
	head = insertAtBeginning(head, 900);
	display(head);
	head = insertAtSpecificIndex(head, 111, 1);
	display(head);
	head = insertAtSpecificIndex(head, 100, 0);
	display(head);
	head = insertAtSpecificIndex(head, 999, 5);
	display(head);
	head = delete(head, 1);
	display(head);
	head = delete(head, 0);
	display(head);
	head = delete(head, 8);
	display(head);
}
