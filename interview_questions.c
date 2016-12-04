#include "interview_questions.h"

//John and Chris: Seriously. Don't fuck with me

//Function that copies one string into another
char* my_str_n_cpy(char *dest, const char *src)
{
  char *temp = dest;
  while (*src)
  {
    *dest = *src;
    *dest++;
    *src++;
  }
  *dest++ = '\0';
  return temp;
}

//Function that finds the index of an item in a sorted array using binary search
int binary_search(int sorted_array[10], int targ)
{
  int left = 0, right = 10, mid = 0;
  while (left <= right)
  {
    mid = (right - left) / 2;

    /*
    printf("Left: %d\n", left);
    printf("Right: %d\n", right);
    printf("Mid: %d\n", mid);
    */

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
      printf("strcmp: %d\n", strcmp(arr[j], arr[j+1]));
      if (strcmp(arr[j], arr[j+1]) > 0)
      {
        char *temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
      }

    }

  }

}
