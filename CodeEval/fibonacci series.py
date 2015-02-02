import sys
a=[0,1]
for i in range (2,500):
	a.append(a[i-1]+a[i-2])
	
test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    print (a[int(test)])
test_cases.close()
