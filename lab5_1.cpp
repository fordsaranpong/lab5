#include<iostream>
using namespace std;

int main(){
	int num=1,even=0,odd=0;
    while(num!=0){
    cout << "Enter an integer: ";
    cin>> num;
    
	if(num%2==0 and num!=0){
		even++;}
	if(num%2!=0 and num!=0){
		odd++;}  
	}
    cout << "#Even numbers = "<<even<<"\n";
    cout << "#Odd numbers = "<<odd<<"\n";
    return 0;
}