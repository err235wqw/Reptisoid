n, m = map(int, input().split())
inc_dict = {input(): -1 for i in range(m)}
st1 = set()
for temp in inc_dict:
    st1.add(temp)
for i in range(n-1):
    st2 = {input() for i in range(m)}
    st_temp = st1 & st2
    for temp in st_temp:
        if inc_dict[temp] == -1:
            inc_dict[temp] = 1
        else:
            inc_dict[temp] += 1
max_val = max(inc_dict, key=inc_dict.get)
print(-1 if inc_dict[max_val] == -1 else max_val)
