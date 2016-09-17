#include<iostream>
#include<string.h>
using namespace std;
char str1[100], str2[200], word[100];
int a, flag, choice;
void choice1();
void choice2();
void choice3();
void choice4();
void choice5();
void choice6();
int choose(int chooser);

void choice1() {
	cout<<"***STRING COMPARE***\n";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	if(strcmp(str1,str2)==0) cout<<"equal =)\n";
	else if(strcmp(str1,str2)>0) cout<<"positive +_+\n";
	else if(strcmp(str1,str2)<0) cout<<"negative -.-\n";
}

void choice2() {
	cout<<"***STRING COPY***\n";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	cout<<"New string value for str1: "<<strcpy(str1, str2);
}

void choice3() {
	cout<<"***STRING CONCATENATION***\n";
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	cout<<"New string value for str1: "<<strcat(str1, str2);
}

void choice4() {
	cout<<"***PALINDROME***\n";
	cin.ignore();
	cout<<"Enter a word: ";
	gets(word);
	a=strlen(word);
	for(int i=0;i<a;i++) {
		if(word[i]!=word[a-(i+1)]) flag=0;
		else flag=1;
    }
    if (flag==1) cout<<"The word "<<word<<" is a palindrome!";
    else if (flag==0) cout<<"The word "<<word<<" is *NOT* a palindrome!";
}

void choice5() {
	cout<<"***CAPITALIZATION***\n";
	cin.ignore();
	cout<<"Enter a word: ";
	gets(word);
	strlwr(word);
	word[0]-=32;
	for(int i=0;i<strlen(word);i++) {
		if(word[i]==32) word[i+1]-=32;
	}
	cout<<word<<endl;
}

void choice6() {
	cout<<"***REVERSE VERTICAL ORDER***\n";
	cin.ignore();
	cout<<"Enter a phrase: ";
	gets(word);
	a=strlen(word);
	for(int i=a;i>=0;i--) {
		if (word[i]==32) {
			int j=i+1;
			while(word[j]!=32&&j<a) {
				cout<<word[j];
				j++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(word[k]!=32) {
		cout<<word[k];
		k++;
	}
}

int choose(int choice) {
	cout<<"Choose a number to solve [1-6]...\n[1] String Compare\n[2] String Copy\n[3] String Concatenation\n[4] Palindrome\n[5] Capitalization\n[6] Reverse Vertical Order\n ";
	cin>>choice;
	switch(choice) {
		case 1:
			choice1();
			break;
		case 2:
			choice2();
			break;
		case 3:
			choice3();
			break;
		case 4:
			choice4();
			break;
		case 5:
			choice5();
			break;
		case 6:
			choice6();
			break;
		default:
			break;
	}
	return choice;
}

main() {
	choose(choice);
}
