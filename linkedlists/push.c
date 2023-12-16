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

   temp->next = *head;
   return temp;
}

int main(){
   node_t *head = build_123();
   head = push(head);
   return 0;
}