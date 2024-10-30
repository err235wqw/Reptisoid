def main():
    n, m, k = input().split()
    a = [int(x) if x[-1] == k and int(x) %
         int(m) != 0 else 0 for x in input().split()]
    print(sum(a))


main()