#include <stdio.h>

void	foo(char *c);

/*
	outside
*/

int		main(void)
{
	/*
		inside
	*/
	char *str;
	str = "#include <stdio.h>%c%cvoid%cfoo(char *c);%c%c/*%c%coutside%c*/%c%cint%c%cmain(void)%c{%c%c/*%c%c%cinside%c%c*/%c%cchar *str;%c%cstr = \"%s\";%c%cfoo(str);%c}%c%cvoid%cfoo(char *c)%c{%c%cprintf(c,10,10,9,10,10,10,9,10,10,10,9,9,10,10,9,10,9,9,10,9,10,9,10,9,c,10,9,10,10,10,9,10,10,9,10,10);%c}%c";
	foo(str);
}

void	foo(char *c)
{
	printf(c,10,10,9,10,10,10,9,10,10,10,9,9,10,10,9,10,9,9,10,9,10,9,10,9,c,10,9,10,10,10,9,10,10,9,10,10);
}
