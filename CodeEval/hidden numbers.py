def getDigits(string):
	ans=''
	for char in string:
		if(char>='a' and char<='j'):
			ans=ans+str(ord(char)-ord('a'))
		elif(char>='0' and char <='9'):
			ans=ans+char
	if(ans==''):
		return 'NONE'
	else:
		return ans
if __name__=='__main__':
	string=raw_input()
	print (getDigits(string))
