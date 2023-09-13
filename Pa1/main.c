#include <stdio.h>
#include "functions.h"
int main() {
char str[1024];
printf("Type in a string: ");
scanf("%[^\n]s", str);
char **tokens;
int numTokens = getTokens(str, &tokens); // finding the number of tokens with the provided string "str"
    displayTokens(tokens, numTokens); // this is the display function being called.
}
