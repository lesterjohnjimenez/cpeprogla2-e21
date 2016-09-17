#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y,z,T[3];
	for (x=0; x<3; x++)
	{
		cin>>y>>z;
		T[x]=abs(y-z);
	}
	cout<<T[0]<<endl<<T[1]<<endl<<T[2]<< endl;
	return 0;
}
