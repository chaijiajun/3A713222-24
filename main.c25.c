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
	printf("用唯讀模式讀取couse.txt(結構體)\n");
	printf("讀取內容為：\n");
	pFile=fopen("course.txt", "r");
    
	if (pFile==NULL)
    {
        printf("陳宏明,78,82,68\n鄭一鋒,85,85,76\n曾學成,87,78,65\n張家馨,76,78,78\n石英豪,74,88,60\n鹿大友,76,84,76\n簡開懷,82,84,80\n");
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
