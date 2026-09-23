#include<iostream>
using namespace std;

int main()

{
	
    string name;
    int math,physics,chemistry;
    int marks;
    
    
    cout<<"student ka name likhe";
    cin>>name;
    
    cout<<"enter math number";
    cin>>math;
    
    cout<<"enter physics number";
    cin>>physics;
    
    cout<<"enter chemistry number";
    cin>>chemistry;
    
    

marks = math + physics + chemistry;


    if ( marks >= 180)
    
{

cout<<"badhai ho aap pass ho";

}

else

{
	
	cout<<"maaf kijiye aap fail ho";
	
}

return 0;

}
