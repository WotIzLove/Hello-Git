import time
import random


def coordinates(coordinate_x, coordinate_y, limit):

    j = 0

    while j <= limit:
        coordinate_x.append(random.randint(-5, 5))
        coordinate_y.append(random.randint(-5, 5))
        j += 1

kol = int(input('Введите количестов точек:'))
x = []
y = []
i = 1
counter = 0

times = open('time.txt', 'w')

while i <= kol:

    start = time.clock()
    coordinates(x, y, i)
    end = time.clock()
    times.write(str(i) + ' ' + str(end) + '\n')
    i += 1

times.close()

dot = random.randint(1, kol)

R = int(input('Введите радиус круга: '))

coordinates_x = open('x.txt', 'w')
coordinates_y = open('y.txt', 'w')

i = 0

while i < kol:
    if ((x[i] - x[dot]) ** 2) + ((y[i] - y[dot]) ** 2) <= (R ** 2):
        coordinates_x.write(str(x[i]) + '\n')
        coordinates_y.write(str(y[i]) + '\n')
        counter += 1
        i += 1

coordinates_x.close()
coordinates_y.close()

print('Количсетво точек области: ' + str(counter))