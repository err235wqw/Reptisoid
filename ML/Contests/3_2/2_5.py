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
cha_dict = dict(
    sorted(cha_dict.items(), key=lambda item: item[1], reverse=True))

print(*cha_dict, sep='')
