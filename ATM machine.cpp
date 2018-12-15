#include <iostream>
#include<string>
using namespace std;
int main() {
    float deposite, balance, withdraw;
    balance=0;
    char pswrd[20] , ch;
    int input, num;
    char name[100];
    
	cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your four digit pin"<<endl;
    
     //*********************TO HIDE PASSWORD***************
 
    int i=0;
    while((pswrd[i]=getch())!='\r')
    {
    cout<<"*";
    i++;
    }

 
 /*
    ch = _getch();
    while(ch != 13)   //character 13 is enter
	{
    pass.push_back(ch);
    cout << '*';
    ch = _getch();
    }*/
    
    
    
    cout.width(30);
    cout<<"Welcome "<<name<<" to ISHU BANK"<<endl;
    //cout.width(20);
    cout<<"1. Balance";
	cout.width(40);
	cout<<"2. Deposite"<<endl;
	//cout.width(20);
	cout<<"3. Withdraw";
	cout.width(34);
	cout<<"4. -69"<<endl ;
	cout.width(40);
	cout<<"Enter your choice";
    cin>>input;
    while(input!=-69)
    {
    switch(input)
    {
    case 1 : cout<<"The current Balance of your account is  "<<balance<<endl;
    break;
    case 2 : cout<<"Desposite the amount  ";
    cin>>deposite;
    balance = balance+deposite;
    cout<<"You have deposited "<<deposite<<endl;
    break;
    case 3 : cout<<"Enter the amount you want to Withdraw";
    cin>>withdraw;
    balance=balance-withdraw;
    cout<<"You have withdraw "<<withdraw<<endl<<"The current account balance is "<<balance<<endl;
    break;
    case 4 : cout<<"Have a nice day"<<endl;
    break;
	cout<<"You have put wrong input"<<endl;
    }
    cout.width(40);
    cout<<"Enter your choice"<<endl;
    cin>>input;
    }
	return 0;
}
