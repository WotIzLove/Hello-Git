P = int(input())
X = int(input())
Y = int(input())

Summ = round ( ( X * 100 + Y ) * ( 1 + P / 100 ), 2 )
Rub = int( Summ // 100 )
Summ = int(Summ)
Kop = ( Summ / 100 - Rub ) * 100

print(Rub, Kop)