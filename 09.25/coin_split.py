# shit code, no docs

from itertools import product

[a, b, c] = [8, 6, 10]

sm = int(input('Введите сумму, которую хотите разменять: '))

flag = True

for x, y, z in product(range(0, sm // a + 1), range(0, sm // b + 1), range(0, sm // c + 1)):
    if x * a + y * b + z * c == sm:
        print(f'{x} по {a} + {y} по {b} + {z} по {c}')
        flag = False

if flag:
    print('-42!')
