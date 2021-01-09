/**
 * _strcmp - compare two strings
 * @s1 :the first string
 * @s2 : the second string
 * Return: 0 if equals
 */

int _strcmp(char *s1, const char *s2)
{
	int i;
	int e;

	i = 0;
	e = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			e = s1[i] - s2[i];
			break;
		}
		else if (s2[i] > s1[i])
		{
			e = (s2[i] - s1[i]) * (-1);
			break;
		}
		i++;
	}
	return (e);
}
