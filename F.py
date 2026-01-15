n = int(input())
L = {}
city_crimes = {}

for i in range(n):
    name, city = input().split()
    L[name] = city
    city_crimes[city] = 0

q = int(input())

for j in range(q):
    name, crime_count = input().split()
    crime_count = int(crime_count)
    city_crimes[L[name]] += crime_count

max_crimes = 0
result_city = ""
for city, count in city_crimes.items():
    if count > max_crimes:
        max_crimes = count
        result_city = city

print(result_city)
