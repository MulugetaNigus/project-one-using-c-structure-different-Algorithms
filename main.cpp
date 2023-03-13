#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;

struct student_data{
   int Stud_Id;
   string First_name;
   string Last_name;
   int Age;
   char Gender;
   string Dep;
};

void banner(){
 cout<<"---------------------------------------------"<<endl;
 cout<<" 1 - Enter Data"<<endl;
 cout<<" 2 - Display The Data"<<endl;
 cout<<"-1 - to exit"<<endl;
 cout<<"---------------------------------------------"<<endl;
}

void intro(string name){
cout<<"------------WELCOME ADMIN--------------------"<<endl;
cout<<"Hello Admin How Are You !"<<endl;
cout<<"---------------------------------------------"<<endl;
}

int main()
{


    int max = 50;
    char username[max];
    char Password[max];
    cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                             Admin LogIn"<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"  Username: ";
    cin.get(username,max);
    cout<<"  Password: ";
    cin.get(Password,max);

    if(username == "admin"){
        if(Password == "admin"){
            intro(username);
        }else{
            cout<<"wrong password"<<endl;
        }
    }else{
         cout<<"wrong Username"<<endl;
         return 0;
    }

    int student_limit;
    cout<<" please enter how many students do you register right now: ";
    cin>>student_limit;
    struct student_data student_DB[student_limit];
    cout<<endl;
    // to clear the screen in our program
    system("cls");

    banner();

    int User_Command_Acceptor;
    cout<<"Enter Your Choise: ";
    cin>>User_Command_Acceptor;

    while(User_Command_Acceptor != -1)
{
    switch (User_Command_Acceptor){
 case 1:
         for(int i = 0; i < student_limit; i++){

    //students<<"ID: "<<student_DB[j].Stud_Id<<endl;
    //students<<"First Name: "<<student_DB[j].First_name<<endl;
    //students<<"Last Name: "<<student_DB[j].Last_name<<endl;
    //students<<"Age: "<<student_DB[j].Age<<endl;
    //students<<"Gender: "<<student_DB[j].Gender<<endl;
    //students<<"Department: "<<student_DB[j].Dep<<endl;
    //students.close();

        cout<<"enter your ID: ";
        cin>>student_DB[i].Stud_Id;
      //  students<<"ID: "<<student_DB[i].Stud_Id<<endl;
        cout<<"enter your first name: ";
        cin>>student_DB[i].First_name;
        //students<<"First Name: "<<student_DB[i].First_name<<endl;
        cout<<"enter your last name: ";
        cin>>student_DB[i].Last_name;
        //students<<"Last Name: "<<student_DB[i].Last_name<<endl;
        cout<<"enter your Age: ";
        cin>>student_DB[i].Age;
       // students<<"Age: "<<student_DB[i].Age<<endl;
        cout<<"enter your Gender: ";
        cin>>student_DB[i].Gender;
        //students<<"Gender: "<<student_DB[i].Gender<<endl;
        cout<<"enter your department: ";
        cin>>student_DB[i].Dep;
        //students<<"Department: "<<student_DB[i].Dep<<endl;
    }

cout<<endl;
cout<<"----------------------------------"<<endl;
cout<<"finished thanks for your feed back"<<endl;
cout<<"----------------------------------"<<endl;

    for(int j = 0; j < student_limit; j++){
    ofstream students;
    students.open("student_database.txt", ios::app);
    students<<"------------------------------------------"<<endl;
    students<<"ID: "<<student_DB[j].Stud_Id<<endl;
    students<<"------------------------------------------"<<endl;
    students<<"First Name: "<<student_DB[j].First_name<<endl;
    students<<"------------------------------------------"<<endl;
    students<<"Last Name: "<<student_DB[j].Last_name<<endl;
    students<<"------------------------------------------"<<endl;
    students<<"Age: "<<student_DB[j].Age<<endl;
    students<<"------------------------------------------"<<endl;
    students<<"Gender: "<<student_DB[j].Gender<<endl;
    students<<"------------------------------------------"<<endl;
    students<<"Department: "<<student_DB[j].Dep<<endl;
    students<<"------------------------------------------"<<endl;
    students.close();
    }
    break;

 case 2:
     for(int i = 0; i < student_limit; i++){
        cout<<"--------------------------------------"<<endl;
        cout<<"ID: "<<student_DB[i].Stud_Id<<endl;
        cout<<"First Name: "<<student_DB[i].First_name<<endl;
        cout<<"Last Name: "<<student_DB[i].Last_name<<endl;
        cout<<"Age: "<<student_DB[i].Age<<endl;
        cout<<"Gender: "<<student_DB[i].Gender<<endl;
        cout<<"Department: "<<student_DB[i].Dep<<endl;
        cout<<"--------------------------------------"<<endl;
    }

    break;

    }
    cout<<"Enter Your Choise: ";
    cin>>User_Command_Acceptor;
}

cout<<endl;
cout<<"----------------------------------"<<endl;
cout<<"Exiting..."<<endl;
cout<<"----------------------------------"<<endl;

    return 0;
}

      /*cout<<"--------------------------------------"<<endl;
        cout<<"ID: "<<student_DB[j].Stud_Id<<endl;
        cout<<"First Name: "<<student_DB[j].First_name<<endl;
        cout<<"Last Name: "<<student_DB[j].Last_name<<endl;
        cout<<"Age: "<<student_DB[j].Age<<endl;
        cout<<"Gender: "<<student_DB[j].Gender<<endl;
        cout<<"Department: "<<student_DB[j].Dep<<endl;
        cout<<"--------------------------------------"<<endl;*/
