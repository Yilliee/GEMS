#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;
struct student{
    string stu_id;
    string name;
    float Att;
    float Q1;
    float Q2;
    float Mid;
    float Final;
    float Total;
    string grade;
};
const int subj=5;
const int size_class=30;


ostream& writemap(ostream& out, student (&classbme)[subj][size_class]);
istream& readDataFromFile(istream& in, student (&classbme)[subj][size_class]);


void dispMarks(student classbme[][size_class], int p, int s_class, int v);
void RelativeGrades(student classbme [][size_class], int p, int s_class);
string grade(float marks, float avg, float stdev);

float gradePtAvg(student classbme[][size_class], int s_subj, int j);

void sorted_gradwise(student classbme [][size_class], int p, int s_class);

int credtHr1, credtHr2, credtHr3, credtHr4, credtHr5;

int main()
{
    student classbme [subj][size_class];/*={ { {"2019bme51","Ali",0,0,0,0,0,0,"A"},{"2019bme52","Zia",0,0,0,0,0,0,"A"}, {"2019bme53","Ben",0,0,0,0,0,0,"A"} },{ {"2019bme51","Ali",0,0,0,0,0,0,"A"},{"2019bme52","Zia",0,0,0,0,0,0,"A"}, {"2019bme53","Ben",0,0,0,0,0,0,"A"} },{ {"2019bme51","Ali",0,0,0,0,0,0,"A"},{"2019bme52","Zia",0,0,0,0,0,0,"A"}, {"2019bme53","Ben",0,0,0,0,0,0,"A"} },{ {"2019bme51","Ali",0,0,0,0,0,0,"A"},{"2019bme52","Zia",0,0,0,0,0,0,"A"}, {"2019bme53","Ben",0,0,0,0,0,0,"A"} },{ {"2019bme51","Ali",0,0,0,0,0,0,"A"},{"2019bme52","Zia",0,0,0,0,0,0,"A"}, {"2019bme53","Ben",0,0,0,0,0,0,"A"} },{ {"2019bme51","Ali",0,0,0,0,0,0,"A"},{"2019bme52","Zia",0,0,0,0,0,0,"A"}, {"2019bme53","Ben",0,0,0,0,0,0,"A"} } };*/

    string pass, pass1, pass2, pass3, pass4, pass5, admpass, pas1, pas2, passAdm;

    string sub, sub1, sub2, sub3, sub4, sub5;

    string inst, inst1, inst2, inst3, inst4, inst5;


    //FLAGS
    int flagatt0=0, flagatt1=0, flagatt2=0, flagatt3=0, flagatt4=0;
    int flagq10=0, flagq11=0, flagq12=0, flagq13=0, flagq14=0;
    int flagq20=0, flagq21=0, flagq22=0, flagq23=0, flagq24=0;
    int flagm0=0, flagm1=0, flagm2=0, flagm3=0, flagm4=0;
    int flagf0=0, flagf1=0, flagf2=0, flagf3=0, flagf4=0;

    int flag1=0, flag2=0, flag4=0, flag7=0, flag11=0, p;
    int flags_reg=0;
    //FLAGS



    std::fstream readfile("BMECLASSDATA.txt", std::ios::in); //OPENING FILE BMECLASSDATA.txt to read complete data from FILE and make it available to current program
    if (readfile.is_open())
    {
        readDataFromFile(readfile, classbme);
        readfile.close();

    }


    //PASSWORD READING
    fstream readPass;

    readPass.open("Passwords.txt", std::ios::in);

    readPass >> pass1;
    readPass >> pass2;
    readPass >> pass3;
    readPass >> pass4;
    readPass >> pass5;

    readPass >> admpass;

    readPass.close();
    //PASSWORD READING


    //SUBJECT NAME READING
    fstream readSubj;
    readSubj.open("Subjects.txt", std::ios::in);
    readSubj >>ws;
    getline(readSubj,sub1);
    readSubj >>ws;
    getline(readSubj,sub2);
    readSubj >>ws;
    getline(readSubj,sub3);
    readSubj >>ws;
    getline(readSubj,sub4);
    readSubj >>ws;
    getline(readSubj,sub5);
    readSubj.close();
    //SUBJECT NAME READING

    //CREDIT HOUR READING
    fstream readCrHr;
    readCrHr.open("CreditHr.txt", std::ios::in);
    readCrHr >> credtHr1;
    readCrHr >> credtHr2;
    readCrHr >> credtHr3;
    readCrHr >> credtHr4;
    readCrHr >> credtHr5;
    readCrHr.close();
    //CREDIT HOUR READING

    //INSTRUCTOR NAME READING
    fstream readInst;
    readInst.open("Instructors.txt", std::ios::in);
    readInst >>ws;
    getline(readInst,inst1);
    readInst >>ws;
    getline(readInst,inst2);
    readInst >>ws;
    getline(readInst,inst3);
    readInst >>ws;
    getline(readInst,inst4);
    readInst >>ws;
    getline(readInst,inst5);
    readInst.close();
    //INSTRUCTOR NAME READING

    //READ FLAGS
    fstream readFlags;
    readFlags.open("Flags.txt", std::ios::in);
    readFlags >> flagatt0;
    readFlags >> flagatt1;
    readFlags >> flagatt2;
    readFlags >> flagatt3;
    readFlags >> flagatt4;
    readFlags >> flagq10;
    readFlags >> flagq11;
    readFlags >> flagq12;
    readFlags >> flagq13;
    readFlags >> flagq14;
    readFlags >> flagq20;
    readFlags >> flagq21;
    readFlags >> flagq22;
    readFlags >> flagq23;
    readFlags >> flagq24;
    readFlags >> flagm0;
    readFlags >> flagm1;
    readFlags >> flagm2;
    readFlags >> flagm3;
    readFlags >> flagm4;
    readFlags >> flagf0;
    readFlags >> flagf1;
    readFlags >> flagf2;
    readFlags >> flagf3;
    readFlags >> flagf4;

    readFlags >> flags_reg;

    readFlags >> flag1;
    readFlags >> flag2;
    readFlags >> flag4;
    readFlags >> flag7;
    readFlags >> flag11;

    readFlags.close();
    //READ FLAGS


char ch8, c, c1, c2, c4, c5, c7;
string subtitle;


char ch5='n';
do
{   system("cls");
    cout <<endl<<endl<<endl<< "  G E M S - GRADE EVALUATION MANAGEMENT SYSTEM" << endl<<endl<<endl;

    cout << "1 - ADMINISTATOR" << endl<<endl;
    cout << "2 - COURSE INSTRUCTOR" << endl<<endl;
    cout << "0 - SHUTDOWN "<< endl<<endl;
    cin>>c5;

    switch(c5)
    {
        case '1':
            {
                //system("cls");
                cout<<endl<<endl<<"         A D M I N I S T R A T O R "<<endl<<endl;
                cout<<"Enter PIN: ";
                cin>>passAdm;
                if (passAdm !=admpass)
                {
                    cout<<endl<<"Wrong Password. "<<endl<<endl;
                    cout<<"You are not Authorized";
                    getch();
                    break;
                }


                cout << "       A D M I N I S T R A T O R - GEMS" << endl<<endl<<endl;

                char ch7='n';
                do
                {
                    system("cls");
                    cout <<endl<<endl<< "       A D M I N I S T R A T O R - GEMS" << endl<<endl<<endl;
                    cout << "1 - STUDENT REGISTRATION" << endl<<endl;
                    cout << "2 - SUBJECT REGISTRATION" << endl<<endl;
                    cout << "3 - PASSWORD MANAGEMENT "<< endl<<endl;
                    cout << "4 - RESULT REPORTS "<< endl<<endl;
                    cout << "0 - EXIT "<< endl<<endl;
                    cin>>c7;
                    switch(c7)
                    {
                        case '1':
                            {
                                cout<<endl<<endl<<"    STUDENT REGISTRATION"<<endl<<endl;
                                cout<<"Sample Student ID (e.g., 2019bme51)"<<endl<<endl;

                                for (int j=0; j<size_class; j++)
                                {
                                            cout<<"Enter Student " <<j+1<<" ID: ";
                                            cin>>classbme[0][j].stu_id;
                                            cout<<"Enter Student " <<j+1<<" Name: ";
                                            cin>>ws;
                                            getline(cin,classbme[0][j].name);

                                            classbme[0][j].Att=0;
                                            classbme[0][j].Q1=0;
                                            classbme[0][j].Q2=0;
                                            classbme[0][j].Mid=0;
                                            classbme[0][j].Final=0;
                                            classbme[0][j].Total=0;
                                            classbme[0][j].grade="";

                                }
                                for (int j=0; j<size_class; j++)
                                {
                                    for (int i=1; i<subj; i++)
                                    {
                                        classbme[i][j].stu_id= classbme[0][j].stu_id;
                                        classbme[i][j].name= classbme[0][j].name;
                                        classbme[i][j].Att=0;
                                        classbme[i][j].Q1=0;
                                        classbme[i][j].Q2=0;
                                        classbme[i][j].Mid=0;
                                        classbme[i][j].Final=0;
                                        classbme[i][j].Total=0;
                                        classbme[i][j].grade="";
                                    }
                                }
                                    flagatt0=0; flagatt1=0; flagatt2=0; flagatt3=0; flagatt4=0;
                                    flagq10=0; flagq11=0; flagq12=0; flagq13=0; flagq14=0;
                                    flagq20=0; flagq21=0; flagq22=0; flagq23=0; flagq24=0;
                                    flagm0=0; flagm1=0; flagm2=0; flagm3=0; flagm4=0;
                                    flagf0=0; flagf1=0; flagf2=0; flagf3=0; flagf4=0;

                                    flag1=0; flag2=0; flag4=0; flag7=0; flag11=0;
                                    flags_reg=0;

                            }
                            break;

                        case '2':
                            {
                                system("cls");
                                if (flags_reg==0){
                                cout <<endl<<endl<< "SUBJECT REGISTRATION" << endl<<endl;
                                cout<<"Enter the complete name of subject 1 (Use CAPITAL LETTERS): ";
                                cin>>ws;
                                getline(cin,sub1);

                                cout<<"Enter Credit Hour subject 1: ";
                                cin>>credtHr1;

                                cout<<"Enter the Name of the Course Instructor : ";
                                cin>>ws;
                                getline(cin,inst1);


                                cout<<endl;

                                cout<<"Enter the complete name of subject 2 (Use CAPITAL LETTERS): ";
                                cin>>ws;
                                getline(cin,sub2);

                                cout<<"Enter Credit Hour of subject 2: ";
                                cin>>credtHr2;

                                cout<<"Enter the Name of the Course Instructor : ";
                                cin>>ws;
                                getline(cin,inst2);

                                cout<<endl;

                                cout<<"Enter the complete name of subject 3 (Use CAPITAL LETTERS): ";
                                cin>>ws;
                                getline(cin,sub3);

                                cout<<"Enter Credit Hour of subject 3: ";
                                cin>>credtHr3;

                                cout<<"Enter the Name of the Course Instructor : ";
                                cin>>ws;
                                getline(cin,inst3);

                                cout<<endl;

                                cout<<"Enter the complete name of subject 4 (Use CAPITAL LETTERS): ";
                                cin>>ws;
                                getline(cin,sub4);

                                cout<<"Enter Credit Hour of subject 4: ";
                                cin>>credtHr4;

                                cout<<"Enter the Name of the Course Instructor : ";
                                cin>>ws;
                                getline(cin,inst4);

                                cout<<endl;

                                cout<<"Enter the complete name of subject 5 (Use CAPITAL LETTERS): ";
                                cin>>ws;
                                getline(cin,sub5);

                                cout<<"Enter Credit Hour of subject 5: ";
                                cin>>credtHr5;

                                cout<<"Enter the Name of the Course Instructor : ";
                                cin>>ws;
                                getline(cin,inst5);

                                cout<<endl;

                                flags_reg=1;
                                }
                                else
                                {
                                    cout<<endl<<endl<<"Subjects Already registered ";
                                    cout<<endl<<endl<<"Do You want to Register Again(Y/N)? ";
                                    cin>>ch8;
                                    if(ch8=='Y' || ch8=='y')
                                    {
                                        flags_reg=0;
                                        cout<<endl<<endl<<"Now you can Register the subjects again. Repeat the process again";
                                    }

                                    //getch();
                                }

                            }
                            break;

                        case '3':
                            {
                                cout<<"Enter Complete Subject Name: ";
                                cin>>ws;
                                getline(cin,sub);

                                if (sub==sub1)
                                {
                                    cout<<"Enter New Password: ";
                                    cin>>pas1;
                                    cout<<"Confirm New Password: ";
                                    cin>>pas2;
                                    if (pas1==pas2)
                                    {
                                        pass1=pas2;
                                        cout<<"Password Changed Successfully";
                                        getch();
                                    }
                                    else
                                    {
                                        cout<<"Confirmation Failed. ";
                                        getch();
                                    }
                                }
                                else if (sub==sub2)
                                {
                                    cout<<"Enter New Password: ";
                                    cin>>pas1;
                                    cout<<"Confirm New Password: ";   //pass1 pass2 pass3 pass4 pass5
                                    cin>>pas2;
                                    if (pas1==pas2)
                                    {
                                        pass2=pas2;
                                        cout<<"Password Changed Successfully";
                                        getch();
                                    }
                                    else
                                    {
                                        cout<<"Confirmation Failed. ";
                                        getch();
                                    }
                                }
                                else if (sub==sub3)
                                {
                                    cout<<"Enter New Password: ";
                                    cin>>pas1;
                                    cout<<"Confirm New Password: ";
                                    cin>>pas2;
                                    if (pas1==pas2)
                                    {
                                        pass3=pas2;
                                        cout<<"Password Changed Successfully";
                                        getch();
                                    }
                                    else
                                    {
                                        cout<<"Confirmation Failed. ";
                                        getch();
                                    }
                                }
                                else if (sub==sub4)
                                {
                                    cout<<"Enter New Password: ";
                                    cin>>pas1;
                                    cout<<"Confirm New Password: ";
                                    cin>>pas2;
                                    if (pas1==pas2)
                                    {
                                        pass4=pas2;
                                        cout<<"Password Changed Successfully";
                                        getch();
                                    }
                                    else
                                    {
                                        cout<<"Confirmation Failed. ";
                                        getch();
                                    }
                                }
                                else if (sub==sub5)
                                {
                                    cout<<"Enter New Password: ";
                                    cin>>pas1;
                                    cout<<"Confirm New Password: ";
                                    cin>>pas2;
                                    if (pas1==pas2)
                                    {
                                        pass5=pas2;
                                        cout<<"Password Changed Successfully";
                                        getch();
                                    }
                                    else
                                    {
                                        cout<<"Confirmation Failed. ";
                                        getch();
                                    }
                                }

                            }
                            break;

                        case '4':
                            {
                                char ch8='n';
                                do
                                {
                                    system("cls");
                                    cout <<endl<<endl<< "       R E S U L T REPORTS" << endl<<endl<<endl;
                                    cout << "1 - STUDENT'S SEMESTER RESULT" << endl<<endl;
                                    cout << "2 - STUDENT'S RESULT SUMMARY"<< endl<<endl;
                                    cout << "0 - EXIT "<< endl<<endl;
                                    cin>>c7;
                                    switch(c7)
                                    {
                                        case '1':
                                            {

                                                system("cls");
                                                cout<<endl<<endl<<"       S T U D E N T    W I S E   G R A D E   S U M M A R Y";

                                                cout<<endl<<endl<<endl<<endl<<"S#  "<<setw(12)<<left<<"Student ID"<<setw(25)<<left<<"Student Name"
                                                <<setw(7)<<left<<"PF"<<setw(5)<<left<<"CA"<<setw(7)<<left<<"A.Phy"<<setw(9)<<left<<"Physio"<<setw(7)<<left<<"CAL"<<endl<<endl;
                                                for(int j=0; j<size_class; j++)
                                                {
                                                    cout<<setw(2)<<j+1<<". "<<setw(12)<<left<<classbme[0][j].stu_id<<setw(25)<<left<<classbme[0][j].name;
                                                    for(int i=0; i<subj; i++)
                                                        cout<<setw(7)<<left<<classbme[i][j].grade;
                                                    cout<<endl;
                                                }
                                                getch();
                                            }
                                            break;

                                        case '2':
                                            {

                                                int flag=0;
                                                string studentID;
                                                system("cls");
                                                cout<<endl<<endl<<"       S T U D E N T    R E S U L T   S U M M A R Y";

                                                cout<<endl<<endl<<"Enter Student ID: ";
                                                cin>>studentID;

                                                system("cls");
                                                cout<<endl<<endl<<"       S T U D E N T    R E S U L T   S U M M A R Y";

                                                for ( int j=0; j<size_class; j++)
                                                {
                                                    if (classbme[0][j].stu_id == studentID)
                                                    {
                                                       flag=1;
                                                       cout<<endl<<endl<<endl<<endl<<"Student ID:   "<<classbme[0][j].stu_id<<endl<<"Student Name: "<<classbme[0][j].name<<endl<<endl;
                                                       cout<<endl<<endl<<"S# "<<setw(25)<<left<<"Subject"<<setw(6)<<left<<" Grade"<<endl<<endl;

                                                       for(int i=0; i<subj; i++)
                                                       {
                                                            if (i==0)
                                                                cout<<i+1<<". "<<setw(26)<<left<<sub1<<classbme[i][j].grade;
                                                            else if (i==1)
                                                                cout<<i+1<<". "<<setw(26)<<left<<sub2<<classbme[i][j].grade;
                                                            else if (i==2)
                                                                cout<<i+1<<". "<<setw(26)<<left<<sub3<<classbme[i][j].grade;
                                                            else if (i==3)
                                                                cout<<i+1<<". "<<setw(26)<<left<<sub4<<classbme[i][j].grade;
                                                            else if (i==4)
                                                                cout<<i+1<<". "<<setw(26)<<left<<sub5<<classbme[i][j].grade;
                                                            cout<<endl;
                                                       }

                                                        cout<<endl<<endl<<endl<<"GPA: "<<setw(6)<<setprecision(3)<<left<<gradePtAvg(classbme, subj, j);
                                                        break;
                                                    }
                                                }
                                                    if (flag==0)
                                                        cout<<endl<<endl<<"Student Not Found"<<endl;
                                                    getch();
                                    }
                                            break;

                                        case '0':
                                            {
                                                ch8='Y';
                                            }
                                            break;
                                    }
                                }while(ch8=='n' || ch8=='N');
                            }
                            break;

                        case '0':
                            {
                                ch7='Y';
                            }
                            break;
                    }

                }while(ch7=='n' || ch7=='N');

            }
            break;

        case '2':
            {
                char ch1='n';
                do
                {
                    system("cls");
                    cout <<endl<<endl<<endl<< "       G E M S - GRADE EVALUATION MANAGEMENT SYSTEM" << endl<<endl<<endl;
                    cout << "1 - "<<sub1<< endl<<endl;
                    cout << "2 - "<<sub2<< endl<<endl;
                    cout << "3 - "<<sub3<< endl<<endl;
                    cout << "4 - "<<sub4<< endl<<endl;
                    cout << "5 - "<<sub5<< endl<<endl;
                    cout << "0 - EXIT "<< endl<<endl;
                    cin>>c;

                    system("cls");

                    if (c == '1')
                    {
                        cout <<endl<<endl<<endl<< "          "<<sub1<< endl<<endl<<endl<<endl;
                        p=0;
                        subtitle=sub1;

                        cout<<"Enter PIN: ";
                        cin>>pass;
                    }

                    else if (c == '2')
                    {
                        cout <<endl<<endl<<endl<< "          "<<sub2<< endl<<endl<<endl<<endl;
                        p=1;
                        subtitle=sub2;

                        cout<<"Enter PIN: ";
                        cin>>pass;
                    }

                    else if (c == '3')
                    {
                        cout <<endl<<endl<<endl<< "          "<<sub3 << endl<<endl<<endl<<endl;
                        p=2;
                        subtitle=sub3;

                        cout<<"Enter PIN: ";
                        cin>>pass;
                    }
                    else if (c == '4')
                    {
                        cout <<endl<<endl<<endl<< "          "<<sub4<< endl<<endl<<endl<<endl;
                        p=3;
                        subtitle=sub4;

                        cout<<"Enter PIN: ";
                        cin>>pass;
                    }
                    else if (c == '5')
                    {
                        cout <<endl<<endl<<endl<< "          "<<sub5<< endl<<endl<<endl<<endl;
                        p=4;
                        subtitle=sub5;

                        cout<<"Enter PIN: ";
                        cin>>pass;
                    }
                    else if (c == '0')

                            break;


                    // Enter in sequence
                    if ((p==0 && pass==pass1) || (p==1 && pass==pass2) || (p==2 && pass==pass3) || (p==3 && pass==pass4) || (p==4 && pass==pass5 ))
                    {

                        char ch2='n';
                        do
                        {
                            system("cls");
                            cout <<endl<<endl<<endl<< "          "<<subtitle<<endl<<endl<<endl<<endl;
                            cout << "1 - Assessments " << endl<<endl;
                            cout << "2 - Grading" << endl<<endl;
                            //cout << "3 - Calculate " << endl<<endl;
                            cout << "0 - Exit" << endl<<endl;
                            cin>>c1;

                            switch(c1)
                            {
                                case '1':
                                    {
                                        int v; // used for Assessments (1 for Att. 2 for Q1, 3 for Q2 etc.
                                        char ch3='n';
                                        do
                                        {
                                            system("cls");
                                            cout <<endl<<endl<<endl<< "     A S S E S S M E N T S - " <<subtitle<< endl<<endl<<endl<<endl;
                                            cout << "1 - Attendance/Class Participation" << endl<<endl;
                                            cout << "2 - Quiz 1" << endl<<endl;
                                            cout << "3 - Quiz 2" << endl<<endl;
                                            cout << "4 - Mid Term" << endl<<endl;
                                            cout << "5 - Final Term" << endl<<endl;
                                            cout << "0 - Exit " << endl<<endl;
                                            cin>>c2;

                                            switch(c2)
                                            {
                                                case '1':
                                                    {
                                                        v=1;
                                                        char ch3='n';
                                                        do
                                                        {
                                                            system("cls");
                                                            cout <<endl<<endl<<endl<< "     A T T E N D A N C E Marks - " <<subtitle<< endl<<endl<<endl<<endl;
                                                            cout << "ATTENDANCE MARKS" << endl<<endl;
                                                            cout << "1 - MARKS ENTRY" << endl;
                                                            cout << "2 - UPDATE MARKS" << endl;
                                                            cout << "3 - DISPLAY ATTENDANCE MARKS" << endl;
                                                            cout << "0 - EXIT" << endl<<endl;
                                                            cin>>c4;

                                                            switch(c4)
                                                            {
                                                                case '1':
                                                                    {
                                                                        float marksatt;
                                                                        system("cls");
                                                                        if((flagatt0==0 && p==0)|| (flagatt1==0 && p==1) || (flagatt2==0 && p==2) || (flagatt3==0 && p==3) ||(flagatt4==0 && p==4))
                                                                        {
                                                                            cout <<endl<<endl<<"     Attendance/Class Participation Marks - " <<subtitle<< endl<<endl;
                                                                            if (p==0)
                                                                                flagatt0=1;
                                                                            else if (p==1)
                                                                                flagatt1=1;
                                                                            else if (p==2)
                                                                                flagatt2=1;
                                                                            else if (p==3)
                                                                                flagatt3=1;
                                                                            else if (p==4)
                                                                                flagatt4=1;

                                                                            for (int j=0;j<size_class;j++)
                                                                            {
                                                                                cout<<"Student ID:   "<<classbme[p][j].stu_id<<endl;
                                                                                cout<<"Student Name: "<<classbme[p][j].name<<endl;
                                                                                cout<<endl<<"Attendance Marks: ";
                                                                                cin>>marksatt;
                                                                                if(marksatt<0 || marksatt>10)
                                                                                {
                                                                                    cout<<endl<<endl<<"Total Marks 10 - Please Enter Marks between (0-10)"<<endl<<endl;
                                                                                    j--;
                                                                                    getch();
                                                                                    system("cls");
                                                                                    cout <<endl<<endl<<"     Attendance/Class Participation Marks - " <<subtitle<< endl<<endl;
                                                                                }
                                                                                else
                                                                                {
                                                                                    classbme[p][j].Att=marksatt;
                                                                                    cout<<endl;
                                                                                }
                                                                            }

                                                                            // v=1 for attendance marks
                                                                            dispMarks(classbme, p, size_class, v);
                                                                        }

                                                                        else
                                                                        {
                                                                            char ch;
                                                                            cout<<endl<<endl<<subtitle<<" - Attendance Marks Already entered. "<<endl<<endl;

                                                                            cout<<"Do You Want To Re-Enter Attendance Marks: (Y/N) ";
                                                                            cin>>ch;

                                                                            if (ch=='Y' || ch=='y')
                                                                            {
                                                                                cout<<endl<<endl<<"All Marks have been reset: Enter the Attendance Marks again. ";
                                                                                getch();
                                                                                if (p==0)
                                                                                    flagatt0=0;
                                                                                else if (p==1)
                                                                                    flagatt1=0;
                                                                                else if (p==2)
                                                                                    flagatt2=0;
                                                                                else if (p==3)
                                                                                    flagatt3=0;
                                                                                else if (p==4)
                                                                                    flagatt4=0;
                                                                            }

                                                                        }
                                                                    }
                                                                    break;

                                                                case '2':
                                                                    {
                                                                        float marks;
                                                                        string student_id;

                                                                        cout<<endl<<"Student ID (e.g., 2019bme21) "<<endl<<endl;
                                                                        cout<<"Enter Student ID: ";
                                                                        cin>>student_id;

                                                                        for (int j=0;j<size_class;j++)
                                                                        {
                                                                            flag1=0;
                                                                            if(classbme[p][j].stu_id==student_id)
                                                                            {
                                                                                cout<<endl<<"Enter Attendance Marks: ";
                                                                                cin>>marks;
                                                                                while(marks<0 || marks>10){
                                                                                     cout<<endl<<endl<<"Max. Marks 10 - Please Enter Marks between (0-10)"<<endl<<endl;
                                                                                     cout<<endl<<endl<<"Enter Attendance Marks: ";
                                                                                     cin>>marks;
                                                                                }
                                                                                classbme[p][j].Att= marks;
                                                                                flag1=1;
                                                                                cout<<endl<<"Marks Updated ";
                                                                                getch();
                                                                                break;
                                                                            }
                                                                        }

                                                                        if (flag1==0)
                                                                        {
                                                                            cout<<endl<<endl<<"Student Not found. "<<endl<<endl;
                                                                            getch();
                                                                        }
                                                                    }
                                                                    break;
                                                                case '3':
                                                                    {
                                                                        dispMarks(classbme, p, size_class, v);
                                                                    }
                                                                    break;

                                                                case '0':
                                                                    {
                                                                        ch3='Y';
                                                                    }
                                                                    break;
                                                            }

                                                        }while (ch3=='N' || ch3=='n');

                                                    }
                                                    break;

                                                case '2':
                                                    {
                                                        v=2;
                                                        char ch3='n';
                                                        do
                                                        {
                                                            system("cls");
                                                            cout <<endl<<endl<<endl<< "     Q U I Z 1 Marks - " <<subtitle<< endl<<endl<<endl<<endl;
                                                            cout << "1 - QUIZ 1 MARKS ENTRY" << endl;
                                                            cout << "2 - UPDATE QUIZ  1 MARKS" << endl;
                                                            cout << "3 - DISPLAY QUIZ 1 MARKS" << endl;
                                                            cout << "0 - EXIT" << endl<<endl;
                                                            cin>>c4;

                                                            switch(c4)
                                                            {
                                                                case '1':
                                                                    {
                                                                        float marksq;
                                                                        system("cls");
                                                                        if((flagq10==0 && p==0) || (flagq11==0 && p==1) || (flagq12==0 && p==2) || (flagq13==0 && p==3) ||(flagq14==0 && p==4))
                                                                        {
                                                                            cout <<endl<<endl<<"     Quiz 1 Marks - " <<subtitle<< endl<<endl;
                                                                            if (p==0)
                                                                                flagq10=1;
                                                                            else if (p==1)
                                                                                flagq11=1;
                                                                            else if (p==2)
                                                                                flagq12=1;
                                                                            else if (p==3)
                                                                                flagq13=1;
                                                                            else if (p==4)
                                                                                flagq14=1;

                                                                            for (int j=0;j<size_class;j++)
                                                                            {
                                                                                cout<<"Student ID:   "<<classbme[p][j].stu_id<<endl;
                                                                                cout<<"Student Name: "<<classbme[p][j].name<<endl;
                                                                                cout<<endl<<"Quiz 1 Marks: ";
                                                                                cin>>marksq;
                                                                                if(marksq<0 || marksq>10)
                                                                                {
                                                                                    cout<<endl<<endl<<"Total Marks 10 - Please Enter Marks between (0-10)"<<endl<<endl;
                                                                                    j--;
                                                                                    getch();
                                                                                    system("cls");
                                                                                    cout <<endl<<endl<<"     Quiz 1 Marks - " <<subtitle<< endl<<endl;
                                                                                }
                                                                                else
                                                                                {
                                                                                    classbme[p][j].Q1=marksq;
                                                                                    cout<<endl;
                                                                                }
                                                                            }

                                                                            dispMarks(classbme, p, size_class, v);
                                                                        }

                                                                        else
                                                                        {
                                                                            char ch;
                                                                            cout<<endl<<endl<<"QUIZ 1 Marks Already entered. "<<endl<<endl;
                                                                            cout<<"Do You Want To Re-Enter Quiz 1 Marks: (Y/N) ";
                                                                            cin>>ch;

                                                                            if (ch=='Y' || ch=='y')
                                                                            {
                                                                                cout<<endl<<endl<<"All Marks have been reset: Enter the Quiz 1 Marks again. ";
                                                                                getch();
                                                                                if (p==0)
                                                                                    flagq10=0;
                                                                                else if (p==1)
                                                                                    flagq11=0;
                                                                                else if (p==2)
                                                                                    flagq12=0;
                                                                                else if (p==3)
                                                                                    flagq13=0;
                                                                                else if (p==4)
                                                                                    flagq14=0;
                                                                            }

                                                                        }
                                                                    }
                                                                    break;

                                                                case '2':
                                                                    {
                                                                        float qmarks;
                                                                        string student_id;

                                                                        cout<<endl<<"Student ID (e.g., 2019bme21) "<<endl<<endl;
                                                                        cout<<"Enter Student ID: ";
                                                                        cin>>student_id;

                                                                        for (int j=0;j<size_class;j++)
                                                                        {
                                                                            flag2=0;
                                                                            if(classbme[p][j].stu_id==student_id)
                                                                            {
                                                                                cout<<endl<<"Enter Quiz 1 Marks: ";
                                                                                cin>>qmarks;
                                                                                while(qmarks<0 || qmarks>10){
                                                                                     cout<<endl<<endl<<"Max. Marks 10 - Please Enter Marks between (0-10)"<<endl<<endl;
                                                                                     cout<<endl<<endl<<"Enter Quiz 1 Marks: ";
                                                                                     cin>>qmarks;
                                                                                }
                                                                                classbme[p][j].Q1= qmarks;
                                                                                flag2=1;                                                                               flag2=1;
                                                                                cout<<"Quiz 1 Marks Updated ";
                                                                                getch();
                                                                                break;
                                                                            }
                                                                        }
                                                                        if (flag2==0)
                                                                        {
                                                                            cout<<endl<<endl<<"Student Not found. "<<endl<<endl;
                                                                            getch();
                                                                        }
                                                                    }
                                                                    break;

                                                                case '3':
                                                                {
                                                                    dispMarks(classbme, p, size_class, v);
                                                                }
                                                                break;

                                                            case '0':
                                                                {
                                                                    ch3='Y';
                                                                }
                                                                break;
                                                            }

                                                        }while (ch3=='N' || ch3=='n');
                                                    }
                                                    break;

                                                case '3':
                                                    {
                                                        v=3;
                                                        char ch3='n';
                                                        do
                                                        {
                                                            system("cls");
                                                            cout <<endl<<endl<<endl<< "     Q U I Z 2 Marks - " <<subtitle<< endl<<endl<<endl<<endl;
                                                            cout << "1 - QUIZ 2 MARKS ENTRY" << endl;
                                                            cout << "2 - UPDATE QUIZ  2 MARKS" << endl;
                                                            cout << "3 - DISPLAY QUIZ 2 MARKS" << endl;
                                                            cout << "0 - EXIT" << endl<<endl;
                                                            cin>>c4;
                                                            switch(c4)
                                                            {
                                                                case '1':
                                                                    {
                                                                        float q2marks;
                                                                        system("cls");
                                                                        if((flagq20==0 && p==0) || (flagq21==0 && p==1) || (flagq22==0 && p==2) || (flagq23==0 && p==3) ||(flagq24==0 && p==4))
                                                                        {
                                                                            cout <<endl<<endl<<"     Quiz 2 Marks - " <<subtitle<< endl<<endl;
                                                                            if (p==0)
                                                                            flagq20=1;
                                                                            else if (p==1)
                                                                                flagq21=1;
                                                                            else if (p==2)
                                                                                flagq22=1;
                                                                            else if (p==3)
                                                                                flagq23=1;
                                                                            else if (p==4)
                                                                                flagq24=1;

                                                                            for (int j=0;j<size_class;j++)
                                                                            {
                                                                                cout<<"Student ID:   "<<classbme[p][j].stu_id<<endl;
                                                                                cout<<"Student Name: "<<classbme[p][j].name<<endl;
                                                                                cout<<endl<<"Quiz 2 Marks: ";
                                                                                cin>>q2marks;
                                                                                if(q2marks<0 || q2marks>10)
                                                                                {
                                                                                    cout<<endl<<endl<<"Total Marks 10 - Please Enter Marks between (0-10)"<<endl<<endl;
                                                                                    j--;
                                                                                    getch();
                                                                                    system("cls");
                                                                                    cout <<endl<<endl<<"     Quiz 2 Marks - " <<subtitle<< endl<<endl;
                                                                                }
                                                                                else
                                                                                {
                                                                                    classbme[p][j].Q2=q2marks;
                                                                                    cout<<endl;
                                                                                }
                                                                            }
                                                                            dispMarks(classbme, p, size_class, v);
                                                                        }

                                                                        else
                                                                        {
                                                                            char ch;
                                                                            cout<<endl<<endl<<"QUIZ 2 Marks Already entered. "<<endl<<endl;
                                                                            cout<<"Do You Want To Re-Enter Q2 Marks: (Y/N) ";
                                                                            cin>>ch;

                                                                            if (ch=='Y' || ch=='y')
                                                                            {
                                                                                cout<<endl<<endl<<"All Marks have been reset: Enter the Quiz 2 Marks again. ";
                                                                                getch();
                                                                                if (p==0)
                                                                                    flagq20=0;
                                                                                else if (p==1)
                                                                                    flagq21=0;
                                                                                else if (p==2)
                                                                                    flagq22=0;
                                                                                else if (p==3)
                                                                                    flagq23=0;
                                                                                else if (p==4)
                                                                                    flagq24=0;
                                                                            }
                                                                        }
                                                                    }
                                                                    break;

                                                                case '2':
                                                                    {
                                                                        string student_id;
                                                                        float q2marks;
                                                                        cout<<endl<<"Student ID (e.g., 2019bme21) "<<endl<<endl;
                                                                        cout<<"Enter Student ID: ";
                                                                        cin>>student_id;

                                                                        for (int j=0;j<size_class;j++)
                                                                        {
                                                                            flag4=0;
                                                                            if(classbme[p][j].stu_id==student_id)
                                                                            {
                                                                                cout<<"Enter Quiz 2 Marks: ";
                                                                                cin>>q2marks;
                                                                                while(q2marks<0 || q2marks>10)
                                                                                {
                                                                                    cout<<endl<<endl<<"Max. Marks 10 - Please Enter Marks between (0-10)"<<endl<<endl;
                                                                                    cout<<endl<<endl<<"Enter Quiz 2 Marks: ";
                                                                                    cin>>q2marks;
                                                                                }
                                                                                classbme[p][j].Q2= q2marks;
                                                                                flag4=1;
                                                                                cout<<"Quiz 2 Marks Updated ";
                                                                                getch();
                                                                                break;
                                                                            }
                                                                        }
                                                                        if (flag4==0)
                                                                        {
                                                                            cout<<endl<<endl<<"Student Not found. "<<endl<<endl;
                                                                            getch();
                                                                        }
                                                                    }
                                                                    break;
                                                                case '3':
                                                                    {
                                                                        dispMarks(classbme, p, size_class, v);
                                                                    }
                                                                    break;

                                                                case '0':
                                                                        ch3='Y';
                                                                    break;
                                                            }

                                                        }while (ch3=='N' || ch3=='n');

                                                    }
                                                    break;

                                                case '4':
                                                    {
                                                        v=4;
                                                        char ch3='n';
                                                        do
                                                        {
                                                            system("cls");
                                                            cout <<endl<<endl<<endl<< "     M I D   T E R M Marks - " <<subtitle<< endl<<endl<<endl<<endl;
                                                            cout << "1 - MID TERM MARKS ENTRY" << endl;
                                                            cout << "2 - UPDATE MID TERM MARKS" << endl;
                                                            cout << "3 - DISPLAY MID TERM MARKS" << endl;
                                                            cout << "0 - EXIT" << endl<<endl;
                                                            cin>>c4;
                                                            switch(c4)
                                                            {
                                                                case '1':
                                                                    {
                                                                        float marksmid;
                                                                        system("cls");
                                                                        if((flagm0==0 && p==0) || (flagm1==0 && p==1) || (flagm2==0 && p==2) || (flagm3==0 && p==3) ||(flagm4==0 && p==4))
                                                                        {
                                                                            cout <<endl<<endl<<"     MID TERM Marks - " <<subtitle<< endl<<endl;
                                                                            if (p==0)
                                                                                flagm0=1;
                                                                            else if (p==1)
                                                                                flagm1=1;
                                                                            else if (p==2)
                                                                                flagm2=1;
                                                                            else if (p==3)
                                                                                flagm3=1;
                                                                            else if (p==4)
                                                                                flagm4=1;

                                                                            for (int j=0;j<size_class;j++)
                                                                            {
                                                                                cout<<"Student ID:   "<<classbme[p][j].stu_id<<endl;
                                                                                cout<<"Student Name: "<<classbme[p][j].name<<endl;
                                                                                cout<<endl<<"MID TERM Marks: ";
                                                                                cin>>marksmid;
                                                                                if(marksmid<0 || marksmid>30)
                                                                                {
                                                                                    cout<<endl<<endl<<"Total Marks 30 - Please Enter Marks between (0-30)"<<endl<<endl;
                                                                                    j--;
                                                                                    getch();
                                                                                    system("cls");
                                                                                    cout <<endl<<endl<<"     MID Marks - " <<subtitle<< endl<<endl;
                                                                                }
                                                                                else
                                                                                {
                                                                                    classbme[p][j].Mid=marksmid;
                                                                                    cout<<endl;
                                                                                }
                                                                            }

                                                                            dispMarks(classbme, p, size_class, v);
                                                                        }

                                                                        else
                                                                        {
                                                                            char ch;
                                                                            cout<<endl<<endl<<"MID TERM Marks Already entered. "<<endl<<endl;
                                                                            cout<<"Do You Want To Re-Enter Mid Term Marks: (Y/N) ";
                                                                            cin>>ch;

                                                                            if (ch=='Y' || ch=='y')
                                                                            {
                                                                                cout<<endl<<endl<<"All Marks have been reset: Enter the Mid Term Marks again. ";
                                                                                getch();
                                                                                if (p==0)
                                                                                    flagm0=0;
                                                                                else if (p==1)
                                                                                    flagm1=0;
                                                                                else if (p==2)
                                                                                    flagm2=0;
                                                                                else if (p==3)
                                                                                    flagm3=0;
                                                                                else if (p==4)
                                                                                    flagm4=0;
                                                                            }
                                                                        }
                                                                    }
                                                                    break;

                                                                case '2':
                                                                    {
                                                                        string student_id;
                                                                        float marksM;

                                                                        cout<<endl<<"Student ID (e.g., 2019bme21) "<<endl<<endl;
                                                                        cout<<"Enter Student ID: ";
                                                                        cin>>student_id;

                                                                        for (int j=0;j<size_class;j++)
                                                                        {
                                                                            flag7=0;
                                                                            if(classbme[p][j].stu_id==student_id)
                                                                            {
                                                                                cout<<"Enter MID TERM Marks: ";
                                                                                cin>>marksM;
                                                                                while(marksM<0 || marksM>30)
                                                                                {
                                                                                    cout<<endl<<endl<<"Max. Marks 30 - Please Enter Marks between (0-30)"<<endl<<endl;
                                                                                    cout<<endl<<endl<<"Enter MID TERM Marks: ";
                                                                                    cin>>marksM;
                                                                                }
                                                                                classbme[p][j].Mid= marksM;
                                                                                flag7=1;
                                                                                cout<<"Mid Term Marks updated ";
                                                                                getch();
                                                                                break;
                                                                            }
                                                                        }
                                                                        if (flag7==0)
                                                                        {
                                                                            cout<<endl<<endl<<"Student Not found. "<<endl<<endl;
                                                                            getch();
                                                                        }
                                                                    }
                                                                    break;

                                                                case '3':
                                                                    {
                                                                        dispMarks(classbme, p, size_class, v);
                                                                    }
                                                                    break;

                                                                case '0':
                                                                        ch3='Y';
                                                                        break;
                                                            }

                                                        }while (ch3=='N' || ch3=='n');

                                                    }
                                                    break;

                                                case '5':
                                                    {
                                                        v=5;
                                                        char ch3='n';
                                                        do
                                                        {
                                                            system("cls");
                                                            cout <<endl<<endl<<endl<< "     F I N A L   T E R M Marks - " <<subtitle<< endl<<endl<<endl<<endl;
                                                            cout << "1 - FINAL TERM MARKS ENTRY" << endl;
                                                            cout << "2 - UPDATE FINAL TERM MARKS" << endl;
                                                            cout << "3 - DISPLAY FINAL TERM MARKS" << endl;
                                                            cout << "0 - EXIT" << endl<<endl;
                                                            cin>>c4;
                                                            switch(c4)
                                                            {
                                                                case '1':
                                                                    {
                                                                        float marksF;
                                                                        system("cls");
                                                                        if((flagf0==0 && p==0) || (flagf1==0 && p==1) || (flagf2==0 && p==2) || (flagf3==0 && p==3) ||(flagf4==0 && p==4))
                                                                        {
                                                                            cout <<endl<<endl<<"     FINAL TERM Marks - " <<subtitle<< endl<<endl;
                                                                            if (p==0)
                                                                                flagf0=1;
                                                                            else if (p==1)
                                                                                flagf1=1;
                                                                            else if (p==2)
                                                                                flagf2=1;
                                                                            else if (p==3)
                                                                                flagf3=1;
                                                                            else if (p==4)
                                                                                flagf4=1;

                                                                            for (int j=0;j<size_class;j++)
                                                                            {
                                                                                cout<<"Student ID:   "<<classbme[p][j].stu_id<<endl;
                                                                                cout<<"Student Name: "<<classbme[p][j].name<<endl;
                                                                                cout<<endl<<"FINAL TERM Marks: ";
                                                                                cin>>marksF;
                                                                                if(marksF<0 || marksF>40)
                                                                                {
                                                                                    cout<<endl<<endl<<"Total Marks 40 - Please Enter Marks between (0-40)"<<endl<<endl;
                                                                                    j--;
                                                                                    getch();
                                                                                    system("cls");
                                                                                    cout <<endl<<endl<<"     FINAL TERM Marks - " <<subtitle<< endl<<endl;
                                                                                }
                                                                                else
                                                                                {
                                                                                    classbme[p][j].Final=marksF;
                                                                                    cout<<endl;
                                                                                }
                                                                            }

                                                                            dispMarks(classbme, p, size_class, v);
                                                                        }
                                                                        else
                                                                        {
                                                                            char ch;
                                                                            cout<<endl<<endl<<"FINAL TERM Marks Already entered. "<<endl<<endl;
                                                                            cout<<"Do You Want To Re-Enter Mid Term Marks: (Y/N) ";
                                                                            cin>>ch;

                                                                            if (ch=='Y' || ch=='y')
                                                                            {
                                                                                cout<<endl<<endl<<"All Marks have been reset: Enter the Final Term Marks again. ";
                                                                                getch();
                                                                                if (p==0)
                                                                                    flagf0=0;
                                                                                else if (p==1)
                                                                                    flagf1=0;
                                                                                else if (p==2)
                                                                                    flagf2=0;
                                                                                else if (p==3)
                                                                                    flagf3=0;
                                                                                else if (p==4)
                                                                                    flagf4=0;
                                                                            }
                                                                        }
                                                                    }
                                                                    break;

                                                                case '2':
                                                                    {
                                                                        string student_id;
                                                                        float Fmarks;

                                                                        cout<<endl<<"Student ID (e.g., 2019bme21) "<<endl<<endl;
                                                                        cout<<"Enter Student ID: ";
                                                                        cin>>student_id;

                                                                        for (int j=0;j<size_class;j++)
                                                                        {
                                                                            flag11=0;
                                                                            if(classbme[p][j].stu_id==student_id)
                                                                            {
                                                                                cout<<"Enter FINAL TERM Marks: ";
                                                                                cin>>Fmarks;
                                                                                while(Fmarks<0 || Fmarks>40)
                                                                                {
                                                                                    cout<<endl<<endl<<"Max. Marks 40 - Please Enter Marks between (0-40)"<<endl<<endl;
                                                                                    cout<<endl<<endl<<"Enter FINAL TERM Marks: ";
                                                                                    cin>>Fmarks;
                                                                                }
                                                                                classbme[p][j].Final= Fmarks;
                                                                                flag11=1;
                                                                                cout<<"Final Term Marks Updated ";
                                                                                getch();
                                                                                break;
                                                                            }
                                                                        }

                                                                        if (flag11==0)
                                                                        {
                                                                            cout<<endl<<endl<<"Student Not found. "<<endl<<endl;
                                                                            getch();
                                                                        }
                                                                    }
                                                                    break;

                                                                case '3':
                                                                    {
                                                                        dispMarks(classbme, p, size_class, v);
                                                                    }
                                                                    break;

                                                                case '0':
                                                                        ch3='Y';
                                                                        break;
                                                            }

                                                        }while (ch3=='N' || ch3=='n');
                                                    }
                                                    break;

                                                case '0':
                                                        ch3='Y';
                                                        break;
                                            }

                                        }while (ch3=='N' || ch3=='n');
                                    }
                                    break;
                                case '2':
                                    {
                                        for (int j=0;j<size_class;j++)
                                        {
                                            classbme[p][j].Total =classbme[p][j].Att+classbme[p][j].Q1+classbme[p][j].Q2+classbme[p][j].Mid+classbme[p][j].Final;
                                        }

                                        RelativeGrades(classbme, p, size_class);

                                        char ch9;
                                        //system("cls");
                                        cout<<endl<<endl<<"1. AWARD LIST UNSORTED - Registration Wise "<<endl;
                                        cout<<"2. AWARD LIST SORTED - Grade Wise "<<endl<<endl<<endl;
                                        cin>>ch9;

                                        system("cls");
                                        cout<<endl<<endl<<"          A W A R D   L I S T"<<endl<<endl;

                                        if (p==0)
                                        {
                                            cout<<"Course Name: "<<sub1<<endl;
                                            cout<<"Instructor:  "<<inst1<<endl<<endl;
                                        }
                                        else if (p==1)
                                        {
                                            cout<<"Course Name: "<<sub2<<endl;
                                            cout<<"Instructor:  "<<inst2<<endl<<endl;
                                        }
                                        else if (p==2)
                                        {
                                            cout<<"Course Name: "<<sub3<<endl;
                                            cout<<"Instructor:  "<<inst3<<endl<<endl;
                                        }

                                        else if (p==3)
                                        {
                                            cout<<"Course Name: "<<sub4<<endl;
                                            cout<<"Instructor:  "<<inst4<<endl<<endl;
                                        }

                                        else if (p==4)
                                        {
                                            cout<<"Course Name: "<<sub5<<endl;
                                            cout<<"Instructor:  "<<inst5<<endl<<endl<<endl;
                                        }
                                        cout<<"Student ID  "<<"Student Name          "<<"Att   "<<"Q1    "<<"Q2    "<<"Mid    "<<"Final  "<<"Total "<<"Grade "<<endl<<endl;


                                        if (ch9=='1')
                                        {



                                        for (int j=0;j<size_class;j++)
                                        {

                                            cout<<setw(12)<<left<<classbme[p][j].stu_id<<setw(22)<<left<<classbme[p][j].name
                                            <<setw(6)<<setprecision(3)<<left<<classbme[p][j].Att
                                            <<setw(6)<<setprecision(3)<<left<<classbme[p][j].Q1
                                            <<setw(6)<<setprecision(3)<<left<<classbme[p][j].Q2
                                            <<setw(7)<<setprecision(3)<<left<<classbme[p][j].Mid
                                            <<setw(7)<<setprecision(3)<<left<<classbme[p][j].Final
                                            <<setw(7)<<setprecision(3)<<left<<classbme[p][j].Total
                                            <<setw(2)<<std::left<<classbme[p][j].grade;
                                            cout<<endl;
                                        }
                                        getch();
                                        } // UnSorted PART
                                        else
                                        {   //SORTED PART
                                            student classbmecopy[subj][size_class];//Copy of Class

                                            for (int i=0;i<subj;i++)
                                            for (int j=0;j<size_class;j++)
                                            {
                                                classbmecopy[i][j].stu_id = classbme[i][j].stu_id;
                                                classbmecopy[i][j].name = classbme[i][j].name;
                                                classbmecopy[i][j].Att = classbme[i][j].Att;
                                                classbmecopy[i][j].Q1 = classbme[i][j].Q1;
                                                classbmecopy[i][j].Q2 = classbme[i][j].Q2;
                                                classbmecopy[i][j].Mid = classbme[i][j].Mid;
                                                classbmecopy[i][j].Final = classbme[i][j].Final;
                                                classbmecopy[i][j].Total = classbme[i][j].Total;
                                                classbmecopy[i][j].grade = classbme[i][j].grade;
                                            }

                                            sorted_gradwise(classbmecopy, p, size_class);

                                            //cout<<"Student ID  "<<"Student Name          "<<"Att   "<<"Q1    "<<"Q2    "<<"Mid    "<<"Final  "<<"Total "<<"Grade "<<endl<<endl;
                                            for (int j=0;j<size_class;j++)
                                            {
                                                cout<<setw(12)<<left<<classbmecopy[p][j].stu_id<<setw(22)<<left<<classbmecopy[p][j].name
                                                <<setw(6)<<setprecision(3)<<std::left<<classbmecopy[p][j].Att
                                                <<setw(6)<<setprecision(3)<<std::left<<classbmecopy[p][j].Q1
                                                <<setw(6)<<setprecision(3)<<std::left<<classbmecopy[p][j].Q2
                                                <<setw(7)<<setprecision(3)<<std::left<<classbmecopy[p][j].Mid
                                                <<setw(7)<<setprecision(3)<<std::left<<classbmecopy[p][j].Final
                                                <<setw(7)<<setprecision(3)<<std::left<<classbmecopy[p][j].Total
                                                <<setw(2)<<std::left<<classbmecopy[p][j].grade;
                                                cout<<endl;
                                            }
                                            getch();



                                        }

                                    }
                                    break;

                                case '0':
                                        ch2='Y';
                                        break;
                            }

                        } while (ch2=='N' || ch2=='n');
                    }
                    else
                    {
                        cout<<"Wrong Password. "<<endl<<endl;
                        cout<<"Plz Try Again or Ask Administrator to reset your password or Try Again. ";
                        getch();
                    }

                } while (ch1=='N' || ch1=='n'); //MAIN MENU

            }
            break;

        case '0':
                ch5='y';

                fstream of("BMECLASSDATA.txt", std::ios::out);

                if (of.is_open())
                {
                    writemap(of, classbme);
                    of.close();
                }

                //SAVE PASSWORDS
                fstream savePass;
                savePass.open("Passwords.txt", ios::out);

                savePass << pass1<<"\n";
                savePass << pass2<<"\n";
                savePass << pass3<<"\n";
                savePass << pass4<<"\n";
                savePass << pass5<<"\n";
                savePass << admpass<<"\n";

                savePass.close();
                //SAVE PASSWORDS

                //SUBJECT NAME SAVING
                fstream saveSubj;
                saveSubj.open("Subjects.txt", std::ios::out);
                saveSubj << sub1<<"\n";
                saveSubj << sub2<<"\n";
                saveSubj << sub3<<"\n";
                saveSubj << sub4<<"\n";
                saveSubj << sub5<<"\n";
                saveSubj.close();
                //SUBJECT NAME SAVING

                //INSTRUCTOR NAME SAVING
                fstream saveInst;
                saveInst.open("Instructors.txt", std::ios::out);
                saveInst << inst1<<"\n";
                saveInst << inst2<<"\n";
                saveInst << inst3<<"\n";
                saveInst << inst4<<"\n";
                saveInst << inst5<<"\n";
                saveInst.close();
                //INSTRUCTOR NAME SAVING

                //CREDIT HOUR SAVING
                fstream saveCrHr;
                saveCrHr.open("CreditHr.txt", std::ios::out);
                saveCrHr << credtHr1<<"\n";
                saveCrHr << credtHr2<<"\n";
                saveCrHr << credtHr3<<"\n";
                saveCrHr << credtHr4<<"\n";
                saveCrHr << credtHr5<<"\n";
                saveCrHr.close();
                //CREDIT HOUR SAVING

                //SAVE FLAGS
                fstream saveFlags;

                saveFlags.open("Flags.txt", ios::out);

                saveFlags << flagatt0<<"\n";
                saveFlags << flagatt1<<"\n";
                saveFlags << flagatt2<<"\n";
                saveFlags << flagatt3<<"\n";
                saveFlags << flagatt4<<"\n";
                saveFlags << flagq10<<"\n";
                saveFlags << flagq11<<"\n";
                saveFlags << flagq12<<"\n";
                saveFlags << flagq13<<"\n";
                saveFlags << flagq14<<"\n";
                saveFlags << flagq20<<"\n";
                saveFlags << flagq21<<"\n";
                saveFlags << flagq22<<"\n";
                saveFlags << flagq23<<"\n";
                saveFlags << flagq24<<"\n";
                saveFlags << flagm0<<"\n";
                saveFlags << flagm1<<"\n";
                saveFlags << flagm2<<"\n";
                saveFlags << flagm3<<"\n";
                saveFlags << flagm4<<"\n";
                saveFlags << flagf0<<"\n";
                saveFlags << flagf1<<"\n";
                saveFlags << flagf2<<"\n";
                saveFlags << flagf3<<"\n";
                saveFlags << flagf4<<"\n";

                saveFlags << flags_reg<<"\n";

                saveFlags << flag1<<"\n";
                saveFlags << flag2<<"\n";
                saveFlags << flag4<<"\n";
                saveFlags << flag7<<"\n";
                saveFlags << flag11<<"\n";

                saveFlags.close();
                //SAVE FLAGS


                break;
    }

}while (ch5=='N' || ch5=='n'); //ADMINISTOR


return 0;
}

