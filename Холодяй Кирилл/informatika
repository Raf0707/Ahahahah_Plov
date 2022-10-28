n = input()
dot = n.find('.') + 1
drob_n = len(n) - dot
drob_sum = 0
cel_n = len(n) - drob_n - 1
for i in range(1, drob_n+1):
    drob_sum += (int(n[-i]) * 2 ** (-drob_n))
    drob_n -= 1
sum_cel10 = int(n[:cel_n], 2)
sum10 = sum_cel10 + drob_sum
sum_cel_16 = hex(sum_cel10)[2:]
drob_sum_16 = ''
while round(drob_sum) != drob_sum:
    drob_sum *= 16
    t = int(drob_sum)
    drob_sum_16 += (hex(int(drob_sum))[2:])
    drob_sum -= int(t)
sum16 = sum_cel_16 + '.' + drob_sum_16
print(sum16)
