# C_Program_Basic
```언어
#include<stdio.h>

int main(void)
{
    FILE* pFile = fopen("test.txt", "w"); //write mode    
		fprintf(pFile, "blockdmask");        //printf -> fprintf   
	  fclose(pFile);    
	  return 0;
}
```

```언어
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* pFile = fopen("test.txt", "r");
	if (pFile == NULL)
	{
	}
	char str[50];
	fgets(str, 50, pFile);

	fclose(pFile);
	printf("%s\n", str);
	return 0;
}
```
```언어
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	FILE* pFile = fopen("test.txt", "a");
	fputs("\nc 언어 file append test. by blockdmask.", pFile);
	fclose(pFile);
	return 0;
}
```
