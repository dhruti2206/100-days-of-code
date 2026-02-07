//miniproject
//student record management system
#include<iostream>
#include<vector>
using namespace std;
struct Student{
    int id;
    string name;
    float grade;
};
vector<Student> students;
void addStudent(){
    Student s;
    cout<<"Enter student ID: ";
    cin>>s.id;
    cout<<"Enter student name: ";
    cin>>s.name;
    cout<<"Enter student marks: ";
    cin>>s.grade;
    students.push_back(s);
    cout<<"Student added successfully!\n";
}
void displayStudents(){
    if(students.empty()){
        cout<<"No students to display!\n";
        return;
    }
    cout<<"Student Records:\n";
    for(const auto& s : students){
        cout<<"ID: "<<s.id<<", Name: "<<s.name<<", Grade: "<<s.grade<<endl;
    }
}
void searchStudent(){
    int id;
    cout<<"Enter student ID to search: ";
    cin>>id;
    for(const auto& s : students){
        if(s.id == id){
            cout<<"Student found: ID: "<<s.id<<", Name: "<<s.name<<", Grade: "<<s.grade<<endl;
            return;
        }
    }
    cout<<"Student with ID "<<id<<" not found!\n";
}
void deleteStudent(){
    int id;
    cout<<"Enter student ID to delete: ";
    cin>>id;
    for(auto it = students.begin(); it != students.end(); ++it){
        if(it->id == id){
            students.erase(it);
            cout<<"Student with ID "<<id<<" deleted successfully!\n";
            return;
        }
    }
    cout<<"Student with ID "<<id<<" not found!\n";
}
void updateStudent(){
    int id;
    cout<<"Enter student ID to update: ";
    cin>>id;
    cout<<"Existing Record:\n";
    displayStudents();
    for(auto& s : students){
        if(s.id == id){
            cout<<"Enter new name: ";
            cin>>s.name;
            cout<<"Enter new marks: ";
            cin>>s.grade;
            cout<<"Student with ID "<<id<<" updated successfully!\n";
            return;
        }
    }
    cout<<"Student with ID "<<id<<" not found!\n";
}
int main(){
    int choice;
    do{
        cout<<"Menu:\n1. Add Student\n2. Display Students\n3. Search Student\n4. Delete Student\n5. Update Student\n6. Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: updateStudent(); break;
            case 6: cout<<"Exiting...\n"; break;
            default: cout<<"Invalid choice! Try again.\n";
        }
    }while(choice!=6);
    return 0;
}
