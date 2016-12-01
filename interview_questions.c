#include "interview_questions.h"

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
