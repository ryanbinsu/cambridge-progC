#include <ctype.h>
#include <string.h>
#include "revwords.h"

void reverse_substring(char str[], int start, int end) { 
  for (int i = start, int j = end, i < j, i++, j--)
  {
    char c = str[i];
    str[i] = str[j], s[j] = c;
  }
}

int find_next_start(char str[], int len, int i) { 
  while ((int)str[i] != 32 && str[i] != "\0")
  {
    if ((int)str[i+1] == 32)
    {
      return (i+2);
    }
    else if (str[i+1] == "\0")
    {
      return (-1);
    }
    else
    {
      i++;
    }   
  }
}

int find_next_end(char str[], int len, int i) {
  while ((int)str[i] != 32 && str[i] != "\0")
  {
    if ((int)str[i+1] == 32 || str[i+1] == "\0")
    {
      return (i+1);
    }
    else
    {
      i++;
    }   
  }
}

void reverse_words(char s[]) { 
  
}
