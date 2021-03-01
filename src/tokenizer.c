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
    c++;  
  }
  
  return c;
}

char *word_end(char *str){
  char *c= str;

  while(non_space_char(*c) && *c != '\0'){
    c++;
}
  return c;
}


int count_words(char *str){
  int count = 0;

  if(non_space_char(*str)){
    count++;
  }
  while(*str != '\0'){
    str = word_start(str);
    count++;
  }
  count--;
  return count;
}
/* Milestone 2*/
char *copy_str (char *src, short len){
  char *new_src =(char *)malloc(len +1);

  int i;
  for(i=0; i<len; i++){
    *(new_src + i) =*(src+i);
  }
  return new_src;

  }
void print_tokens(char** str){
  int i = 0;
  
  while(str[i] != '\0'){
    printf("%s\n", str[i]);
    i++;
  }
  void free_tokens(char **str){
    int i =0;
    while (str[i] != '\0'){
      free(str[i]);
}
    free(str);
}
 
