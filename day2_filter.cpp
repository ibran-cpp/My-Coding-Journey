#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string dostoKeNaam[5] = {"arbaj", "ayan", "Ankit", "altamas", "mohit"};

    cout << "Un doston ke naam jinka naam 'A' se shuru hota hai:\n";

    
    for(int i = 0; i < 5; i++) {
        
       
       
        if(dostoKeNaam[i][0] == 'A' || dostoKeNaam[i][0] == 'a') {
            
           
            cout << dostoKeNaam[i] << endl;
        }
    }

    return 0;
}
