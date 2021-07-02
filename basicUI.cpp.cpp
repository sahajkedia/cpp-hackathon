#include <iostream>

using namespace std;


bool isAssign;
char assign[1000];

int auth(int ch1){
    switch(ch1){
        case 1: cout<<"1. Log in"<<endl<<"2. Register"<<endl;break;//students
        //for teachers
        case 2: cout<<"1. Post Assignment" << endl<< "2. Send Reminder to students" << endl<<"3. View Submitted Assignments"<<endl<<"Enter your choice"<<endl;
    }
    int ch2;
    cout<<"Enter your choice"<<endl;
    cin>>ch2;
    return ch2;
}

class Student{
    public:
    char usn[10],pass[50];
    int score;
    void forStudents(int ch2){
    
    switch (ch2){
        
        case 1: cout<<"USN :";
                cin>>usn;
                cout<<"PASSWORD :";
                cin>>pass;
                //function to check the USN and PASSWORD
                
                break;
        case 2: cout<<"Enter your USN : ";
                cin>>usn;
                cout<<"Set a PASSWORD : ";
                cin>>pass;
                break;
    }
    if(isAssign)
        cout<<"You have a pending Assignment"<<endl<<assign;
    else
        cout<<"Your Score is" <<score<<endl;
    }};
    
    class Teachers {
        public:
        
        void forTeachers(int ch2){
    
    switch (ch2){
        case 1: cout<<"Start Typing below..."<<endl;
                cin>>assign;
                //send
                break;
        case 2: cout<<"Reminder sent";//see about this
                break;
        case 3: //submitted Assignments
                break;
}}};

int main()
{
    int ch1;
    cout<<"What are you? "<<endl<<"1. Student "<<endl<<"2. Teacher"<<endl <<"Enter your choice"<<endl;
    cin>>ch1;
    
        Student s1;
    
    
        Teachers t1;
        
    int ch2 = auth(ch1);
    
    if(ch1==1)
        s1.forStudents(ch2);
    
    else
        t1.forTeachers(ch2);
    return 0;
}
