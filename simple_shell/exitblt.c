/**
 * exblt - Exit the command.
 * @b: Entry pointer.
 * Return: return value 1.
 */

int exblt(char *b)
{
	int i;

	char *ex;

	i = 0;
	ex = "exit\n";
	while (b[i])
	{
		if (ex[i] != b[i])
			return (0);
		i++;
	}

	return (1);

}

