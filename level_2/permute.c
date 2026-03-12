#include <unistd.h>

void swap(char *a, char *b)
{
	char t;
	t = *a;
	*a = *b;
	*b = t;
}

void print(char *s)
{
	int i = 0;
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void permute(char *s, int start)
{
	if (!s[start])
	{
		print(s);
		return;
	}
	for (int i = start; s[i]; i++)
	{
		swap(&s[start], &s[i]);
		permute(s, start + 1);
		swap(&s[start], &s[i]);
	}

}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		permute(argv[1], 0);
	}
	return 0;
}
