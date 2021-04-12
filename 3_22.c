#include <stdio.h>
int main() {
    char line[150];
    int vowels, consonant, digit, space;
    vowels = consonant = digit = space = 0;
    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);
    for (int i = 0; line[i] != '\0'; ++i) 
    {
      switch(line[i])
      { 
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':
                ++vowels;
                break;
    }
    }
    printf("Number of vowels: %d\n", vowels);
    return 0;
}

