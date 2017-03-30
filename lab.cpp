#include<iostream>
#include "lab.h"
#include<math.h>
using namespace std;
   
 lab:: lab(double a,double b,double c){
 k=a;
 ra=b;
 rb=c;
 
   }  
    
void lab::set(double SA)

{
	double EA,EB,SB;
	SB=1-SA;
	EA=1/(1+pow(10,(rb-ra)/400));
    EB=1/(1+pow(10,(ra-rb)/400));
	ra=ra+k*(SA-EA);
	rb=rb+k*(SB-EB);	
} 

 double lab::get1(){
 	return ra;
 }
 double lab::get2(){
 	return rb;
 }
