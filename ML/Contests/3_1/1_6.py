n,m = map(int,input().split())
st1 = {input() for i in range(n)}
st2 = {input() for i in range(m)}
st3 = st1 & st2
st4 = st1 - st2
a1 = [list(map(int, i.split())) for i in st3]
a2 = [list(map(int, i.split())) for i in st4]
a1 = sorted(a1)
a2 = sorted(a2)
if len(a1) == 0:
    print('empty', end='')
else:
    for i in a1:
        print(f"({i[0]}, {i[1]})", end=' ')
print()
if len(a2) == 0:
    print('empty', end='')
else:
    for i in a2:
        print(f"({i[0]}, {i[1]})", end=' ')