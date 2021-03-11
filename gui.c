#include <stdio.h>

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
    input[i] = '\0';
    printf("\n%c\n", *word_start(input));
    printf("\n%c\n", *word_end(input));
    printf("\n%i\n", count_words(input));

  }
void main(){
  gui();
}
