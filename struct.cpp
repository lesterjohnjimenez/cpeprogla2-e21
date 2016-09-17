#include<iostream>
#include<iomanip>
using namespace std;

struct item{
	int id, contact, price1, quantity;
	char name [20];
	char day [20];
	char month [20];
	char name1 [20];
	double price;
};
int main()
{
	item itm[3];
	int i;
	cout<<"Enter 3 customers: ";
	for(i=0; i<3; i++)
{
	cout<<"\n CUSTOMER INFORMATION " << (i+1) << endl;
	cout<< "First Name: ";
	cin>> itm[i].name;
	cin.ignore();
	cout<< "Last Name: ";
	cin.getline(itm[i].name, 49);
	cin.ignore();
	{
	cout<< "Contact No: ";
	cin>> itm[1].contact;
	cout<< "Order date:\n Day: ";
	cin>> itm[i].day;
	cout<< "Month: ";
	cin>> itm[i].month;
	cout<< "Year: ";
	cin>> itm[i].name;
	cout<< "ENTER 3 ITEMS:\n ID: ";
	cin>> itm[i].id;
	cout<< "Name: ";
	cin>> itm[i].name1;
	cout<< "Price: ";
	cin>> itm[i].price1;
	cout<< "Quantity: ";
	cin>> itm[i].quantity;
}
}
	cout<<"\n****SUMMARY REPORT****";
	cout<<setw(10)<<"\n#"
		<<setw(30)<<"Customer Name"
		<<setw(20)<<"Order Date"
		<<setw(15)<<"Item"
		<<setw(15)<<"Price"
		<<setw(15)<<"Quantity";
		
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	for(i=0; i<3; i++)
	{
		cout<< endl;
		cout<< setw(10) << i+1
			<<setw(30) << itm[i].id
			<<setw(20)<< itm[i].name
			<<setw(15) << itm[i].price;
	}
		system("pause>0");
		return 0;
}
