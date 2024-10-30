def main():
    a = float(input())
    s = 1.0
    while a >= 0:
        s *= a
        a = float(input())
    print(s)

main()