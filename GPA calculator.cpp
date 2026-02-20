#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,c[10],gp,totc=0;
	string g[10];
	float cgpa,totg;
	cout<<"Enter the number of courses:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter the grade for course "<<i+1<<":";
		cin>>g[i];
		cout<<"Enter the credits for course "<<i+1<<":";
		cin>>c[i];
	}
	cout<<"\n      COURSE DETAILS \n";
	cout<<"----------------------------------"<<endl;
	cout<<left<<setw(10)<<"Course ";
    cout<<left<<setw(10)<<"Grade ";
	cout<<left<<setw(9)<<"Credits  "<<endl;
	cout<<"----------------------------------"<<endl;
	for(int i=0;i<n;i++){
		if(g[i]=="O")
		gp=10;
		else if(g[i]=="A+")
		gp=9;
		else if(g[i]=="A")
		gp=8;
		else if(g[i]=="B+")
		gp=7;
		else if(g[i]=="B")
		gp=6;
		else if(g[i]=="C")
		gp=5;
		totg+=gp*c[i];
		totc+=c[i];
		cout<<left<<setw(10)<<i+1;
		cout<<setw(10)<<g[i];
		cout<<setw(9)<<c[i]<<endl;
		cgpa=totg/totc;
	}
	cout<<"----------------------------------"<<endl;
	cout<<"\n Total CGPA :"<<fixed<<setprecision(2)<<cgpa;
	return 0;
}
