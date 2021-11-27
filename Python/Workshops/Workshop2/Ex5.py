def cle (List,dic):
  a=[]
  for i in List:
    if i in dic.values():
      a.append(i)

  return a
lis=[47, 64, 69, 37, 76, 83, 95, 97]
dic={'Yassine':47, 'Imane':69, 'Mohammed':76, 'Abir':97}   
print(cle(lis,dic))   

