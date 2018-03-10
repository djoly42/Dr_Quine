#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define I 5
#define STR "#include <fcntl.h>%c#include <stdlib.h>%c#include <stdio.h>%c#define I %d%c#define STR %c%s%c%c#define MAIN() int main(void){int i;i = I;if (i < 0)return (0);char *name;char *gcc;char *sh;FILE *fp;asprintf(&name, %cSully_%cd.c%c,i);asprintf(&gcc, %cgcc -o Sully_%cd Sully_%cd.c%c, i, i);asprintf(&sh, %c./Sully_%cd%c, i);fp=fopen(name, %cw%c);fprintf(fp,STR,10,10,10,--i,10,34,STR,34,10,34,37,34,34,37,37,34,34,37,34,34,34,10,10,10,9,10,10,10);fclose(fp);system(gcc);system(sh);return (0);}%c%c/*%c%coutside%c*/%cMAIN()%c"
#define MAIN() int main(void){int i;i = I;if (i < 0)return (0);char *name;char *gcc;char *sh;FILE *fp;asprintf(&name, "Sully_%d.c",i);asprintf(&gcc, "gcc -o Sully_%d Sully_%d.c", i, i);asprintf(&sh, "./Sully_%d", i);fp=fopen(name, "w");fprintf(fp,STR,10,10,10,--i,10,34,STR,34,10,34,37,34,34,37,37,34,34,37,34,34,34,10,10,10,9,10,10,10);fclose(fp);system(gcc);system(sh);return (0);}

/*
	outside
*/
MAIN()
