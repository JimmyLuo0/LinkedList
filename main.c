#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main(){
  struct node *grades = malloc(sizeof(struct node));
  grades = NULL;

  printf("Empty list\n");
  print_list(grades);

  printf("Adding to front of list\n");
  char array[] = "FAILURe";
  int i;
  for(i = 0; i < 7; i++){
    grades = insert_front(grades, array[i]);
    print_list(grades);
  }

  printf("removing I\n");
  removed(grades,'I');
  print_list(grades);

  printf("Free\n");
  grades = free_list(grades);
  print_list(grades);

  int bugs = 0;
  return 0;

}
