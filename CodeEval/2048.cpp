#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
using namespace std;
int grid[20][20];

void printGrid(int grid_size){
	int i,j;
	for(i=1;i<=grid_size;i++){
		for(j=1;j<=grid_size;j++){
			cout<<grid[i][j];
			if(j<grid_size){
				cout<<" ";
			}
		}
		if(i<grid_size){
			cout<<'|';
		}
		else cout<<endl;
	}
}
void printVector(vector<int>v){
	for(int i=0;i<int(v.size());i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void UP(int size){
	
	vector<int>v[40];
	int check[40][40];
	memset(check,0,sizeof check);
	int row,col;
	
	for(col=1;col<=size;col++){
		for(row=1;row<=size;row++){
			if(grid[row][col]!=0){
				if(v[col].size()!=0 && v[col][v[col].size()-1]==grid[row][col] && check[col][v[col].size()-1]==0){
					v[col][v[col].size()-1]*=2;
					check[col][v[col].size()-1]++;
				}
				else v[col].push_back(grid[row][col]);
			}
		}
	}
	
	for(col=1;col<=size;col++){
		for(row=1;row<=size;row++){
			if(row-1<int(v[col].size())){
				grid[row][col]=v[col][row-1];
			}
			else {
				grid[row][col]=0;
			}
		}
	}
	printGrid(size);
	
}


void DOWN(int size){
	vector<int>v[40];
	int check[40][40];
	memset(check,0,sizeof check);
	int row,col;
	
	for(col=1;col<=size;col++){
		for(row=size;row>=1;row--){
			if(grid[row][col]!=0){
				if(v[col].size()!=0 && v[col][v[col].size()-1]==grid[row][col] && check[col][v[col].size()-1]==0){
					v[col][v[col].size()-1]*=2;
					check[col][v[col].size()-1]++;
				}
				else v[col].push_back(grid[row][col]);
			}
		}
	}
	
	for(col=1;col<=size;col++){
		for(row=size;row>=1;row--){
			if(size-row<int(v[col].size())){
				grid[row][col]=v[col][size-row];
			}
			else grid[row][col]=0;
		}
	}
	printGrid(size);
}

void RIGHT(int size){
	vector<int>v[40];
	int check[40][40];
	memset(check,0,sizeof check);
	int row,col;
	
	for(row=1;row<=size;row++){
		for(col=size;col>=1;col--){
			if(grid[row][col]!=0){
				if(v[row].size()!=0 && v[row][v[row].size()-1]==grid[row][col] && check[row][v[row].size()-1]==0){
					v[row][v[row].size()-1]*=2;
					check[row][v[row].size()-1]++;
				}
				else v[row].push_back(grid[row][col]);
			}
		}
	}
	for(row=1;row<=size;row++){
		for(col=size;col>=0;col--){
			if(size-col<int(v[row].size())){
				grid[row][col]=v[row][size-col];
			}
			else grid[row][col]=0;
		}
	}
	printGrid(size);
	
}

void LEFT(int size){
	vector<int>v[40];
	int check[40][40];
	memset(check,0,sizeof check);
	int row,col;
	
	for(row=1;row<=size;row++){
		for(col=1;col<=size;col++){
			if(grid[row][col]!=0){
				if(v[row].size()!=0 && v[row][v[row].size()-1]==grid[row][col] && check[row][v[row].size()-1]==0){
					v[row][v[row].size()-1]*=2;
					check[row][v[row].size()-1]++;
				}
				else v[row].push_back(grid[row][col]);
			}
		}
	}
	for(row=1;row<=size;row++){
		for(col=1;col<=size;col++){
			if(col<=int(v[row].size())){
				grid[row][col]=v[row][col-1];
			}
			else grid[row][col]=0;
		}
	}
	printGrid(size);
}

int main(int argc, char *argv[])
{
	string direction;
	char temp;
	int grid_size,i,j;
	freopen(argv[1],"r",stdin);
		while(cin>>direction){
			cin>>grid_size>>temp;
			memset(grid,0,sizeof grid);
			for(i=1;i<=grid_size;i++){
				for(j=1;j<=grid_size;j++){
					cin>>grid[i][j];
			}
			if(i<grid_size) cin>>temp;
		}
		
		if(direction=="UP;"){
			UP(grid_size);
		}
		if(direction=="DOWN;"){
			DOWN(grid_size);
		}
		if(direction=="LEFT;"){
			LEFT(grid_size);
		}
		if(direction=="RIGHT;"){
			RIGHT(grid_size);
		}
	}
	
	return 0;
}

