def main():
    a = int(input())
    fl = 0 #1 растет 2 убывает
    fl1 = 0 # 0 
    while a != -2 * 1e9:
        a1 = int(input())
        if(a1 == -2 * 1e9):
            break
        if(a1 != a):
            if(fl1== 0):
                fl1 = 1
            if(a1>a):
                if(fl == 0):
                    fl = 1
                else:
                    if(fl != 1):
                        fl1 = 10 # rnd
            else:
                if(fl == 0):
                    fl = 2
                else:
                    if(fl != 2):
                        fl1 = 10
        else:
            if(fl1 != 10):
                fl1 = 2
        a = a1
    if fl1 == 10:
        print('RANDOM')
        return
    elif fl1 == 1:
        if(fl == 1):
            print('ASCENDING')
        else:
            print('DESCENDING')
    else:
        if(fl == 1):
            print('WEAKLY ASCENDING')
        elif fl == 2:
            print('WEAKLY DESCENDING')
        elif fl1 == 2:
            print('CONSTANT')


main()