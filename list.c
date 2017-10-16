#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next; };

void print_list(struct node *);
struct node * insert_front(struct node *, int);
struct node * free_list(struct node *);

void print_list(struct node *x) {
  while (x) {
    printf("%d\n", x->i);
    x = x->next;
  }
}

struct node * insert_front(struct node * x, int a) {

  struct node *front = (struct node *)malloc(sizeof(struct node));
  front->next = x;
  front->i = a;
  return front;
  
}

struct node * free_list(struct node * x) {
  
  struct node *prev;
  while (x) {
    prev = x;
    x = x->next;
    free(prev);
    prev = NULL;
  }    

  return x;
  
}

int main () {

  struct node *tester = NULL;
  
  printf("The list is:");
  print_list(tester);
  printf("\n");
  
  int i;

  for (i = 1;i < 15; i++) {
    tester = insert_front(tester,i);
  }
  
  printf("\n");
  printf("The list now is:");
  print_list(tester);

  printf("\n");
  printf("The list after clearing is: ");
  print_list(free_list(tester));
  printf("\n");
  
}


