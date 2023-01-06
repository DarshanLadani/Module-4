/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */
#include<iostream>
using namespace std;

class cricket
{
	public :
		
		char name[999];
		int totalrun,notout,mostrun,innings;
		
		void data()
		{
			cout<<"Enter Name : ";
			gets(name);
			
			cout<<"Enter Total Run : ";
			cin>>totalrun;
			cout<<"Enter Most Run : ";
			cin>>mostrun;	
			cout<<"Enter Total Innings : ";
			cin>>innings;
			cout<<"Enter Notout Ennings : ";
			cin>>notout;	
		 } 
};

class batsman : public cricket
{
	public :
		int avgrun;
		
		void result()
		{
			avgrun=totalrun/(innings-notout);
			
			puts(name);
			cout<<"\n\nTotal Run : "<<totalrun;
			cout<<"\nMost Run : "<<mostrun;
			cout<<"\nTotal Innings : "<<innings;
			cout<<"\nAverage Runs : "<<avgrun;
		}
};

main()
{
	batsman b;
	b.data();
	b.result();
}
