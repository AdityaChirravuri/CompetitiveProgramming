vowel_upper = ['A', 'E', 'I', 'O', 'U']
vowel_lower = ['a', 'e', 'i', 'o', 'u']
for i in range(int(input())):
    s = input()
    upper = int(0)
    lower = int(0)
    for i in range(5):
        if vowel_upper[i] in s:
            upper = upper+1
    for i in range(5):
        if vowel_lower[i] in s:
            lower= lower +1

    if lower == 5 or upper ==5:
        print("lovely string")
    else:
        print("ugly string")
