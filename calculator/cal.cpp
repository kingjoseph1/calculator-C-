#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
char op;
float num1,num2;
cout << "Enter operators :*/-+" "\n";	
cin  >> op;

cout << "Enter two numbers:""\n";
cin  >> num1>> num2;


switch (op){
	case '*':
	cout << num1<< "*" << num2<<"="<<num1*num2;
	break;
	
    case '/' :
    cout << num1<< "/"<< num2<<"="<<num1/num2;
    break;
    
    case '-':
    cout << num1<< "-" << num2<<"="<<num1-num2;
    break;
    
    case'+':
    cout << num1<< "+"<< num2<<"="<<num1+num2;
    break;
    
    cout << "Error operator";
    break;
	return 0;
}
}
