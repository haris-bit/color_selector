#include<iostream>
#include<string>
#include<cstring>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	string name;
	int age = 0;
	string color;
	char gend;
	cout<<"Enter your full name:"<<endl;
	getline(cin, name);
	cout<<"How old are you?"<<endl;
	cin>>age;
	cout<<"What's your favorite color?"<<endl;
	cin>>color;
	cout<<"Are you a boy or a girl?(b/g)"<<endl;
	cin>>gend;
	if(gend=='b'|gend=='B')
	{
		if(color=="blue"){
			system("color 90");
			cout<<name<<" is a boy who is "<<age<<" years old and likes the color "<<color<<"!"<<endl;
		}
		else if(color=="green"){
			system("color A2");
			cout<<name<<" is a boy who is "<<age<<" years old and likes the color "<<color<<"!"<<endl;
		}
		else if(color=="red"){
			system("color C4");
			cout<<name<<" is a boy who is "<<age<<" years old and likes the color "<<color<<"!"<<endl;
		}
		else{
			system("color E6");
			cout<<name<<" is a boy who is "<<age<<" years old and likes the color "<<color<<"!"<<endl;
		}
	
	}
	else
	{
		if(color=="pink"){
			system("color D5");
			cout<<name<<" is a girl who is "<<age<<" years old and likes the color "<<color<<"!"<<endl;
		}
		else if(color=="purple"){
			system("color 50");
			cout<<name<<" is a girl who is "<<age<<" years old and likes the color "<<color<<"!"<<endl;
		}
		else if(color=="red"){
			system("color C4");
			cout<<name<<" is a girl who is "<<age<<" years old and likes the color "<<color<<"!"<<endl;
		}
		else if(color=="yellow"){
			system("color E6");
			cout<<name<<" is a girl who is "<<age<<" years old and likes the color "<<color<<"!"<<endl;
		}
		else{
			system("color 78");
			cout<<name<<" is a girl who is "<<age<<" years old and likes the color "<<color<<"!"<<endl;
	
		}
	}
	return 0;
}
