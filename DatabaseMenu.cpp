/**Jacob Ntesang
*Ntsjac002
*24 March 2017
*Tuturial1 Driver Class
*/


#include <iostream>
#include "database.h"

using namespace std;
using namespace NTSJAC002;


int main() 
{

	string menuOp = "";
	//Print out the menu.
	cout << "0: Add stuudent" << endl;
   	cout << "1: Read database" << endl;
   	cout << "2: Save database" << endl;
   	cout << "3: display given student data" << endl;
   	cout << "4: Grade student" << endl;
   	cout << "q: Quit" << endl;
   	
	
	   
	while(true){
		//cout << "Hey There." << endl;
		string name;
		string surname;	
		string studentNumber;
		string classRecord;
		
		string fileName;
		
		cout << "Enter a number (or q to quit) and press return..." << endl;
		//Getting the chosen option from the user.
		cin >> menuOp;
		
		if (menuOp == "q") 
			break;
		
		switch(stoi(menuOp)) {
      		case 0 :
        		cout << "Enter student details (seperated by newline character or by 'pressing Enter') in this order(Name, Surname, Student Number, Class Record): " << endl; 
        		cin >> name >> ws;
        		getline(cin, surname);
        		getline(cin, studentNumber);
        		getline(cin, classRecord);
        		//Add a new or (update the old one) with this details.
        		add_student(name, surname, studentNumber, classRecord);
      			break;
      		case 1 :
      			cout << "Enter the file's name: " << endl;
      			cin >> fileName;
      			//Read from a given file.
      			read_data(fileName);
      			break;
      		case 2 :
        		cout << "Well done" << endl;
        		cout << "Enter the file's name: " << endl;
      			cin >> fileName;
        		//Write to a given file.
        		write_data(fileName);
        		break;
      		case 3 :
        		cout << "Enter the student's Student Number: " << endl;     
        		cin >> studentNumber;
        		//Display studnet's details with this studentNumber. 
        		display_studentData(studentNumber);
        		break;
      		case 4 :
        		cout << "Enter the student's Student Number: " << endl;     
        		cin >> studentNumber;
        		//Grade and print student's with this studentNumber average.
        		grade_student(studentNumber);
        		break;
   		}
	}

}
