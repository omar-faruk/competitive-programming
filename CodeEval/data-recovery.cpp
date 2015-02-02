#include <bits/stdc++.h>

#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n);
#define READ(a) freopen(a,"r",stdin)
#define WRITE(a) freopen(a,"w",stdout)

using namespace std;

int toInt(string s){
	int num=0;
	
	for(int i=0;i<int(s.size());i++){
		num=(num*10)+(s[i]-'0');
	}
	return num;
}

int main(int argc, char *argv[])
{
	string data[1002],word,line,ans[1002];
	char filename[100];
	bool end;
	int sequence[1002],i,totalWords,j;
	
	READ(argv[1]);
	
	while(getline(cin,line)){
		
			memset(sequence,0,sizeof sequence);
			totalWords=0,j=0;
			end=false;
			word.clear();
			
			for(i=0;i<int(line.size());i++){
				if(line[i]==' '){
					if(end){
						sequence[++j]=toInt(word);
						word.clear();
					}
					else{
						data[++totalWords]=word;
						word.clear();
					}
				}
				else if(line[i]==';'){
					data[++totalWords]=word;
					word.clear();
					end=true;
				}
				else word+=line[i];
				
				if(i==int(line.size())-1){
					sequence[++j]=toInt(word);
					word.clear();
				}
			}

			for(i=1;i<=totalWords;i++){
				ans[sequence[i]]+=data[i];
			}
			
			for(i=1;i<=totalWords;i++){
				if(ans[i]==""){
					cout<<data[totalWords]<<" ";
				}
				else cout<<ans[i]<<" ";
				ans[i].clear();
			}
			cout<<endl;
			
	}
	return 0;
}
//programs Manchester The written ran Mark 1952 1 in Autocode from;6 2 1 7 5 3 11 4 8 9
