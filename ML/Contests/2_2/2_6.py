def main():
    n, m = list(map(int, input().split()))
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = []
    cnt1 = 0
    cnt2 = 0
    for i in range(n+m):
        if cnt2 < m:
            if cnt1 < n:
                if a[cnt1] < b[cnt2]:
                    c.append(a[cnt1])
                    cnt1+=1
                else:
                    c.append(b[cnt2])
                    cnt2+=1
            else:
                c.append(b[cnt2])
                cnt2+=1
        else:
            c.append(a[cnt1])
            cnt1+=1
    print(*c, sep='\n')


main()