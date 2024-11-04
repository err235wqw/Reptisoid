n = int(input())
ans = []
inp = input().split()
for i in range(n):
    temp = inp[i]
    if len(temp) != len(set(temp)):
        ans.append(temp)
print(*ans, sep=' ')
