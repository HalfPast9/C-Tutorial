#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct node{
   int data;
   struct node *next;
} node_t;

node_t *build_123(){
   node_t *head;
   head = malloc(sizeof(node_t));
   assert(head != NULL);
   head->data = 1;

   head->next = malloc(sizeof(node_t));
   assert((head->next) != NULL );
   head->next->data = 2;

   head->next->next = malloc(sizeof(node_t));
   assert((head->next->next)!= NULL);
   head->next->next->next = NULL;
   head->next->next->data = 3;

   return head;
}

node_t *push(node_t *head){
   node_t *temp;
   temp = malloc(sizeof(node_t));
   assert(temp != NULL);
   temp->data = 1;
   temp->next = head;
   return temp;
}

int length(node_t *head){
  if(head == NULL){
    return 0;
  }
  return 1 + length(head->next);
}

node_t *insert(node_t *head, int location){
   node_t *new = malloc(sizeof(node_t));
   node_t *temp = head;
   new->data = 3;

   for(int i = 1; i != location-1; i++){
      temp = temp->next
   }
   new->next = temp->next;
   temp->next = new;
   temp = temp->next

   return head;
}

int main(){
   node_t *head = build_123();
   head = push(head);
   head = push(head);
   head = push(head);
   head = push(head);

   int len;
   len = length(head);
   head = insert(head, 3);
   return 0;
}