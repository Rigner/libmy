#include "my.h"

void	my_putchar_fd(char c, int fd)
{
  if (write(fd, &c, 1) != 1)
    exit(1);
}