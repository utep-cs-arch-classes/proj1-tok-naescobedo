#include "history.h"
#include <stdlib.h>
#include <stdio.h>

List* init_history(){
  List* hist;
  hist = (List*)malloc(sizeof(List));
  hist->root = NULL;
  return hist;
}

void add_history(List *list, char *str){

}

void *get_history(List *list, int id){

}


