from string import punctuation

def rec(a)->int:
    if a < 10:
        return a
    else:
        return rec(sum([int(i) for i in str(a)]))

def main():
    print(rec(int(input())))


main()