# PA8
Washington State University Computer Science 121- Programming Assignment 8: C Interview Questions

For this assignment you will be required to write functions which solve each of the following problems. You must place all of your functions in one project. If you use any code that you find online, you must reference it in comments.
 
1.   (10 pts) Write a function called my_str_n_cpy() that accepts pointer to a destination character array and a pointer to a source character array (which is assumed to be a string) and returns the pointer to the destination character array. This function needs to copy at most n characters, character by character, from the source character array to the destination character array. If a null character is encountered before n characters have been encountered, copying must stop. You may NOT use any functions found in <string.h> to solve this problem! Note: you MUST use pointer arithmetic in this function only. 
 
2.    (10 pts) Recall Binary Search:
 
Input: a list of n sorted integer values and a target value
Output: True if target value exists in list and location of target value, false otherwise
Method:
Set left to 1 and right to n
Set found to false
Set targetindex to -1
While found is false and left is less than or equal to right
Set mid to midpoint between left and right
If target = item at mid then set found to true and set targetindex to mid
If target < item then set right to mid – 1
If target  > item then set to left to mid + 1 
Return the targetindex
 
Write a C function called binary_search().
 
3.    (10 pts) Write a function called bubble_sort() that accepts an array of pointers to strings and the number of strings as arguments, and returns nothing. The function sorts the strings according to the following algorithm:
 
1.      set the marker U for the unsorted section at the end of the list (U is an integer index value)
2.      while the unsorted section has more than one element do steps 3 through 7
3.            set the current element marker C at the second element of the list (C is an integer index value)
4.       while C has not passed U do steps 5 and 6
5.                if the item at position C is less than the item to its left then
exchange these two items
6.                move C to the right one position
7.       move U left one position
8.   stop
 
Your implementation for this function may NOT use strcpy(). You may only exchange or swap pointers, but NOT actually make copies of the strings!
 
4.    (10 pts) Write a recursive function called is_palindrome() that accepts a pointer to a string and its length, and recursively determines if the string is a palindrome. The function must return 1 for a palindrome, 0 otherwise. A palindrome is a sequence of symbols that may be interpreted the same forward and backward. For example, “race car”. Note: whitespace should be ignored in your solution.
 
5.    (15 pts) Write a recursive function called sum_primes() that accepts an unsigned integer, n, as an argument, and returns the sum of all primes from 2 to n. You must use recursion to solve this problem!
 
6.    (20 pts) Write a function called maximum_occurences() that accepts a pointer to a string (consisting of alphanumeric and whitespace characters only), a pointer to an array of struct occurrences,  a pointer to an integer, and a pointer to a character as arguments. The structure is defined as follows:
 
typedef struct occurrences
{
          int num_occurrences;
          double frequency;
} Occurrences;
 
The function determines the frequency of each character found in the array. The frequency is defined as: number of one character symbol / total number of characters. The function should use the second array argument (of struct occurrences) to keep track of the frequency of each character. Also, it must return, through the pointers, the maximum number of occurrences of any one character and the corresponding character for which the maximum represents. Thus, for a string such as “test string”, ‘t’ occurs 3 times, which is the maximum occurrences for any one character in the string.
 
7.    (20 pts) Write a function called smallest_sum_sequence() that accepts an array of signed integers and the number of items in the array as arguments, and returns the smallest sum of a sequence of numbers in the array. A sequence is defined as a single item or multiple items that are in adjacent memory locations.
