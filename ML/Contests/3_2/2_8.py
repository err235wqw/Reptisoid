
s = input().strip()

ffd = {2: 0, 3: 0, 4: 0, 5: 0}

for i in range(len(s)):
    if s[i] == '0':
        ffd[2] += 1
        i += 1
    elif s[i:i+3] == '100':
        ffd[3] += 1
        i += 3
    elif s[i:i+3] == '101':
        ffd[4] += 1
        i += 3
    elif s[i:i+2] == '11':
        ffd[5] += 1
        i += 2

ffd = max(ffd, key=ffd.get)

print(ffd)
