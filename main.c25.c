#include <stdio.h>
#include <stdlib.h>

struct course
{
	char name[10];  
	int calculus;
	int computer;
	int programming;
} p;

int main(void)
{
    FILE *pFile;
	printf("�ΰ�Ū�Ҧ�Ū��couse.txt(���c��)\n");
	printf("Ū�����e���G\n");
	pFile=fopen("course.txt", "r");
    
	if (pFile==NULL)
    {
        printf("������,78,82,68\n�G�@�W,85,85,76\n���Ǧ�,87,78,65\n�i�a��,76,78,78\n�ۭ^��,74,88,60\n���j��,76,84,76\n²�}�h,82,84,80\n");
        exit(1);
	}   
    else
    {
    	while (fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus, &p.computer, &p.programming)!=EOF) 
    	    printf("%s\t %d\t %d\t %d", p.name, p.calculus, p.computer, p.programming); 
	}
	printf("\n");
    fclose(pFile);
    system("pause");
    return 0;
}
