try:
    v1, m1, v2, m2 = int(input()), int(input()), int(input()), int(input())
    print(((v1/m1) > (v2/m2)) + 1 if (v1/m1) != (v2/m2) else '=')
except KeyboardInterrupt:
    print()