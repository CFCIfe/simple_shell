#include "main.h"

/**
* my_strtok - Custom strtok function to tokenize the string
* @str: The string to be tokenized
* @delimiters: Delimiters used to split the string
*
* Return: Pointer to the next token
*/

char* my_strtok(char* str, const char* delimiters) {
static char* token = NULL;
char* start;
char* end;

start = (str != NULL) ? str : token;

if (start == NULL) {
return NULL;
}

start += strspn(start, delimiters);
if (*start == '\0') {
token = NULL;
return NULL;
}

end = start + strcspn(start, delimiters);
if (*end != '\0') {
*end = '\0';
token = end + 1;
} else {
token = NULL;
}

return start;
}