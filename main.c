#include "interview_questions.h"
#include "interview_questions.c"

int main(void)
{
	printf("PA8, bitches!\n\n");
	char my_str[20];
	int my_arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	char *str_arr[8] = { "bravo", "zip", "yeti", "charles", "alpha", "Ducks", "frack", "alpha" };
	signed int test_arr[5] = { -1, 2, -3, 4, -5 };
	//Variables for number 6
	int max = 0;
	char max_char = '\0';
	Occurrences occ[NUM_CHARS];

	//Test code for my string copy
	printf("MY STRING COPY\n");
	my_str_n_cpy(my_str, "Tim is fat");
	printf("my_str is now %s\n", my_str);

	//Test code for binary search
	printf("\nBINARY SEARCH\n");
	printf("The index of 7 is %d\n", binary_search(my_arr, 7, 10));

	//Test code for bubble sort
	printf("\nBUBBLE SORT\n");
	bubble_sort(str_arr, 8);
	for (int i=0; i<8; i++)
	{
	printf("%s ", str_arr[i]);
	}
	printf("\n");

	//Test code for palindrome problem
	printf("\nRECURSIVE PALINDROME\n");
	int test_length = strlen("a b c d eedc ba");
	printf("Is 'a b c d eedc ba' a palindrome? %d\n", is_palindrome("a b c d eedc ba", test_length));

	//Test code for sum of primes
	printf("\nSUM OF PRIMES\n");
	printf("The sum of the primes up to 41 is %d\n", sum_primes(41));

	//Test code for maximum character occurrences
	printf("\nMAXIMUM OCCURRENCES\n");
	init_occ_array(occ, NUM_CHARS);
	maximum_occurrences("Morbidly obese penguins would be too funny", occ, &max, &max_char);


	//Test code for smallest sum sequence
	printf("\nSMALLEST SUM SEQUENCE\n");
	printf("The smallest sum is %d\n", smallest_sum_sequence(test_arr, 5));


	return 0;
}
