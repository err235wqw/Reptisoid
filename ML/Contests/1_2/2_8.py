try:
    k = input()
    a = ['2','3','4']
    if len(k) > 1 and k[-2] == '1':
        print(f"Мне {k} лет")
    elif k[-1] == '1':
        print(f"Мне {k} год")
        
    else:
        print(f"Мне {k} года"  if (k[-1] in a )else f"Мне {k} лет")
except KeyboardInterrupt:
    print()