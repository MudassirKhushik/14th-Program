//Prompt the user to enter his/her university Name : 
#include <iostream>
using namespace std;
int main (){
	
	string uniname;
	cout << "Enter your University name : " ;
	getline (cin, uniname);
	
	cout << "Your University Name is " << uniname << endl;
	
	return 0;
}
