#include <iostream>
using namespace std;

int main(){

	int number;
	for (number = 1; number < 101; number++){
		if (number%3!=0 && number%5!=0){
            cout<<number;
            cout<<"\n";
		}
		else if (number%3==0 && number%5!=0){
            cout<<"Fizz ";
            cout<<"\n";
		}
		else if (number%5==0 && number%3!=0){
            cout<<"Buzz ";
            cout<<"\n";
 		}
        else if (number%3==0 && number%5==0){
            cout<<"FizzBuzz ";
            cout<<"\n";
        	}
	}
return 0;
}
