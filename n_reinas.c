#include <unistd.h>

int abs (int x)
{
	if (x < 0)
		return (-x);
	return 0;
}

void print(int *board, int n)
{
	for (int i = 0; i < n; i++)
	{
		char c = board[i] + 48;
		write(1, &c, 1);
	}
	write(1, '\n', 1);
}

int is_safe(int *board, int col, int row)

}
