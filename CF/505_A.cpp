#include <bits/stdc++.h>

using namespace std;

inline string substr(string s,int st,int end){
	string str="";
	if(st>end){
		return str;
	}
	for(int i=st;i<=end;i++){
		str+=s[i];
	}
	return str;
}
inline bool isPalindrome(string s){
	int j,i;
	for(j=s.size()-1,i=0;i<j;i++,j--){
		if(s[i]!=s[j]){
			return false;
		}
	}
	return true;
}
int main()
{
	string s,s1,s2;
	int i,j,i_index,j_index,counter;
	while(cin>>s){
		
		counter=0;
		
		for(i=0,j=s.size()-1;i<j;i++,j--){
			if(s[i]!=s[j]){
				counter++;
				j_index=j;
				i_index=i;
			}
		}
		if(isPalindrome(s) && s.size()%2==0){
				for(i=0;i<int(s.size());i++){
					if(i==int(s.size())/2){
						cout<<"a";
					}
					cout<<s[i];
				}
				cout<<endl;
			}
		else{
			if(i_index==0){
				s+=s[0];
				cout<<s<<endl;
			}
			else{
				s1=substr(s,0,j);
				s2=substr(s,j+1,s.size());
				cout<<s1<<s[i_index]<<s2<<endl;
			}
		}
			
	}
	
	
	return 0;
}
