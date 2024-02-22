#include <iostream>
//cmath must be included cause play with math calculation
#include <cmath>
using namespace std;

int main(){
	int choice;
	double radius, length, width, area;
	//PI was not declare
	const double PI = 3.14;

	cout << " Choose a shape to calculate its area: " << endl;
	cout << " 1. Circle " << endl;
	cout << " 2. Rectangle " << endl;
	cout << " Enter your choice ( 1 or 2) : ";
	cin >> choice;
	
	if (choice == 1 ){
		cout << " Enter the radius of the circle : ";
		cin >> radius;

		area = PI * pow(radius, 2);
		cout << " Area of the circle is : " << area << endl;
		// area.endl; should be "<< area << endl;"
	}
	else if (choice == 2){
			cout << " Enter the length and width of the rectangle : " ;
		 cout << " Enter the length of the rectangle : " ;
		 cin >> length;
		 //cin << length; the cin statement should be ">>"
		cout << " Enter the width of the rectangle : " ;
		cin >> width;
		//cin << width; the cin statement should be ">>"
		
		if (( length > 0 ) && ( width > 0 ))
		// (( length > 0 ) || ( width > 0 )) should be && ensure that error displayed when both length and width are invalid
		    cout << " Invalid input. Length and width cannot be negative . " << endl;
		    
		area = length * width ; //calculate area of rectangle  
		cout << " Area of the rectangle is : "  << area << endl;
		 
		} else {
	
	     cout << " Invalid choice. Please enter 1 or 2. " << endl;
	    //end of if 
	}
	
        return 0;     
        //end of the main function
}