#include <iostream>

namespace power {
		
	//2a
	int iterative(int q, int n)
	 {
		int potenz =1;
		
		if ( n <0)
		 {
			 		
			 return 0;	
			 		 			
		}
				
		if (n == 0) 
		{
			
			potenz = 1;
			
		}
				
		if (n == 1)
		 {
			 
			 potenz = q;
			
		 }
		
		if( n>1) {
			
			while (n +1 >1){
				potenz = potenz*q;				
				n= n-1;								
			}
						
		}
		return potenz;		
		
	}
	// 2b
	int recursive(int q, int n)
	 {		
		int potenz;
		
		if (n <0)
		 {
			 
			return 0;
						
		}
		else if (n == 0)
		{
			
			potenz = 1;
			
		}
		
		else  {
						
			potenz = q * recursive(q , n-1);
			
		}
				
		return potenz;
				
	}
	
	// 2c
	int interativ_c(int q, int n) {
		int potenz =1;
		int i = 0;
		
		if (n <0)
		 {
			 
			return 0;
			
		}
		
		while (i<n/2) 
		{
			
			potenz =q*potenz;
			i = i +1;
			
		}
		
		if(n%2==0)
		 {
			
			potenz =potenz * potenz;
			
		}
		
		else 
		{
			
			potenz = potenz*potenz*q;
			
		}
		
		return potenz;
		
	}	
	
}

int main (){

int n;
int q;

char aufgabe;

std::cout << "Welche Aufgabe?" << std::endl;
std::cin >> aufgabe;
std::cout << "Aufgabe 2"<< aufgabe <<" wird gestartet" << std::endl;

std::cout << "n = " << std::endl;
std::cin >> n;

std::cout << "q= " << std::endl;
std::cin >> q;

if (aufgabe == 'a')
{
	
std::cout <<"Das Ergebnis ist " << power::iterative(q,n) << std::endl;

}

if (aufgabe =='b')
{
	
std:: cout <<"Das Ergebnis ist " << power::recursive(q,n) << std::endl;

}

if (aufgabe == 'c')
{
	
std:: cout <<"Das Ergebnis ist " << power::interativ_c(q,n)<< std::endl;

}

return 0;

}





















