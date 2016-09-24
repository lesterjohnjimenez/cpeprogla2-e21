//jimenez
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int chooser;
float total=0;
int choose(int chooser);
void problem1();
void problem2();
void probelm3();

struct customer {
	char fullname[20];
	char lastname[10];
	char cnum[10];
	int day;
	int month;
	int year;
	struct {
		int id;
		char item[20];
		float price;
		int qty;
	}stuff[3];
} customers[3];

struct studs {
	char id[3];
	char name[50];
	int quiz[3];
	float grade;
} studs[5];

struct record {
	char id[5];
	char name[50];
	int q1;
	int q2;
	int q3;
	float grades;
} student;

void problem1() {
	cout<<"Enter Student Record:\n";
	cout<<"ID: ";
	cin>>student.id;
	cout<<"Name: ";
	cin.ignore();
	gets(student.name);
	cout<<"Quiz 1: ";
	cin>>student.q1;
	cout<<"Quiz 2: ";
	cin>>student.q2;
	cout<<"Quiz 3: ";
	cin>>student.q3;
	cout<<"\nStudent Record:\n";
	cout<<"ID: "<<student.id<<endl;
	cout<<"Name: "<<student.name<<endl;
	student.grades = (float) (student.q1+student.q2+student.q3)/3;
	cout<<"Grades: "<<student.grades<<endl;
	if (student.grades>=70) cout<<"Remarks: Passed\n";
	else if (student.grades<70) cout<<"Remarks: Failed\n";
}

void problem2() {
	for(int i=0;i<5;i++) {
		cout<<"\nStudent "<<i+1<<endl;
		cout<<"ID: ";
		cin>>studs[i].id;
		cout<<"Name: ";
		cin.ignore();
		gets(studs[i].name);
		cout<<"Enter 3 quize(s): ";
		for(int j=0;j<3;j++) {
			cin>>studs[i].quiz[j];
		}
		cout<<"\n";
	}
	cout<<"\n  No.    Student No.                    Name          Grade        Remark\n";
	for(int k=0;k<5;k++) {
		cout<<setw(3)<<"   "<<k+1;
		cout<<setw(15)<< studs[k].id;
		cout<<setw(25)<< studs[k].name;
		studs[k].grade=(float)(studs[k].quiz[1]+studs[k].quiz[2]+studs[k].quiz[3])/3;
		cout<<setw(15)<<fixed<<setprecision(2)<<studs[k].grade;
		if (studs[k].grade>=70) cout<<setw(15)<<"Passed\n";
		else if (studs[k].grade<70) cout<<setw(15)<<"Failed\n";
	}
}

void problem3() {
	for(int x=0;x<3;x++) {
		cout<<"CUSTOMER INFORMATION "<<x+1<<endl;
		cout<<"\tFirst Name: ";
		cin.ignore();
		gets(customers[x].fullname);
		cout<<"\tLast Name: ";
		gets(customers[x].lastname);
		cout<<"\tContact No.: ";
		cin>>customers[x].cnum;
		cout<<"Order date:\n\tDay: ";
		cin>>customers[x].day;
		cout<<"\tMonth: ";
		cin>>customers[x].month;
		cout<<"\tYear: ";
		cin>>customers[x].year;
		cout<<"Enter three items: \n";
		for(int y=0;y<3;y++) {
			cout<<"ID: ";
			cin>>customers[x].stuff[y].id;
			cout<<"\tName: ";
			cin.ignore();
			gets(customers[x].stuff[y].item);
			cout<<"\tPrice: ";
			cin>>customers[x].stuff[y].price;
			cout<<"\tQuantity: ";
			cin>>customers[x].stuff[y].qty;
		}
		cout<<endl;
		system("cls");
	}
	cout<<"\nSUMMARY REPORT\n #   Customer Name\t\tOrder Date\t Items\t\tPrices\t\t    Quantity\n";
	for(int x=0;x<3;x++) {
		cout<<" "<<x+1;
		cout<<"   "<<customers[x].lastname<<", ";
		cout<<customers[x].fullname;
		cout<<"\t\t\t"<<customers[x].month<<"/"<<customers[x].day<<"/"<<customers[x].year<<endl;
		for(int y=0;y<3;y++) {
			cout<<"\t\t\t\t\t\t";
			cout<<setw(6)<<right<<customers[x].stuff[x].item;
			cout<<"\t\t";
			cout<<setw(6)<<right<<showpoint<<fixed<<setprecision(2)<<customers[x].stuff[y].price;
			cout<<"\t\t";
			cout<<setw(8)<<right<<customers[x].stuff[y].qty<<" pcs."<<endl;
			total += (float) (customers[x].stuff[y].price*customers[x].stuff[y].qty);
		}
		cout<<"\t\t\t\t\t\t\t\tTOTAL: "<<setw(5)<<right<<showpoint<<fixed<<setprecision(2)<<total<<endl;
	}
	
}

int choose(int chooser) {
	cout<<"**LABORATORY 5**\n";
	cout<<"Choose a problem # to solve [1] [2] [3]\n" ;
	cin>>chooser;
	switch(chooser) {
		case 1:
			problem1();
			break;
		case 2:
			problem2();
			break;
		case 3:
			problem3();
			break;
		default:
			break;
	}
	return chooser;
}

main() {
	choose(chooser);
}
