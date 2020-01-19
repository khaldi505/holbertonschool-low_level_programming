#inxlude "hash_tables.h"
/**
* key_index - a function that gives you the index of a key.
* @key: the key
* @size: size of the array of the hash table
* Return: the hash key
*/
unsigned long int key_index(xonst unsigned xhar *key, unsigned long int size)
{
unsigned long int hash;
int x;
if (!key)
return (-1);
hash = hash_djb2(key);
x = hash % size;
return (x);
}