//Display Attendance Marks
void dispMarks(student classbme[][size_class], int p, int s_class, int v)
{
    cout<<endl<<endl<<"Student ID: "<<"Student Name:       "<<"Marks"<<endl<<endl;
    for (int j=0;j<s_class;j++)
    {
        if (v==1)
        {
            cout<<setw(12)<<left<<classbme[p][j].stu_id<<setw(22)<<left<<classbme[p][j].name<<setw(6)<<setprecision(3)<<std::left<<classbme[p][j].Att;
            cout<<endl;
        }
        else if (v==2)
        {
            cout<<setw(12)<<left<<classbme[p][j].stu_id<<setw(22)<<left<<classbme[p][j].name<<setw(6)<<setprecision(3)<<std::left<<classbme[p][j].Q1;
            cout<<endl;
        }
        else if (v==3)
        {
            cout<<setw(12)<<left<<classbme[p][j].stu_id<<setw(22)<<left<<classbme[p][j].name<<setw(6)<<setprecision(3)<<std::left<<classbme[p][j].Q2;
            cout<<endl;
        }
        else if (v==4)
        {
            cout<<setw(12)<<left<<classbme[p][j].stu_id<<setw(22)<<left<<classbme[p][j].name<<setw(6)<<setprecision(3)<<std::left<<classbme[p][j].Mid;
            cout<<endl;
        }
        else if (v==5)
        {
            cout<<setw(12)<<left<<classbme[p][j].stu_id<<setw(22)<<left<<classbme[p][j].name<<setw(6)<<setprecision(3)<<std::left<<classbme[p][j].Final;
            cout<<endl;
        }

    }
    getche();

}

