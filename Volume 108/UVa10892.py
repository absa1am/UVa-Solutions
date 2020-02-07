# Problem: 10892 - LCM Cardinality

def divisors(n):
	d = []
	i = 1
	while i * i <= n:
		if n % i == 0:
			d.append(i)
			if i != n // i:
				d.append(n // i)
		i = i + 1
	return d

def gcd(a, b):
	if b == 0:
		return a
	else:
		return gcd(b, a % b)

n = int(input())
while n != 0:
	cnt = 1
	x = divisors(n)
	for i in range(0, len(x)):
		for j in range(i + 1, len(x)):
			if (x[i] * x[j]) // gcd(x[i], x[j]) == n:
				cnt = cnt + 1
	print(n, cnt)
	n = int(input())
