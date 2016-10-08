#include<iostream>
#include<cmath>
#include <fstream>

using namespace std;

int main(){
    ifstream f("input.txt");
    
    int n, i,x=0;
    
    while (f>>n){
    	for (i=0;i<n;i++){
    	if((i%3==0)||(i%5==0)){
    		x=x+i;
		}
	}     
    }
    cout<<x;
}   
