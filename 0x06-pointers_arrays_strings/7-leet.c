#include "holberton.h"

/**
 * leet - finds a sepsifc letter and replace it by an intger
 *@s: string
 *Return: a string
 */
char *leet(char *s)
{
int counter, sec = 0;

char uppercase[] = {'a', 'e', 'o', 't', 'l'};
char lowercase[] = {'A', 'E', 'O', 'T', 'L'};
int numbers[] = {'4', '3', '0', '7', '1'};

for (counter = 0; s[counter] != '\0'; counter++)
{
for (sec = 0; numbers[sec] != '\0'; sec++)
{
if ((s[counter] == lowercase[sec]) || (s[counter] == uppercase[sec]))
{
s[counter] = numbers[sec];
}
}
}
return (s);
}
