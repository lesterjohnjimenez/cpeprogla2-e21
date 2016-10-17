#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream f("input.txt");
	
	int x;
	FILE *fp;
	fp=fopen("input.txt","r");
	
	if(!fp)
	{
		cout << "File not found! " << endl;
		system("pause");
		exit(1);
		
	}
	
	while(f>>x)
	{
	if (x%3!=0&&x%5==0)
		cout << "Buzz" << endl;
	else if (x%5!=0&&x%3==0)
		cout << "Fizz" << endl;
	else if (x%3==0&&x%5==0)
		cout << "FizzBuzz" << endl;
	else 
	cout << x << endl;
	}
}
