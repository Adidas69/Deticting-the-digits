#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

int number,digit, largest=0,m, counter=0;
cout<<"Enter your number: ";
cin>>number;
m=number;
while(number>0)
{
	digit= number%10;
	number/=10;
	if(digit>largest)
		largest=digit;
	counter++;	
}

cout<<"\n This number consists of : "<<counter<<" digits";






	return 0;
}