void RelativeGrades(student classbme [][size_class], int p, int s_class)

{

float avg;
float stdev;
float classtotal;
float sqrtotal;
    if (p==0)
    {
    classtotal=0;
    for (int j=0; j<s_class;j++)
        classtotal=classtotal+classbme[p][j].Total;

    avg=classtotal/(s_class);



    sqrtotal=0;
    for (int k=0; k<s_class; k++)
        sqrtotal=sqrtotal+pow((classbme[p][k].Total-avg),2.0);

    float sqrmean;
    sqrmean=sqrtotal/(s_class);
    stdev=sqrt(sqrmean);






    //cout<<endl<<"Average = "<<avg;
    //cout<<endl<<"SD = "<<stdev<<endl;

    for (int m=0;m<s_class;m++)
    {
        classbme[p][m].grade=grade(classbme[p][m].Total, avg, stdev);
    }

   /* cout<<endl<<endl<<"GRADING BRACKET"<<endl<<endl;
    cout<<"A+ "<<(avg+1.5*stdev)<<endl;

    cout<<"A- "<<(avg+(7.0/6.0)*stdev)<<" - "<<(avg+1.5*stdev)<<endl;

    cout<<"B+ "<<(avg+(5.0/6.0)*stdev)<<" - "<<(avg+(7.0/6.0)*stdev)<<endl;

    cout<<"B  "<<(avg+0.5*stdev)<<" - "<<(avg+(5.0/6.0)*stdev)<<endl;

    cout<<"B- "<<(avg+(1.0/4.0)*stdev)<<" - "<<(avg+(1.0/2.0)*stdev)<<endl;

    cout<<"C+ "<<(avg-(1.0/4.0)*stdev)<<" - "<<(avg+(1.0/4.0)*stdev)<<endl;

    cout<<"C  "<<(avg-(1.0/2.0)*stdev)<<" - "<<(avg-(1.0/4.0)*stdev)<<endl;

    cout<<"C- "<<(avg-(5.0/6.0)*stdev) <<" - "<<(avg-(1.0/2.0)*stdev)<<endl;

    cout<<"D+ "<<(avg-(7.0/6.0)*stdev)<<" - "<< (avg-(5.0/6.0)*stdev)<<endl;

    cout<<"D  "<<(avg-1.5*stdev) <<" - "<< (avg-(7.0/6.0)*stdev)<<endl;


    getch();
    */
    }
    else if(p==1)
    {
       classtotal=0;
    for (int j=0; j<s_class;j++)
        classtotal=classtotal+classbme[p][j].Total;


    avg=classtotal/(s_class);

    sqrtotal=0;
    for (int k=0; k<s_class; k++)
        sqrtotal=sqrtotal+pow((classbme[p][k].Total-avg),2.0);

    float sqrmean;
    sqrmean=sqrtotal/(s_class);
    stdev=sqrt(sqrmean);


    //cout<<endl<<"Average = "<<avg;
    //cout<<endl<<"SD = "<<stdev<<endl;

    for (int m=0;m<s_class;m++)
    {
        classbme[p][m].grade=grade(classbme[p][m].Total, avg, stdev);
    }
    }

    else if(p==2)
    {
       classtotal=0;
    for (int j=0; j<s_class;j++)
        classtotal=classtotal+classbme[p][j].Total;


    avg=classtotal/(s_class);

    sqrtotal=0;
    for (int k=0; k<s_class; k++)
        sqrtotal=sqrtotal+pow((classbme[p][k].Total-avg),2.0);

    float sqrmean;
    sqrmean=sqrtotal/(s_class);
    stdev=sqrt(sqrmean);

    //cout<<endl<<"Average = "<<avg;
    //cout<<endl<<"SD = "<<stdev<<endl;

    for (int m=0;m<s_class;m++)
    {
        classbme[p][m].grade=grade(classbme[p][m].Total, avg, stdev);
    }
    }

    else if(p==3)
    {
       classtotal=0;
    for (int j=0; j<s_class;j++)
        classtotal=classtotal+classbme[p][j].Total;


    avg=classtotal/(s_class);

    sqrtotal=0;
    for (int k=0; k<s_class; k++)
        sqrtotal=sqrtotal+pow((classbme[p][k].Total-avg),2.0);

    float sqrmean;
    sqrmean=sqrtotal/(s_class);
    stdev=sqrt(sqrmean);

    //cout<<endl<<"Average = "<<avg;
    //cout<<endl<<"SD = "<<stdev<<endl;

    for (int m=0;m<s_class;m++)
    {
        classbme[p][m].grade=grade(classbme[p][m].Total, avg, stdev);
    }
    }
    else if(p==4)
    {
       classtotal=0;
    for (int j=0; j<s_class;j++)
        classtotal=classtotal+classbme[p][j].Total;


    avg=classtotal/(s_class);

    sqrtotal=0;
    for (int k=0; k<s_class; k++)
        sqrtotal=sqrtotal+pow((classbme[p][k].Total-avg),2.0);

    float sqrmean;
    sqrmean=sqrtotal/(s_class);
    stdev=sqrt(sqrmean);


    //cout<<endl<<"Average = "<<avg;
    //cout<<endl<<"SD = "<<stdev<<endl;

    for (int m=0;m<s_class;m++)
    {
        classbme[p][m].grade=grade(classbme[p][m].Total, avg, stdev);
    }
    }

}

