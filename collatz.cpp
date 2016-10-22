#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main ()
{
	int collatz,x,y,cycleLength,maxcycleLength;	
	ifstream f("input.txt");
	while(f>>x>>y){
	
		int x,y;
		x=x<=y?x:y;
		y=x<=y?y:x; 
		cycleLength=0;
		maxcycleLength=0;		
		for(int value=x;value<=y;value++)
		{
			cycleLength=0;
			int value2=value;			
			while(value2!=1)
			{
				if(value2%2 ==1) { value2 = value2*3 +1; cycleLength++;	}
				else{
				value2/= 2;cycleLength++;
				}
			}
			cycleLength++;
			if(cycleLength>maxcycleLength)maxcycleLength=maxcycleLength=cycleLength;
		}		
		cout<<x<<" "<<y<<" "<<maxcycleLength<<"\n";
	}
	
	}
