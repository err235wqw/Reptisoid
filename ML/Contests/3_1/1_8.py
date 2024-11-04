n = int(input()) - 1
counter = 0
tt1 = input()
prev = set(tt1)
answer = []
for i in range(n):
    temp = input()
    cur = set(temp)
    if len(prev & cur) == 2:
        counter += 1
        answer.append(tt1)
    prev = cur
    tt1 = temp

print(*answer if counter > 0 else 'N', sep='\n')
