#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void print_list(struct node *list){
  printf("[ ");
  while(list != NULL){
    printf("%c ", list->data );
    list = list->next;
  }
  printf("]\n");
}

struct node * insert_front(struct node *list, char data){
  struct node *newNode = malloc(sizeof(struct node));
  newNode->data = data;
  newNode->next = list;
  return newNode;
}

struct node * free_list(struct node *list){
  while(list != NULL){
    struct node *freed = list;
    list = list->next;
    free(freed);
  }
  return list;
}
