try:
    x, y = map(float, input().split())
    print("Yes" if ((y <= 1.5 and y >= 0.5) or x >= 2) else "No")
except KeyboardInterrupt:
    print()