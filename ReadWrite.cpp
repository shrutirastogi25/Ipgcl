#include <iostream>
#include <fstream>
using namespace std;

class data{
	public:
	void addData(string date){
		float reactive_daily,reactive_maxLoad;
		int reactive_hours;
		ofstream f("text.csv");
		cout<<"Enter daily\n";
		cin>>reactive_daily;
		cout<<"\nEnter max load\n";
		cin>>reactive_maxLoad;
		cout<<"\nEnter hours\n";
		cin>>reactive_hours;
		if(f){
			f<<reactive_daily<<","<<reactive_maxLoad<<","<<reactive_hours;
			f<<endl;
		}	 	 
	}
};

int main()
{
	data d;
	char ch='y';
	int choice;
	string date;
	while(ch=='y'||ch=='Y'){
		cout<<"\nMENU\n";
		cout<<"1.Add data to a specific date";
		cout<<"\n2.Display data of a particular date";
		cout<<"\n3.Open master data\n";
		cout<<"Enter choice 1-3\n";
		cin>>choice;
		switch(choice){
			case 1:cout<<"\nEnter date in a specific format (DD/MM/YYYY)\n";
					cin>>date;
					d.addData(date);
					break;
			case 2:cout<<"\nEnter date you wish to make file for. (DD/MM/YYYY)\n";
					cin>>date;
					break;
			case 3:cout<<"\nOpening File";
					break;
			default:cout<<"\nInvalid Choice";
		}
		cout<<"\nDo you wish to continue?(y/n)\n";
		cin>>ch;
	}
} 

