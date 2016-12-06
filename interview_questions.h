#ifndef INT_Q_H
#define INT_Q_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define NUM_CHARS 128 //Number of characters; used for occurrences array, problem number 6

//Struct for problem 6
typedef struct occurrences
{
  int num_occurrences;
  double frequency;
}Occurrences;

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
int binary_search(int sorted_array[], int targ, int size);

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
* Function: is_prime                                        *
* Date Created: 12/4/2016                                   *
* Date Last Modified: 12/4/2016                             *
* Description: Determines whether or not a number is prime  *
* Input parameters: Integer n                               *
* Returns: 1 if prime, 0 otherwise                          *
* Preconditions: None                                       *
* Postconditions: None                                      *
*************************************************************/
int is_prime(int num);

/*************************************************************
* Function: sum_primes                                      *
* Date Created: 12/4/2016                                   *
* Date Last Modified: 12/4/2016                             *
* Description: Recursively calculates the sum of primes to a number
* Input parameters: Unsigned integer n                      *
* Returns: The sum of the primes up to n (integer)          *
* Preconditions: is_prime() must be included                *
* Postconditions: None                                      *
*************************************************************/
int sum_primes(unsigned int n);

/*************************************************************
* Function: init_occ_array                                  *
* Date Created: 12/4/2016                                   *
* Date Last Modified: 12/4/2016                             *
* Description: Initializes array for number 6               *
* Input parameters: Occurrences array, int size             *
* Returns: None                                             *
* Preconditions: None                                       *
* Postconditions: None                                      *
*************************************************************/
void init_occ_array(Occurrences occ[], int size);

/*************************************************************
* Function: maximum_occurrences                             *
* Date Created: 12/4/2016                                   *
* Date Last Modified: 12/4/2016                             *
* Description: Determines the frequency of characters in a string
* Input parameters: String, array of struct Occurrences, pointer to int, pointer to char
* Returns: None                                             *
* Preconditions: None                                       *
* Postconditions: None                                      *
*************************************************************/
void maximum_occurrences(char *string, Occurrences occ[], int *max, char *max_char);

/*************************************************************
* Function: smallest_sum_sequence                           *
* Date Created: 12/4/2016                                   *
* Date Last Modified: 12/4/2016                             *
* Description: Finds the smallest sum in an integer array   *
* Input parameters: Signed integer array, int size          *
* Returns: The smallest sum of a sequence                   *
* Preconditions: None                                       *
* Postconditions: None                                      *
* Notes: Modified version of Kandane's Algorithm (http://www.geeksforgeeks.org/largest-sum-contiguous-subarray/)
*************************************************************/
int smallest_sum_sequence(signed int arr[], int size);

#endif
