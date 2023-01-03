#include "main.h"
/*
*_strchr - locates a character in a string
*@c: occurence of the character
*@s: in the string
*Return: a pointer to the first occurence of the characer
*/

char *_strchr(char *s, char c) {
  for (unsigned int i = 0; s[i] != '\0'; i++) {
    if (s[i] == c) {
      return &s[i];
    }
  }
  return NULL;
}
