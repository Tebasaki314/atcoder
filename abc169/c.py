from decimal import *
import math

def main():
    a,b = input().split()

    a_p = int(a)
    b_p = int(b.replace('.',''))
    ans = a_p * b_p // 100
    print(ans)

def main2():
    a,b = input().split()

    ans = Decimal(a) * Decimal(b)
    print(int(ans))


main2()
