#include "interview_questions.h"
#include "interview_questions.c"

//John or Chris, if you copy this, I will punch your right in the fucking face.
//Seriously. Do not test me.

int main(void)
{
  printf("PA8, bitches!\n");
  char my_str[20];
  int my_arr[10] = {0,1,2,3,4,5,6,7,8,9};
  char *str_arr[5] = {"bravo", "charl", "alpha", "Ducks", "frack"};

  /*
  my_str_n_cpy(my_str, "Tim is fat");
  printf("My string is: %s\n", my_str);
  printf("The index of 2 is %d\n", binary_search(my_arr, 2));
  */
  bubble_sort(str_arr, 5);
  for (int i=0; i<5; i++)
  {
    printf("%s\n", str_arr[i]);
  }

  return 0;
}
