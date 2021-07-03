#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
bool isAssign;
string date;
int auth(int ch1){

    cout<<"1. Log in"<<endl<<"2. Register"<<endl;

    int ch2;
    cout<<"Enter your choice"<<endl;
    cin>>ch2;
    system("CLS");
    return ch2;
}

class Student{
    
    public:
    bool isSubmitted;
    string name,usn,pass;
    int score;

    void forStudents(int ch2){

        string temp;
        switch (ch2){
            case 1: cout<<"USN :";
                    cin>>usn;
                    cout<<"PASSWORD :";
                    cin>>pass;
                //function to check the USN and PASSWORD
                    break;
            case 2: cout<<"Enter your Name : ";
                    cin>>name;
                    cout<<"Enter your USN : ";
                    cin>>usn;
                    cout<<"Set a PASSWORD : ";
                    cin>>pass;
                    break;
    }
    system("CLS");
    if( isAssign && isSubmitted ){

        cout<<"You have a pending Assignment"<<endl;
        cout<<"Do you want to Submit Now : (Y/N)";
        cin>>temp;
        system("CLS");
        if(temp=="Y" || temp == "y"){
            cout<<"Follow this link to submit your assignment\n";
            //Assignment Submission procedure
            isSubmitted = false;
        }
        else
            return;
        }
    else
        cout<<"Your Score is : " << score <<endl;

}};
    

    

class Teachers {

    string id,name,pass;
    int ch3;
    public:
        
    void forTeachers(int ch2){  // function for reminder of staff;

            switch (ch2){
        
                case 1: cout<<"ID : ";
                    cin>>id;
                    cout<<"PASSWORD : ";
                    cin>>pass;
                    //function to check the  ID and PASSWORD
                
                    break;
                case 2: cout<<"Enter Your Name : ";
                    cin>>name;
                    cout<<"Enter your ID : ";
                    cin>>id;
                    cout<<"Set a PASSWORD : ";
                    cin>>pass;
                    break;
    }
    //clearscreen
    system("CLS");
    cout<<"1. Post Assignment" << endl<< "2. Send Reminder to students" << endl<<"3. View Submitted Assignments"<<endl<<"Enter your choice"<<endl;
    cin>>ch3;

            switch (ch3){
                case 1: cout<<"Follow this link to post the Assignment..."<<endl;//function for assignment
                        //send
                        isAssign =  true;
                        cout<<"Set the last date of submission "<<endl;
                        cin>>date;
                        break;

                case 2: //function for reminder
                        cout<<"Reminder sent";
                        break;
                case 3: //function to see submitted Assignments and give score
                        break;
    }

    system("CLS");     
}};

int main()
{
    int ch1;
    
    cout<<"What are you? "<<endl<<"1. Student "<<endl<<"2. Teacher"<<endl <<"Enter your choice"<<endl;
    cin>>ch1;
    system("CLS");

        Student s1;   
        Teachers t1;

    int ch2 = auth(ch1);
    
    (ch1==1) ? s1.forStudents(ch2) : t1.forTeachers(ch2);

    return 0;
}
