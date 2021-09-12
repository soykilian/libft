void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destc;
	unsigned char		*srcc;
	int					i;

	destc = (unsigned char *)(dest);
	srcc = (unsigned char *)(src);
	i = (int)n;
	if (!dest && !src)
		return (dest);
	if (destc <= srcc)
	{
		while (i-- > -1)
			destc[i] = srcc[i];
	}
	else
	{
		while (i < (int)n)
		{
			destc[i] = srcc[i];
			i++;
		}
	}
	return ((void *)dest);
}
