#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

/*************************************************************
* Function: my_str_n_cpy                                    *
* Date Created: 12/1/2016                                   *
* Date Last Modified: 12/1/2016                             *
* Description: Copies one string into another               *
* Input parameters: Pointer to destination, pointer to source
* Returns: Pointer to destination                           *
* Preconditions: None                                       *
* Postconditions: None                                      *
*************************************************************/
char* my_str_n_cpy(char *dest, const char *src);

/*************************************************************
* Function: binary_search                                   *
* Date Created: 12/1/2016                                   *
* Date Last Modified: 12/1/2016                             *
* Description: Finds the index of a target value in an int array
* Input parameters: Sorted integer array, target value      *
* Returns: Index of target value (-1 if not found)          *
* Preconditions: None                                       *
* Postconditions: None                                      *
*************************************************************/
int binary_search(int sorted_array[10], int targ);

/*************************************************************
* Function: bubble_sort                                     *
* Date Created: 12/2/2016                                   *
* Date Last Modified: 12/2/2016                             *
* Description: Sorts an array of strings based on ASCII values
* Input parameters: Array of pointers to strings, size of array
* Returns: None                                             *
* Preconditions: None                                       *
* Postconditions: None                                      *
*************************************************************/
void bubble_sort(char *arr[], int size);

/*************************************************************
* Function: is_palindrome                                   *
* Date Created: 12/4/2016                                   *
* Date Last Modified: 12/4/2016                             *
* Description: Recursively determines if a strin is a palindrome
* Input parameters: String, and integer length              *
* Returns: 1 if palindrome, 0 otherwise                     *
* Preconditions: None                                       *
* Postconditions: None                                      *
*************************************************************/
int is_palindrome(char *string, int length);

/*************************************************************
* Function: sum_primes                                      *
* Date Created: 12/4/2016                                   *
* Date Last Modified: 12/4/2016                             *
* Description: Recursively calculates the sum of primes to a number
* Input parameters: Unsinged integer n                      *
* Returns: The sum of the primes up to n                    *
* Preconditions: None                                       *
* Postconditions: None                                      *
*************************************************************/
int sum_primes(unsigned int n);
