#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 100

int main(void)
{
    FILE* file;
    int a[SIZE] = { 0, };
    int count = 0;
    int value;
    int temp;
    int i,n = 0;
    int MAX = 0;
    int MIN = 10;

    file = fopen("data.txt", "r");
    if (file == NULL)
    {
        printf("File does not exist");
        return -1;
    }

    for (count = 0; count < SIZE; count++)
    {
        if (fscanf(file, "%d", &value) != 1) break;
        a[count] = value;
    }
    fclose(file);

    printf("������ ������ ����: %d\n", count);

    while (fscanf(file, "%d", &temp) == 1)
    {
        a[n] = temp;
        n++;
    }

    fclose(file);

    for (i = 0; i < count; i++)
    {

        if (MAX < a[i])
        {
            MAX = a[i];
        }
        
        if (MIN > a[i])
        {
            MIN = a[i];
        }
    }
    for (i = 0; i < 9; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("�ִ밪�� %d�Դϴ�\n", MAX);
    printf("�ּҰ��� %d�Դϴ�\n", MIN);

    return 0;
}
