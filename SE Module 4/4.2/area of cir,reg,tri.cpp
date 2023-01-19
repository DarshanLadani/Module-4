/* Write a program to calculate the area of circle, rectangle and triangle using
 Function Overloading
 Rectangle: Area * breadth
 Triangle: ½ *Area* breadth
 Circle: Pi * Area *Area
*/

#include<iostream>
using namespace std;

class crt
{
	public :
		void circle(float rad)
		{
			float area;

			area=3.14*rad*rad;
			
			cout<<"Area Of Circul : "<<area;
		}
		
		void Rectangle(float length,float breadth)
		{
			float area;
			
			area=length*breadth;
			
			cout<<"Area Of Rectangle : "<<area;	
		}
		
		void Triangle(float base,float hight)
		{
			float area;
			
			area=base*hight;
			
			cout<<"Area Of Triangle : "<<area;	
		}		
};

main()
{
	int n;
	menu :
		{
			cout<<"\tEnter Your Choice \n\n1) Area Of Circul \n2) Area Of Rectangle \n3)Area Of Triangle \n4)Exit \n";
			cin>>n;
		}
		
	crt a;
		
	switch(n)
	{
			case 1:
		{
			a.circle(2.5);
			break ;
		}
		
	case 2:
		{
			a.Rectangle(5,4);
			break ;
		}
		
	case 3:
		{
			a.Triangle(2,3);
			break ;
		}
		
	case 4:
		{
			goto by;
		}
		
	default :
	{
		cout<<"\nEnter Valid Input";
		goto menu;
	}
	by :
		{
			cout<<"Thank You";
		}
	}
}
