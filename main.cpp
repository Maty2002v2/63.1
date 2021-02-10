#include <iostream>
#include <fstream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string s;
	string s1;
	string s2;
	
	ifstream file;
 	ofstream fileOut;
 	
 	file.open("c:\ciagi (2).txt");
 	fileOut.open("wyjscie.txt");
 	
 	
 	if (file.good()) 
	 {
 	 	while(!file.eof())
	     {
	        file>>s;
	        
	        s1 = s.substr(0, s.length() / 2);
	        s2 = s.substr(s.length() / 2, s.length());
	        
	        if (s1 == s2) {
	        	fileOut<<s<<endl;
			}
	     }
		 
		 file.close();
		 fileOut.close();
	 }
	return 0;
}
