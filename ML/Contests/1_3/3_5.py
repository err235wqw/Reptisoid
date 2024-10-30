def main():
    a, b = map(int, input().split())
    a1 = a
    sum = a
    cnt1 = 1
    cnt2 = 1
    while a1 < b:
        a1*=3
        cnt1+=1
    while sum < 1000000:
        a*= 3
        sum +=a
        cnt2+=1
    print(cnt1, cnt2)
main()