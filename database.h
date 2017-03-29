/**Jacob Ntesang
*Ntsjac002
*25 March 2017
*Tuturial1 
*database.h file: Contains the database fuctionality(methods) definitions to be implemented in the database.cpp file.
*/

#ifndef DATABASE_H
#define DATABASE_H

using namespace std;

namespace NTSJAC002 {

	void add_student(string name, string surname, string studentNumber, string classRecord);
	void display_studentData(string studentNumber);
	void grade_student(string studentNumber);
	void read_data(string fileName);
	void write_data(string fileName);
	
}
#endif
