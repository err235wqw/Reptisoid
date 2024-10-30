def main():
    input()
    a = list(map(int, input().split()))
    a[a.index(max(a))] *= -1
    print(*a, sep='\n')


main()