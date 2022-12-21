# **0x06-pointers_arrays_strings**
## **0.strcat**
In the file [0-strcat.c]() the function concatenates two strings.
* Prototype:
 ```c
char *_strcat(char*dest, char *src);
```
* The function appends the src string to the dest string, overwritting the terminating null byte (0) at the end of dest, and then adds a terminating null byte.
* Returnd a pointer to the resulting string dest.
## **1.strncat**
In the file [1-strncat.c]() the function concatenates two strings.
* Prototype:
 ```c
char *_strncat(char*dest, char *src, int n);
```
The _strncat function is similar to the _strcat function, except that:
- it will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string dest
## **2.strncpy**
[2-strncpy.c]() contains a function that copies a string.
* Prototype:
```c
char *_strncpy(char*dest, char *src, int n);
```
## **3.strcmp**
[3-strcmp.c]() contains a function that compares two strings.
* Prototype:
```c
int _strncpy(char*s1, char *s2);
```
## **4.I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
[4-rev_array.c]() contains a function that reverses the content of an arrat of integers.
* Prototype 
```c
void reverse_array(int *a, int n);
```
* n is the number of elements of the array.
## **5.Always look up**
[5-string_toupper.c]() contains a function that changes all lowercase letters of a string to uppercase.
* Prototype 
```c
char *string_toupper(char *);
```
## **6.Expect the best.Prepare for the worst.Capitalize on what comes**
[6-cap_string_toupper]() contains a function that capitalizes all words of a string
* Prototype 
```c 
char *cap_string(char *);
```
## **7.Mozart compposed his music not for the elite, but for everybody** 
[7-leet.c]() contains a function that encodes a string into 1337.
* Letters a and a should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
* Prototype 
```c
char *leet(char*);
```
## **8.rot13**
[100-rot13.c]() contains a function that encodes a string using rot13
* Prototype 
```c
char *rot13(char*);
```
## **9.Numbers have life; they're not just symbols on paper**
[101-print_number.c]() contains a function that prints an integer
* Prototype
```c
void print_number(int n);
```
## **10.A deram doesn't become reality through magic; it takes sweat, determination and hard work**
[102-magic.c]() is a program that prints ```c a[2] = 98```, followed by a new line

## **11.It is the addition of strangeness to beauty that constitutes the romantic character in art**
[103-infinite_add.c]() contains a function that adds two numbers.
* Prototype
```c
char *infinite_add(char *n1, char *n2, char *r, int size_r);
```
* Where n1 and n2 are two numbers
* ```c r ``` is the buffer thet the function will use to store the result.
* ```c size_r ``` is the buffer size
* The function returns a pointer to the result
## **12.Noise is a buffer, more effective than cubicles or booth walls**
[104-print_buffer](http://en.wikipedia.org/wiki/) contains a function that prints a buffer
* Prototype
```c
void print_buffer(char *b, int size);
```

