
#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    Student s[5];
    int choice;
    int count = 0;

    do {
        cout << "\n===== STUDENT MANAGEMENT =====\n";
        cout << "1. Add Student\n";
        cout << "2. Show Students\n";
        cout << "3. Find Topper\n";
        cout << "4. Search Student\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                if(count < 5) {
                    cout << "Enter name: ";
                    cin >> s[count].name;

                    cout << "Enter marks: ";
                    cin >> s[count].marks;

                    count++;
                    cout << "Student Added!\n";
                }
                else {
                    cout << "Storage Full!\n";
                }
                break;

            case 2:
                for(int i = 0; i < count; i++) {
                    cout << "\nName: " << s[i].name;
                    cout << "\nMarks: " << s[i].marks;

                    if(s[i].marks >= 33)
                        cout << "\nResult: Pass\n";
                    else
                        cout << "\nResult: Fail\n";
                }
                break;

            case 3:
                if(count > 0) {
                    int top = 0;

                    for(int i = 1; i < count; i++) {
                        if(s[i].marks > s[top].marks)
                            top = i;
                    }

                    cout << "Topper: " << s[top].name;
                    cout << "\nMarks: " << s[top].marks << endl;
                }
                else {
                    cout << "No Students Found!\n";
                }
                break;

            case 4: {
                string searchName;
                bool found = false;

                cout << "Enter name to search: ";
                cin >> searchName;

                for(int i = 0; i < count; i++) {
                    if(s[i].name == searchName) {
                        cout << "Found!\n";
                        cout << "Marks: " << s[i].marks << endl;
                        found = true;
                    }
                }

                if(!found)
                    cout << "Student Not Found!\n";

                break;
            }

            case 5:
                cout << "Program Closed!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}