string grade(float marks, float avg, float stdev)
{
    if (marks>(avg+(3.0/2.0)*stdev))
        return "A+";
    else if (  (marks>(avg+(7.0/6.0)*stdev)) && (marks<=(avg+(3.0/2.0)*stdev))  )
        return "A-";
    else if (  (marks>(avg+(5.0/6.0)*stdev)) && (marks<=(avg+(7.0/6.0)*stdev))  )
        return "B+";
    else if (  (marks>(avg+(1.0/2.0)*stdev)) && (marks<=(avg+(5.0/6.0)*stdev))  )
        return "B";
    else if (  (marks>(avg+(1.0/4.0)*stdev)) && (marks<=(avg+(1.0/2.0)*stdev))  )
        return "B-";
    else if (  (marks>(avg-(1.0/4.0)*stdev)) && (marks<=(avg+(1.0/4.0)*stdev))  )
        return "C+";
    else if (  (marks>(avg-(1.0/2.0)*stdev)) && (marks<=(avg-(1.0/4.0)*stdev))  )
        return "C";
    else if (  (marks>(avg-(5.0/6.0)*stdev)) && (marks<=(avg-(1.0/2.0)*stdev))  )
        return "C-";
    else if (  (marks>(avg-(7.0/6.0)*stdev)) && (marks<=(avg-(5.0/6.0)*stdev))  )
        return "D+";
    else if (  (marks>(avg-(3.0/2.0)*stdev)) && (marks<=(avg-(7.0/6.0)*stdev))  )
        return "D";
    else if ( (marks<=(avg-1.5*stdev)))
        return "F";
//return " ";
}

