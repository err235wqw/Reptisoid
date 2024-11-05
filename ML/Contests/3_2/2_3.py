poker_dict_who = {
    '6': 'six',
    '7': 'seven',
    '8': 'eight',
    '9': 'nine',
    '10': 'ten',
    '11': 'jack',
    '12': 'queen',
    '13': 'king',
    '14': 'ace',
}
poker_dict_how = {
    '1': 'spades',
    '2': 'clubs',
    '3': 'diamonds',
    '4': 'hearts',
}
n, m = input().split()
print(f"the {poker_dict_who[m]} of {poker_dict_how[n]}")
