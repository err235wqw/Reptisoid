s = input()
st1 = set()
st2 = set()
for i in s:
    if i in st1 and i in st2:
        st2.remove(i)
    elif i not in st1:
        st1.add(i)
        st2.add(i)
print(''.join(sorted(st2)))