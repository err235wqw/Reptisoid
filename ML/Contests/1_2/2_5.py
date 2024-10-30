try:
    x1, x2, x3 = map(int, input().split())
    print(abs(x3 - x2) + min(abs(x2-x1), abs(x3-x1)))
except KeyboardInterrupt:
    print()