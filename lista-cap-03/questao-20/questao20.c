#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int codigo;

    printf("Dec\tHex\tChar\n");
    printf("-----------------------\n");

    for (codigo = 32; codigo <= 126; codigo++)
    {
        printf("%d\t%X\t%c\n", codigo, codigo, codigo);
    }

    system("pause");

    return 0;
}
