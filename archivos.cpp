#include<stdio.h>

int main(int argc, char *argv[]){
	
	FILE *sal=fopen(*++argv, "a");
	char pal[20];
    int n;

    printf("¿Como te llamas?");
    scanf("%s", pal);
    fprintf(sal,"%s\t",pal);
    printf("Cuantos años tienes?");
    scanf("%d",&n);
    fprintf(sal,"%d\t",n);
    printf("Cual es tu fecha de nacimiento (dd/mm/aa)?");
    scanf("%s",pal);

    fclose(sal);


	return 0;
}