float gradePtAvg(student classbme[][size_class], int s_subj, int j)
{
    float grdpt=0;
    float totalgrdpt=0;
    int totalCrHr=0;
    float GPA=0;

    for (int i=0; i<s_subj; i++)
    {
        if (classbme[i][j].grade =="A+")
            grdpt = 4.0;
        else if (classbme[i][j].grade == "A-")
            grdpt = 3.7;
        else if (classbme[i][j].grade == "B+")
            grdpt = 3.3;
        else if (classbme[i][j].grade == "B")
            grdpt = 3.0;
        else if (classbme[i][j].grade == "B-")
            grdpt = 2.7;
        else if (classbme[i][j].grade == "C+")
            grdpt = 2.3;
        else if (classbme[i][j].grade == "C")
            grdpt = 2.0;
        else if (classbme[i][j].grade == "C-")
            grdpt = 1.7;
        else if (classbme[i][j].grade == "D+")
            grdpt = 1.3;
        else if (classbme[i][j].grade == "D")
            grdpt = 1.0;
        else if (classbme[i][j].grade == "F")
            grdpt = 0.0;


        if (i==0)
            totalgrdpt=totalgrdpt+(grdpt*credtHr1);
        if (i==1)
            totalgrdpt=totalgrdpt+(grdpt*credtHr2);
        if (i==2)
            totalgrdpt=totalgrdpt+(grdpt*credtHr3);
        if (i==3)
            totalgrdpt=totalgrdpt+(grdpt*credtHr4);
        if (i==4)
            totalgrdpt=totalgrdpt+(grdpt*credtHr5);
    }
    cout<<endl<<endl<<"Total Grade Points = "<<totalgrdpt<<endl;
        totalCrHr = credtHr1+credtHr2+credtHr3+credtHr4+credtHr5;
    cout<<"Total Credit Hours = "<<totalCrHr<<endl;
        GPA = totalgrdpt / float(totalCrHr);
        return GPA;
}

