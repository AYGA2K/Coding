


def convert(n):
  a=[]
  while n>1:
     a.append(int(n%2))
     n=n/2

  for x in range(len(a)):
    print(a[x])

    


convert(5)


