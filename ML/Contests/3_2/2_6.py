s1 = input()
s2 = input()
d1 = dict()
for i in s1:
    d1[i] = d1.get(i, 0) + 1
d2 = dict()
for i in s2:
    d2[i] = d2.get(i, 0) + 1
for i in d2.keys():
    if d1.get(i,0) < d2[i]:
        print('False')
        break
else:
    print('True')