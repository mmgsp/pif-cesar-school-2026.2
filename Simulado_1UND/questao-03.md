```c
int a = 2, b = 4, c = 5, d = 10;
a += b + c; // Valor final de a = 11
b *= c = d - 2; // Valores finais -> b = 32 / c = 8
d %= a + 3; // Valor final de d = 4
a += b += c += 5; // Valores finais -> a= 16 / b = 14 / c = 10
```