#include<iostream>
#include<string>
using namespace std;

string mixText(string x, string y){

	string m = "";
	int A = x.size();
	int B = y.size();

	if(A == B){

		int i = 0;
		while (i < A)
		{
			m = m + x[i] + y[i];
			//n[i] = y[i];

			

			i++;

		}
		return m;
		//cout << mn ; 

	}else{
		return "E";
	}
}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
