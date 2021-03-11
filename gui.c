#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

void gui(){
  
  char input[100]; 
  char i;
  int x = 0;
  printf(">");
    while((i = getchar()) != '\n'){
      input[x] = i;
      x++;
      putchar(i);
  }
    char **tokens;
    input[i] = '\0';
    printf("\n%c\n", *word_start(input));
    printf("\n%c\n", *word_end(input));
    printf("\n%i\n", count_words(input));
    tokens = tokenize(input);
    print_tokens(tokens);
  }
void main(){
  gui();
}

