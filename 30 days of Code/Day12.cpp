#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
    Student(string firstName, string lastName, int id, vector<int>Scores): Person(firstName, lastName, id) {
      this -> testScores = Scores;
    }
        
        char calculate(){
            int sum=0;
            for (int i=0; i<testScores.size(); i++) {
                sum= sum+testScores[i];
            }
            int avg;
            avg=sum/testScores.size();
            if (90<=avg && avg<=100) {
                return 'O';
            
            }
            else if (80<=avg && avg<90) {
                return 'E';
            
            }
             else if (70<=avg && avg<80) {
                return 'A';
            
            }
             else if (55<=avg && avg<70) {
                return 'P';
            
            }
             else if (40<=avg && avg<55) {
                return 'D';
            
            }
            else {
            return 'T';
            }
        }
};

int main() {