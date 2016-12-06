#include "interview_questions.h"

//John and Chris: Seriously. Don't fuck with me.
//You will regret it.

//Function that copies one string into another
char* my_str_n_cpy(char *dest, const char *src)
{
  char *temp = dest;
  while (*src)
  {
    *dest = *src;
    dest++;
    src++;
  }
  *dest++ = '\0';
  return temp;
}

//Function that finds the index of an item in a sorted array using binary search
int binary_search(int sorted_array[10], int targ, int size)
{
  int left = 0, right = size, mid = 0;
  while (left <= right)
  {
    mid = (right - left) / 2;

    if(sorted_array[mid] < targ)
    {
      right = mid - 1;
    }
    else if(sorted_array[mid] > targ)
    {
      left = mid + 1;
    }
    else
    {
      return mid;
    }

  }
  return -1;
}

//Function that sorts an array of strings based on their ASCII values
void bubble_sort(char *arr[], int size)
{
  for (int i=0; i<(size-1); i++)
  {
    for (int j=0; j<(size-i-1); j++)
    {
      if (strcmp(arr[j], arr[j+1]) > 0)
      {
        char *temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
      }

    }

  }

}

//Function that recursively determines if a string is a palindrome
int is_palindrome(char *string, int length)
{
  //printf("Initial length: %d\n", length);
  //Sets length to the next character
  length--;
  while (string[length] == ' ')
  {
    length--;
  }
  //printf("Adjusted length: %d\n",length);

  //Determines how many characters have been checked
  int num_chars = 0, counter = strlen(string)-1, start = 0;
  while (counter > length)
  {
    if (string[counter] != ' ')
    {
      num_chars += 1;
    }
    counter--;
  }
  //printf("Num chars: %d\n", num_chars);

  //Sets the start
  int right_counter = 0;
  while(num_chars > 0)
  {
    if (string[right_counter] != ' ')
    {
      num_chars--;
    }
    right_counter++;
  }
  while (string[right_counter] == ' ')
  {
    right_counter++;
  }
  //printf("Right counter: %d\n", right_counter);
  //printf("right side: %c   left side: %c\n\n", string[right_counter], string[length]);

  //Compares the two sides
  if (right_counter >= length)
  {
    return 1;
  }

  if (string[right_counter] != string[length])
  {
    return 0;
  }
  else
  {
    return is_palindrome(string, length);
  }



}

//Function that checks if a number is prime (code from http://stackoverflow.com/questions/5281779/c-how-to-test-easily-if-it-is-prime-number)
int is_prime(int num)
{
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num/2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

//Function that recursively calculates the sum of all the primes up to a number
int sum_primes(unsigned int n)
{
  int sum = 0;
  if (n < 2)
  {
    return 0;
  }

  if (is_prime(n)) //I could put the "prime" logic here, but I thought this would be more readable
  {
    //printf("Prime: %d\n", n);
    sum = n;
  }
  else
  {
    sum = 0;
  }

  return sum + sum_primes(n-1);


}

//Function that initializes the array for problem 6
void init_occ_array(Occurrences occ[], int size)
{
	for (int i = 0; i < size; i++)
	{
		occ[i].num_occurrences = 0;
		occ[i].frequency = 0.0;
	}
}

//Function that determines the frequency of each character found in a string
void maximum_occurrences(char *string, Occurrences occ[], int *max, char *max_char)
{
  int counter = 0;
  //Loops through the string; counts number of each letter
  for (int i=0; i<strlen(string); i++)
  {
    int char_index = (int) string[i];
      occ[char_index].num_occurrences += 1;
      counter++;
  }
  //Determines the frequency of every character (letter)
  for (int i=0; i<NUM_CHARS; i++)
  {
    occ[i].frequency = (double) occ[i].num_occurrences / counter;
  }
  //Returns (through pointers) the character with the max number of occurrences
  // (only symbols- no whitespace)
  *max = 0;
  *max_char = '\0';
  for (int i=48; i<NUM_CHARS; i++)
  {
    if (occ[i].num_occurrences > *max)
    {
      *max = occ[i].num_occurrences;
      *max_char = (char) i;
    }
  }
  printf("Max char: %c, num occurrences: %d\n", *max_char, *max);

}

//Function that finds the smallest sum of a sequnce in an array
int smallest_sum_sequence(signed int arr[], int size)
{
  int min_sf = 0, min_eh = 0;
  for (int i=0; i<size; i++)
  {
    min_eh += arr[i];
    if (min_eh > 0)
    {
      min_eh = 0;
    }
    else if (min_sf > min_eh)
    {
      min_sf = min_eh;
    }

  }
  return min_sf;
}







//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
