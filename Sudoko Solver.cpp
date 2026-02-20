#include<iostream>
using namespace std;
#define N 9
bool check(int g[N][N],int r,int c,int num){
	for(int i=0;i<N;i++){
		if(g[r][i]==num||g[i][c]==num)
			return false;
	}
	int srow=r-r%3,scol=c-c%3;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(g[srow+i][scol+j]==num)
				return false;
		}
		return true;
	}
}
bool solve(int g[N][N]){
		for(int r=0;r<N;r++){
			for(int c=0;c<N;c++){
				if(g[r][c]==0){
					for(int n=1;n<=9;n++){
						if(check(g,r,c,n)){
							g[r][c]=n;
							if(solve(g))
								return true;
							g[r][c]=0;
						}
					}
					return false;
				}
			}
		}
		return true;
}
void unsolved(int g[9][9]){
	cout<<"UNSOLVED SUDOKO:\n";
	for(int i=0;i<9;i++){
		if(i%3==0)
			cout<<"---------------------------\n";
		for(int j=0;j<9;j++){
			if(j%3==0)
				cout<<"|";
			if(g[i][j]==0)
				cout<<"_ ";
			else
				cout<<g[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"---------------------------"<<endl;
}
void solved(int g[9][9]){
	cout<<"SOLVED SUDOKO:\n";
	for(int i=0;i<9;i++){
		if(i%3==0)
			cout<<"---------------------------\n";
		for(int j=0;j<9;j++){
			if(j%3==0)
				cout<<"|";
			cout<<g[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"---------------------------\n";
}
int main(){
	int g[N][N]={{5,3,0,0,7,0,0,0,0},{6,0,0,1,9,5,0,0,0},{0,9,8,0,0,0,0,6,0},{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},{7,0,0,0,2,0,0,0,6},{0,6,0,0,0,0,2,8,0},{0,0,0,4,1,9,0,0,5},{0,0,0,0,8,0,0,7,9}};
	unsolved(g);
	if(solve(g)){
		solved(g);
	}else{
		cout<<"No solution exists";
	}
}

