# Questão 04 — Operadores de Atribuição Composta e Precedência

## Estado inicial

```c
int a = 1, b = 2, c = 3, d = 4;
```

| Variável | Valor |
|----------|-------|
| a        | 1     |
| b        | 2     |
| c        | 3     |
| d        | 4     |

**Regra-chave usada em toda a questão:** os operadores de atribuição (`=`, `+=`, `-=`, `*=`, `/=`, `%=`) têm **associatividade à direita** e **precedência menor** que os operadores aritméticos (`+`, `-`, `*`). Isso significa que, em uma expressão como `x = y = z`, primeiro se resolve `z`, depois `y = z`, depois `x = (y = z)` — a avaliação "caminha" da direita para a esquerda.

---

## Instrução 1: `a += b + c;`

Como `+` tem precedência maior que `+=`, o lado direito é totalmente calculado antes da atribuição:

1. `b + c` → `2 + 3 = 5`
2. `a += 5` → `a = 1 + 5 = 6`

**Resultado:** `a = 6` (b, c, d inalterados)

| a | b | c | d |
|---|---|---|---|
| 6 | 2 | 3 | 4 |

---

## Instrução 2: `b *= c = d + 2;`

Aqui aparecem dois operadores de atribuição (`*=` e `=`), que são avaliados da direita para a esquerda: `b *= (c = (d + 2))`.

1. `d + 2` → `4 + 2 = 6`
2. `c = 6` → **c passa a valer 6**
3. `b *= c` → `b *= 6` → `b = 2 * 6 = 12`

**Resultado:** `b = 12`, `c = 6`

| a | b  | c | d |
|---|----|---|---|
| 6 | 12 | 6 | 4 |

---

## Instrução 3: `d %= a + a + a;`

O lado direito é avaliado primeiro, pois `+` precede `%=`:

1. `a + a + a` → `6 + 6 + 6 = 18`
2. `d %= 18` → `d = 4 % 18`

Como 4 é menor que 18, o resto da divisão é o próprio 4.

**Resultado:** `d = 4` (sem alteração numérica, mas resultado de uma operação real)

| a | b  | c | d |
|---|----|---|---|
| 6 | 12 | 6 | 4 |

---

## Instrução 4: `d -= c -= b -= a;`

Três atribuições encadeadas, resolvidas da direita para a esquerda:
`d -= (c -= (b -= a))`

1. `b -= a` → `b = 12 - 6 = 6` → **b passa a valer 6**
2. `c -= b` → `c = 6 - 6 = 0` → **c passa a valer 0**
3. `d -= c` → `d = 4 - 0 = 4` → **d permanece 4**

**Resultado:** `b = 6`, `c = 0`, `d = 4`

| a | b | c | d |
|---|---|---|---|
| 6 | 6 | 0 | 4 |

---

## Instrução 5: `a += b += c += 7;`

Novamente associatividade à direita: `a += (b += (c += 7))`

1. `c += 7` → `c = 0 + 7 = 7` → **c passa a valer 7**
2. `b += c` → `b = 6 + 7 = 13` → **b passa a valer 13**
3. `a += b` → `a = 6 + 13 = 19` → **a passa a valer 19**

**Resultado:** `a = 19`, `b = 13`, `c = 7`

---

## Tabela-resumo (evolução completa)

| Etapa                          | a  | b  | c | d |
|--------------------------------|----|----|---|---|
| Inicialização                  | 1  | 2  | 3 | 4 |
| 1. `a += b + c;`                | 6  | 2  | 3 | 4 |
| 2. `b *= c = d + 2;`            | 6  | 12 | 6 | 4 |
| 3. `d %= a + a + a;`            | 6  | 12 | 6 | 4 |
| 4. `d -= c -= b -= a;`          | 6  | 6  | 0 | 4 |
| 5. `a += b += c += 7;`          | 19 | 13 | 7 | 4 |

## Valores finais

- **a = 19**
- **b = 13**
- **c = 7**
- **d = 4**
