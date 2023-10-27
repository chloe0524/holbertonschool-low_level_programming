/**
 * leet - encode string to 1337
 * @s: string to be encoded
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	char *point = s;
	char a[] = { 'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char c[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
				*s = c[i] + '0';
		}
		s++;
	}
	return (point);
}
