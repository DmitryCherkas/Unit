#include<stdlib.h>

void ft_bzero(void *s, size_t n);

void *ft_memalloc(size_t size)
{
	void *buf;

	if (size == 0 || !(buf = (void*)malloc(size)))
		return(NULL);
	ft_bzero(buf,size);
	return (buf);
}
