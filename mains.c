int main()
{
	void *p;
	char *c;

	p = malloc(6 * sizeof(char));
	c = (char *)ft_memset(p, 122, 5);
	printf("%c", c[0]);
	printf("%c", c[1]);
	printf("%c", c[2]);
	printf("%c", c[3]);
	printf("%c", c[4]);
}

int main()
{
	void *p;

	p = malloc(10);
	bzero(p, 5);
	char *res = (char *)p;
	printf("%c \n", res[0]);
	printf("%c \n", res[1]);
	printf("%c \n", res[2]);
	printf("%c \n", res[3]);
	printf("%c \n", res[4]);
}
/*main strnstr
int main()
{
		const char *largestring = "Foo Bar Baz";
	   const char *smallstring = "Bar";
		printf(" La opriginal: %s\n", strnstr(largestring, smallstring, 10));
		printf(" La tuya: %s\n", ft_strnstr(largestring, smallstring, 10));
}
/*main atoi
 * isprint
 * int main()
{
	printf("%d \n", isprint(128));
	printf("%d \n", isprint(31));
	printf("%d \n", isprint(56));
	printf("\n");
	printf("%d \n", ft_isprint(128));
	printf("%d \n", ft_isprint(31));
	printf("%d \n", ft_isprint(56));
}
 * int main()
{
	printf("La de Linux:\n");
	printf("%d\n", atoi("    \t  +23a23"));
	printf("%d\n", atoi("    \t  +-23"));
	printf("%d\n", atoi("    \t  -23"));
	printf("%d\n", atoi("    \t\n  2147483648"));
	printf("La tuya:\n");
	printf("%d\n", ft_atoi("    \t  +23a23"));
	printf("%d\n", ft_atoi("    \t  +-23"));
	printf("%d\n", ft_atoi("    \t  -23"));
	printf("%d\n", ft_atoi("    \t\n  2147483648"));
}
 * main split
 * int main()
{
	char **p;

	p = malloc(10 * sizeof(char *));
	p[0] = malloc(10);
	p[1] = malloc(10);
	p[2] = malloc(10);
	p[3] = malloc(10);
	p[4] = malloc(10);
	p[5] = malloc(10);
	p[6] = malloc(10);
	p = ft_split("hola Mundo  Hello World    \0", ' ');
	printf("%s\n", p[0]);
	printf("%s\n", p[1]);
	printf("%s\n", p[2]);
	printf("%s\n", p[3]);
	printf("%s\n", p[4]);

}
 *
 * main strlcpy
 * int main(){

	char *d = malloc(3);
	printf("%zu", ft_strlcpy(d, "Maria\0", 6));
//	printf("%zu", strlcpy(d, "Maria\0", 6));
	printf("%c", d[0]);
	printf("%c", d[1]);
	printf("%c", d[2]);
	printf("%c", d[3]);
	printf("%c", d[4]);
	printf("%c", d[5]);
}
 * main de strrchr
 * int main()
{
	char *s = "Hello World\0";
	char *s1 = "Hello World\0";
	printf("%s \n", strrchr(s, 'a'));
	printf("%s \n", s);
	printf("%s \n", ft_strrchr(s1, 'a'));
	printf("%s \n", s1);
}
*/

