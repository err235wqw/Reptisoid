from collections import deque
# def cycle_shift(a: list, n: int = 1) -> list:
#     for i in range(n):
#         a.append(a.pop(0))
#     return a


def main():
    n, p, q = list(map(int, input().split()))
    a = list(map(int, input().split()))
    a1 = deque(a)
    a1.rotate(-q)
    a = list(a1)
    a2 = deque(a[:int(len(a)/2)])
    a2.rotate(-p)
    a3 = deque(a[int(len(a)/2):])
    a3.rotate(-p)
    a = list(a2)+list(a3)
    print(*(a))


main()