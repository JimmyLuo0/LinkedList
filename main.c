#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main(){
  struct node *grades = malloc(sizeof(struct node));
  grades = NULL;

  print_list(grades);
  char array[] = "FAILURe";
  int i;
  for(i = 0; i < 7; i++){
    grades = insert_front(grades, array[i]);
  }

  print_list(grades);

  grades = free_list(grades);
  print_list(grades);
  int bugs = 0;
  return 0;

}
