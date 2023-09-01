#include <unistd.h>

int	main(void)
{
	char *a = "1234567890";

	write(1, a, 10);
	return (0);
}
