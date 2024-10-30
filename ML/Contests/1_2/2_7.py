try:
    a, d= [int(input()), int(input()), int(input())], int(input())
    a.sort()
    print("Yes" if (a[1]**2 + a[0]**2)**0.5<= d else "No")
except KeyboardInterrupt:
    print()