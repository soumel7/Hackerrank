n = int(input())

arr = input().split()
arr1 = map(int,arr)
arr1 = set(list(arr1))
arr1 = sorted(arr1)
print(arr1[-2])



