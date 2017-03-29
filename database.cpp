/**Jacob Ntesang
*Ntsjac002
*25 March 2017
*Tuturial1 
*database.cpp file: Implemets the database functionality.
*/

#include <iostream>
#include "database.h"
#include <vector>
#include <sstream>
#include <string.h>

//using namespace NTSJAC002;
using namespace std;

//Struct definition.
struct StudentRecord {
	string name;
	string surname;	
	string studentNumber;
	string classRecord;
};

//Student's records container.
vector <StudentRecord> records;

void NTSJAC002::add_student(string name, string surname, string studentNumber, string classRecord) {
	
	cout << "\nEntered student's Details: \n" << endl;
	cout << "name: "<< name << endl;
	cout << "surname: "<< surname << endl;
	cout << "stdNumber: "<< studentNumber << endl;
	cout << "record: "<< classRecord << endl;
	
	//Populate the student struct with new(or old) student's info.
	StudentRecord student;
	student.name = name;
	student.surname = surname;
	student.studentNumber = studentNumber;
	student.classRecord = classRecord;

	
	int size = records.size();
	int count = 0;
	
	//If there is no student in the database.
	//If this is the first entry.
	if (size == 0) {
		records.push_back(student);
		cout << "\nNew student record entered.\n" << endl;
	}
	else{
    for (StudentRecord & i : records) {
    	//Before adding a new student check if the student already exists 
    	//by checking their studentNumber against the ones that already exists in the database.
    	if (strcasecmp(i.studentNumber.c_str(), studentNumber.c_str()) != 0){
    		count = count + 1; 
    		if (count == size){
    			records.push_back(student);
    			cout << "\nNew student record entered.\n" << endl;
    		}
    		
    	}
    	
    	//Update the student's records.
    	//This si for students who are already in the system(Database).
    	else if (strcasecmp(i.studentNumber.c_str(), studentNumber.c_str()) == 0){
    		i.classRecord = classRecord;
    		cout << "\nStudent records updated.\n" << endl; 
    	}
        
    }
    }
	
}//add_student()

void NTSJAC002::display_studentData(string studentNumber){
	
	int size = records.size();
	int count = 0;
	
	if (size == 0){
		cout << "\nStudent record not available.\n" << endl; 
	}
	for (StudentRecord & i : records) {
    	//Before adding a new student check if the student already exists 
    	//by checking their studentNumber against the ones that already exists in the database.
    	if (strcasecmp(i.studentNumber.c_str(), studentNumber.c_str()) != 0){
    		count = count + 1;
    		if (count == size){
    			cout << "\nStudent record not available.\n" << endl;
    		}
    	}
    	
    	//Display student's records.
    	if (strcasecmp(i.studentNumber.c_str(), studentNumber.c_str()) == 0){
    		cout << "\nDisplaying student's info: " << endl;
    		cout << "Name: "<< i.name << endl;
			cout << "Surname: "<< i.surname << endl;
			cout << "StudentNumber: "<< i.studentNumber << endl;
			cout << "ClassRecord: "<< i.classRecord << "\n" << endl;
			break;
    	}
        
    }
}//display_studentData()

void NTSJAC002::grade_student(string studentNumber){
		
	int size = records.size();
	int count = 0;
	
	if (size == 0){
		cout << "\nStudent record not available.\n" << endl; 
	}
	for (StudentRecord & i : records) {
    	//Before adding a new student check if the student already exists 
    	//by checking their studentNumber against the ones that already exists in the database.
    	if (strcasecmp(i.studentNumber.c_str(), studentNumber.c_str()) != 0){
    		count = count + 1;
    		if (count == size){
    			cout << "\nStudent record not available.\n" << endl;
    		}
    	}
    	
    	//Display student's records.
    	if (strcasecmp(i.studentNumber.c_str(), studentNumber.c_str()) == 0){
    		int average = 0;
    		int number = 0; //For averaging the class record.
 			int total = 0; //The total mark to be averaged.
    		string mark; 
    		
    		cout << "\nClassRecord: "<< i.classRecord << endl;
    		
			istringstream iss(i.classRecord);
			while (!iss.eof())
			{	
				number = number + 1;
				iss >> mark;
				cout << mark << endl;
				total = total + stoi(mark);
			}
			
			cout << i.name << "'s Grade(Avrg) = " << total/number << "\n" << endl;
    		
			break;
    	}
        
    }
}//grade_student()

void NTSJAC002::read_data(string fileName){

}//read_data()

void NTSJAC002::write_data(string fileName){
	
}//write_data()
