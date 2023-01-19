#include<iostream>
using namespace std ;
class abcd
{
	public :
	int a,b;
	
		void data()
		{
			cout<<"Enter Value of A : ";
			cin>>a;
	
			cout<<"Enter Value of B : ";
			cin>>b;
			
		}
		
		void display()
		{
			a=a-b;
			b=a+b;
			a=b-a;
			
			cout<<"\n\nValue of A : "<<a;
			cout<<"\nValue of B : "<<b;
			
		}
};

main()
{
	abcd a;
	a.data();
	a.display();
}
