#include <stdio.h>
#include <stdlib.h>
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
  char *ch = str;

  if(word_start(str)==0){
    return 0;
  }
  if(*word_end(word_start(str)) == 0){
    return 1;
  }
  return count_words(word_end(word_start(str)))+1;}
/* Milestone 2*/
char *copy_str (char *src, short len){
  char *new_src =(char *)malloc(len +1);

  int i;
  for(i=0; i<len; i++){
    *(new_src + i) =*(src+i);
  }
  return new_src;

  }
void print_tokens(char **str){
  int i = 0;
  
  while(str[i] != 0){
    printf("%s\n", str[i]);
    i++;
  }
}

char **tokenize(char* str){
  int i;
  int word_count = count_words(str);
  char **tokens = (char **)malloc(sizeof(char *)*(word_count+1));

  char *start = str;
  char *end =str;

  for (i=0; i<word_count; i++){
    start = word_start(end);
    end = word_end(start);
    tokens[i] = copy_str(start, end - start);
    }
    tokens[i] = '\0';
    return tokens;
  }
  void free_tokens(char **str){
    int i =0;
    while (str[i] != 0){
      free(str[i]);
}
    free(str);
}
 