ostream& writemap(ostream& out, student (&classbme)[subj][size_class])
{
    for (int i = 0; i < subj; i++)
    {
        for (int j = 0; j < size_class; j++)
        {
            out << classbme[i][j].stu_id<<" ";
            out << classbme[i][j].name<<"\n";
            out << classbme[i][j].Att<<" ";
            out << classbme[i][j].Q1<<" ";
            out << classbme[i][j].Q2<<" ";
            out << classbme[i][j].Mid<<" ";
            out << classbme[i][j].Final<<" ";
            out << classbme[i][j].Total<<" ";
            out << classbme[i][j].grade<<" ";
            out<<"\n";
        }
        out<<"\n";
    }
    return out;
}

istream& readDataFromFile(istream& in, student (&classbme)[subj][size_class])
{
    for (int i = 0; i < subj; i++)
    {
        for (int j = 0; j < size_class; j++)
        {
            in >> classbme[i][j].stu_id;
            in >>ws;
            getline(in,classbme[i][j].name);
            in >> classbme[i][j].Att;
            in >> classbme[i][j].Q1;
            in >> classbme[i][j].Q2;
            in >> classbme[i][j].Mid;
            in >> classbme[i][j].Final;
            in >> classbme[i][j].Total;
            in >> classbme[i][j].grade;
            //getline(in,classbme[i][j].grade);
        }
        cout<<endl;
    }
    return in;
}

