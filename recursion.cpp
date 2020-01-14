//Header files.
#include<iostream>
#include<stdio.h>
using namespace std;

/**
 * This method will generate the combination of paranthesis.
 *
 *@param charArray the character array used to store generated values.
 *@param n the integer value input from user.
 *@param open the counter for open paranthesis.
 *@param close the counter for close paranthesis.
 *@param i the index of charArray.
 */
void GenerateParanthesis(char charArray[], int n, int open, int close, int i) {
	if(i == 2*n) {
		charArray[i] = '\0';
		cout << charArray << endl;
	}
	
	if(open < n) {
		charArray[i] = '(';
		
		//Recursive call.
		GenerateParanthesis (charArray, n, open+1, close, i+1);
	}
	if (close < open) {
		charArray[i] = ')';
		
		//Recursive call.
		GenerateParanthesis (charArray, n, open, close+1, i+1);
	}
}

//The main method.
int main() {
	system ("cls");
	char charArray[100] ;
	int n ;
	cout << "Enter integer : " ;
	cin >> n ;
	
	//Function call.
	GenerateParanthesis (charArray, n, 0, 0, 0);
	return 0;
}