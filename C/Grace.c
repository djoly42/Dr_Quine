#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define KID "Grace_kid.c"
#define STR "#include <fcntl.h>%c#include <stdlib.h>%c#include <stdio.h>%c#define KID %cGrace_kid.c%c%c#define STR %c%s%c%c#define MAIN int main(void){FILE *fp;fp=fopen(KID, %cw%c);fprintf(fp,STR,10,10,10,34,34,10,34,STR,34,10,34,34,10,10,9,10,10);fclose(fp);}%c/*%c%coutside%c*/%cMAIN"
#define MAIN int main(void){FILE *fp;fp=fopen(KID, "w");fprintf(fp,STR,10,10,10,34,34,10,34,STR,34,10,34,34,10,10,9,10,10);fclose(fp);}
/*
	outside
*/
MAIN
