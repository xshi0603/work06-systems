#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next; };

void print_list(struct node *);
struct node * insert_front(struct node *, int);
struct node * free_list(struct node *);

void print_list(struct node * x) {
  struct node * nextNode = x.next;
  while (nextNode.next != NULL) {
    printf("%d\n", nextNode.i);
    x = x.next;
  }
}


int main () {

}


