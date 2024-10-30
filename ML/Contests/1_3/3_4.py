def main():
    cnt = 1
    max_value = cnt
    n = int(input())
    a_1 = input()
    for i in range(n-1):
        a_2 = input()
        if a_1 == a_2:
            cnt += 1
        else:
            if max_value < cnt:
                max_value = cnt
            cnt = 1
        a_1 = a_2
    print(max(cnt, max_value))

main()