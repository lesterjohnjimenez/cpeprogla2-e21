#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

double problem1(double num){
	cout<<"Enter number to round off: ";
	cin>>num;
	cout<<"Rounded value: "<<round(num)<<"\n\n";
	return round(num);
}

void problem2(){
	int uniques[] = {0,0,0,0,0,0,0,0,0,0};
	int num;
	srand((unsigned)time(0)); 
	for(int i=0;i<10;i++){
		num=(rand()%21);
		for(int j=0;j<10;j++){
			if(num==uniques[j]){
					num=(rand()%21);
			}
			else{
				uniques[i] = num;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout << uniques[i]<<" ";
	}
}

void call_by_value(){
	int n, result=1;
	cout<<"\n\nGet the factorial of the number: ";
	cin>>n;
	for(int i=1;i<n+1;i++) {
		if(n==0) cout<<" Result: 1\n";
		else result=result*i;
	}
	cout<<"Result: "<<result<<endl;
}

main(){
	double num;
	int result;
	problem1(num);
	problem2();
	call_by_value();
}




