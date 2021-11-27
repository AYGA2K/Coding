def compter_chiffres (n):
    if n<10:
        return 1
    else:
        return 1+compter_chiffres(n/10)

print( compter_chiffres(1458))