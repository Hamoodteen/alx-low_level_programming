/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *s)
{
	unsigned long int hs;
	int i;

	hs = 5381;
	while ((i = *s++))
		hs = ((hs << 5) + hs) + i;
	return (hs);
}
