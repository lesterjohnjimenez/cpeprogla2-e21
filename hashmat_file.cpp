#include<iostream>
#include<cmath>
#include <fstream>

using namespace std;

int main(){
    ifstream f("input.txt");
    
    int hashmat, opponent;
    
    while (f >> hashmat >> opponent) {
          cout << abs(hashmat-opponent) << endl;      
    }
    
    //hclose(h);
    system("pause");
    return 0;
}   
