#include<iostream>
#include<fstream>
#include"lab.h"
using namespace std;

int main()
{
	double x,y,z,d;
	ifstream in("file.in.txt",ios::in);
	in>>x>>y>>z;
	lab haha(x,y,z);
	ofstream out("file.out.txt",ios::out);
	while(in>>d){
		haha.set(d);
	out<<haha.get1()<<' '<<haha.get2()<<endl;
		   
			
			
		
	}
	
	
	
}
