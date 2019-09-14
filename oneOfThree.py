# The program is to find out numbers that appear only once in the array. Elements may appear either once or thrice.
arr = [1,1,1,3,2,2,2,5,4,4,4]
count = 0

for i in range(0,len(arr)-1):
    if arr[i] == arr[i+1]:
        count += 1
    else:
        if count > 1:
            count = 0
        else:
            print(arr[i])