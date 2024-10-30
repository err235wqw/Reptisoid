def check_nat(a):
    for i in range (2,a//2+1):
        if(a % i == 0):
            return False
    return True

def main():
    n = int(input())
    a = []
    while not check_nat(n):
        cnt = 2
        while(not check_nat(cnt) or n % cnt != 0):
            cnt+=1
        a.append(cnt)
        n = int(n / cnt)
    a.append(n)
    for i in a:
        print(i, sep = '', end = ' ')

main()