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
  signed int test_arr[5] = {-1, -2, -3, 4, 6};
  //Variables for number 6
  int max = 0;
  char max_char = '\0';
  Occurrences occ[NUM_CHARS];

  printf("The index of 11 is %d\n", binary_search(my_arr, 8, 10));

  bubble_sort(str_arr, 8);

  /*for (int i=0; i<8; i++)
  {
    printf("%s\n", str_arr[i]);
  }
*/

  int test_length = strlen("a b c d eedc ba");
  //printf("test string length: %d\n", test_length);
  printf("Is 'a b c d eedc ba' a palindrome? %d\n", is_palindrome("a b c d eedc ba", test_length));
  printf("The sum of the primes up to 20 is %d\n", sum_primes(41));
  maximum_occurrences("test string", occ, &max, &max_char);
  printf("The smallest sum is %d\n", smallest_sum_sequence(test_arr, 5));

  return 0;
}
