#include <iostream>

using namespace std ;

//declare the function first 
// Function to convert Celsius to Fahrenheit
//missing double it suppose ( double celsius ) not ( celsius)
double celsiusToFahrenheit ( double celsius )
{
    return ( celsius * 9/5 ) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius( double fahrenheit ) {
    return ( fahrenheit - 32 ) * 5/9;
}
int main () 
{
	double temperature ;
	char scale ;
	
	cout << " Enter temperature : " ;
	cin >> temperature ;
	
	cout << " Enter scale ( C for Celsius , F for Fahrenheit ) : " ;
	cin >> scale ; 
	
	//declare convertedTemp
	double convertedTemp ;
	
	//condition char must Upper and Lower case
	if ( scale == 'C' || scale == 'c' ) 
	{
	//there is no open and close curly braces after if ( scale == 'C' || scale == 'C' )
	//( scale ) ; it suppose to be ( temperature ) ;
		double convertedTemp = celsiusToFahrenheit ( scale ) ;
		// convertedTemp was not declare
		cout << " Converted temperature : " << convertedTemp << " F " << endl ;
    }
	
	//condition char must Upper and Lower case	
	else if ( scale == 'F' || scale == 'f' )
	{
		double convertedTemp = fahrenheitToCelsius ( temperature ) ;
		//statement must 'C' not 'F' because fahrenheitToCelsius and it have missing < in statement 
		cout << " Converted temperature : " << convertedTemp << " C " << endl ;	
    }
    else 
	{	
  	
	}
	
	return 0 ;
	
}