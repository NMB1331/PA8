#include "interview_questions.h"
#include "interview_questions.c"

//John or Chris, if you copy this, I will punch you right in the fucking face.
//Seriously. Do not test me.

int main(void)
{
  printf("PA8, bitches!\n");
  char my_str[20];
  int my_arr[10] = {0,1,2,3,4,5,6,7,8,9};
  char *str_arr[8] = {"bravo", "zip", "yeti", "charles", "alpha", "Ducks", "frack", "alpha"};

  printf("The index of 11 is %d\n", binary_search(my_arr, 11));

  bubble_sort(str_arr, 8);

  /*for (int i=0; i<8; i++)
  {
    printf("%s\n", str_arr[i]);
  }
*/

  int test_length = strlen("taco cat");
  //printf("test string length: %d\n", test_length);
  printf("Is 'taco cat' a palindrome? %d\n", is_palindrome("taco cat", test_length));
  printf("The sum of the primes up to 20 is %d\n", sum_primes(20));

  return 0;
}
