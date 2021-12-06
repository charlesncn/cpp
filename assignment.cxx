#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double hypotenuse(double base, double height); //function prototype

int main()
{
	double result, base, height;	
	int size;
	cout<<"Enter value for number of triangles to solve  ";
	cin>>size;
   double n[ size ]; // n is an array of size 'size'
   double m[size];
   double hp[size];
   //double base, height;
   // initialize elements of array n to 0          
   for ( int i = 0; i < size; i++ ) {
   	cout<<"Enter value for the base of the triangle  ";
		cin>>base;
		cout<<"Enter the value of the height of the triangle ";
		cin>>height;
		result =  hypotenuse(base, height);//function call
      n[ i ] = base; // set element at location i to base
      m[ i ] = height;// set element at location i to height
      hp[i]=result;// set element at location i to result
   }
      cout << setw(10)<<"Triangle" << setw(10) << "Base"<< setw(10) <<"Height"<<setw(15)<<"Hypotenuse"<<endl;
   // output each array element's value                      
   for ( int j = 0; j < size; j++ ) {
   	
      cout << setprecision(3)<<fixed<<setw(10)<< j+1<< setw(10) << n[ j ] << setw(10) <<m[j]<<setw(15)<<hp[j]<<endl;
   }		

	return 0;
};
double hypotenuse(double base, double height){ //function definition
double hpt =sqrt((base*base)+(height*height));
return(hpt);	
}