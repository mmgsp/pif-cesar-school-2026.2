#include <stdio.h>

int main()
{

    int v1, v2, v3;
    double m;

    printf("Digite 3 numeros inteiros:\n");
    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);

    m = (v1+v2+v3)/3.0;

    printf("A media dos valores %d, %d e %d equivale a: %.2f", v1, v2, v3, m);

    return 0;

}

