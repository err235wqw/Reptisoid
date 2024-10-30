from string import punctuation


def main():
    a = input().lower().replace(' ', '').translate(
        str.maketrans('', '', punctuation))
    print("Yes" if a == a[::-1] else "No")


main()