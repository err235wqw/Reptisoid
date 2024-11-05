s = input()
while s[-1] != '.':
    s += input()
s = s.lower()
s = sorted(s)
cha_dict = dict()
for i in s:
    cha_dict[i] = cha_dict.get(i, 0)+1
if ' ' in cha_dict:
    del cha_dict[' ']
if '.' in cha_dict:
    del cha_dict['.']
if '\n' in cha_dict:
    del cha_dict['\n']
n = max(cha_dict, key=cha_dict.get)
print(n, cha_dict[n], sep=' ')
