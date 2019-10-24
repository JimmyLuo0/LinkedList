struct node{
  char data;
  struct node *next;
};
void print_list(struct node *list);
struct node * insert_front(struct node *list, char data);
struct node * free_list(struct node *list);
struct node * removed(struct node *front, char data);