void sorted_gradwise(student classbmecopy [][size_class], int p, int s_class)  // Insertion Sort
{

    if (p==0)
    {
        float key;
        int i;
        student copyj;
        for (int j = 1; j < s_class; j++)
        {
            key = classbmecopy[p][j].Total;
            copyj= classbmecopy[p][j];

            i = j - 1;
            while (i >= 0 && classbmecopy[p][i].Total < key)
            {
                classbmecopy[p][i+1] = classbmecopy[p][i];
                i = i - 1;
            }
            classbmecopy[p][i+1] = copyj;
        }

    }
    else if (p==1)
    {
        float key;
        int i;
        student copyj;
        for (int j = 1; j < s_class; j++)
        {
            key = classbmecopy[p][j].Total;
            copyj= classbmecopy[p][j];

            i = j - 1;
            while (i >= 0 && classbmecopy[p][i].Total < key)
            {
                classbmecopy[p][i+1] = classbmecopy[p][i];
                i = i - 1;
            }
            classbmecopy[p][i+1] = copyj;
        }

    }
    else if (p==2)
    {
        float key;
        int i;
        student copyj;
        for (int j = 1; j < s_class; j++)
        {
            key = classbmecopy[p][j].Total;
            copyj= classbmecopy[p][j];

            i = j - 1;
            while (i >= 0 && classbmecopy[p][i].Total < key)
            {
                classbmecopy[p][i+1] = classbmecopy[p][i];
                i = i - 1;
            }
            classbmecopy[p][i+1] = copyj;
        }
    }
    else if (p==3)
    {
        float key;
        int i;
        student copyj;
        for (int j = 1; j < s_class; j++)
        {
            key = classbmecopy[p][j].Total;
            copyj= classbmecopy[p][j];

            i = j - 1;
            while (i >= 0 && classbmecopy[p][i].Total < key)
            {
                classbmecopy[p][i+1] = classbmecopy[p][i];
                i = i - 1;
            }
            classbmecopy[p][i+1] = copyj;
        }

    }
    else if (p==4)
    {
        float key;
        int i;
        student copyj;
        for (int j = 1; j < s_class; j++)
        {
            key = classbmecopy[p][j].Total;
            copyj= classbmecopy[p][j];

            i = j - 1;
            while (i >= 0 && classbmecopy[p][i].Total < key)
            {
                classbmecopy[p][i+1] = classbmecopy[p][i];
                i = i - 1;
            }
            classbmecopy[p][i+1] = copyj;
        }

    }

}




