#include <stdio.h>
#include "tokenizer.h"

int space_char(char c){
  if(c =='\n'|| c == '\t' || c== ' '){
    return 1;
  }
  return 0;
}

int non_space_char(char c){
  return !(space_char(c));
}

char *word_start(char *str){
  char *c = str;

  while(space_char(*c) && *c != '\0'){

    c++
    
  }

  if (*c == '\0'){
    return 0;}
  return c;

}

char *word_end(char *str){
  char *c= str;

  while(non_space_char(*c) && *c != '\0'){
    c++;
}
  if(*c=='\0'){
    return 0;
  }
  return c;
}


int count_words(){
  char *c =str;
  
}


