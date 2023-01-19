#include<iostream>
using namespace std ;
class abcd
{
	public :
	float a,b;
	
		void data()
		{
			cout<<"Enter Value of A : ";
			cin>>a;
	
			cout<<"Enter Value of B : ";
			cin>>b;
			
		}
		
		void display()
		{
			if(a>b)
			{
				cout<<"\n\nMax Value Is A : "<<a;
			}
			else if(a<b)
			{
				cout<<"\nMax Value Is B : "<<b;
			
			}
			else
			{
				cout<<"\n\nBoth Valuse Are Same";
			}
		}
};

main()
{
	abcd a;
	a.data();
	a.display();
}
