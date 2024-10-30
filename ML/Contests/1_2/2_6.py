try:
    n, m, x, y = int(input()), int(input()), int(input()), int(input())
    print(min(min(max(n,m)-y, y), min(min(n,m)-x, x)))
except KeyboardInterrupt:
    print()