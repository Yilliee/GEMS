#include <iostream>
#include<stdlib.h>
#include<conio.h>

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
};
//int flag=0;
const int subj=6;
const int size_class=3;
int main()
{
    student classbme [subj][size_class]={ { {"2019bme51","Ali",0,0,0,0,0,0},{"2019bme52","Zia",0,0,0,0,0,0}, {"2019bme53","Ben",0,0,0,0,0,0} },
                                          { {"2019bme51","Ali",0,0,0,0,0,0},{"2019bme52","Zia",0,0,0,0,0,0}, {"2019bme53","Ben",0,0,0,0,0,0} },
                                          { {"2019bme51","Ali",0,0,0,0,0,0},{"2019bme52","Zia",0,0,0,0,0,0}, {"2019bme53","Ben",0,0,0,0,0,0} },
                                          { {"2019bme51","Ali",0,0,0,0,0,0},{"2019bme52","Zia",0,0,0,0,0,0}, {"2019bme53","Ben",0,0,0,0,0,0} },
                                          { {"2019bme51","Ali",0,0,0,0,0,0},{"2019bme52","Zia",0,0,0,0,0,0}, {"2019bme53","Ben",0,0,0,0,0,0} },
                                          { {"2019bme51","Ali",0,0,0,0,0,0},{"2019bme52","Zia",0,0,0,0,0,0}, {"2019bme53","Ben",0,0,0,0,0,0} } };

    char c, c1, c2, c3, c4;
    char ch='y';

    int flag=0;
    int flag1=0;
    int flag22=0;
    int flag2=0;
    int flag3=0;
    int flag4=0;
    int flag6=0;
    int flag7=0;
    int flag8=0;
    int flag11=0;
    int p;
    char ch1='n';
    do
    {
    system("cls");
    cout <<endl<<endl<<endl<< "       G E M S - GRADE EVALUATION MANAGEMENT SYSTEM" << endl<<endl<<endl;

    cout << "1 - PROGRAMMING FUNDAMENTALS" << endl<<endl;
    cout << "2 - CIRCUIT ANALYSIS" << endl<<endl;
    cout << "3 - APPLIED PHYSICS" << endl<<endl;
    cout << "4 - PHISIOLOGY " << endl<<endl;
    cout << "5 - CALCULUS" << endl<<endl;
    cout << "6 - SHUTDOWN "<< endl<<endl;
    cin>>c;

    system("cls");

    if (c == '1')
        {
           cout <<endl<<endl<<endl<< "          PROGRAMMING FUNDAMENTALS " << endl<<endl<<endl<<endl;
           p=0;
        }

        else if (c == '2')
            {
                cout <<endl<<endl<<endl<< "          CIRCUIT ANALYSIS " << endl<<endl<<endl<<endl;
                p=1;
            }

        else if (c == '3')
            {
                cout <<endl<<endl<<endl<< "          APPLIED PHYSICS " << endl<<endl<<endl<<endl;
                p=2;
            }
        else if (c == '4')
            {
                cout <<endl<<endl<<endl<< "          PHISIOLOGY " << endl<<endl<<endl<<endl;
                p=3;
            }
        else if (c == '5')
            {
                cout <<endl<<endl<<endl<< "          CALCULUS " << endl<<endl<<endl<<endl;
                p=4;
            }
        else if (c == '6')
            exit(1);




    //switch(c)
    //{


      //  case '1':

            //{
                  char ch2='n';
               do
               {
                //system("cls");
                //cout <<endl<<endl<<endl<< "          PROGRAMMING FUNDAMENTALS " << endl<<endl<<endl<<endl;
                cout << "1 - Assessments " << endl<<endl;
                cout << "2 - Grading" << endl<<endl;
                cout << "3 - Calculate " << endl<<endl;
                cout << "4 - Exit" << endl<<endl;
                cin>>c1;

                switch(c1)
                {
                    case '1':
                        {
                            char ch3='n';
                            do
                            {

                            system("cls");
                            cout <<endl<<endl<<endl<< "     A S S E S S M E N T S - PROGRAMMING FUNDAMENTALS " << endl<<endl<<endl<<endl;
                            cout << "1 - Attendance/Class Participation" << endl<<endl;
                            cout << "2 - Quiz 1" << endl<<endl;
                            cout << "3 - Quiz 2" << endl<<endl;
                            cout << "4 - Mid Term" << endl<<endl;
                            cout << "5 - Final Term" << endl<<endl;
                            cout << "6 - Exit " << endl<<endl;
                            cin>>c2;

                            switch(c2)
                            {
                                case '1':
                                    {       //int flag=0;
                                            char ch3='n';
                                            do
                                            {

                                            system("cls");
                                            cout <<endl<<endl<<endl<< "     A T T E N D A N C E Marks - PROGRAMMING FUNDAMENTALS " << endl<<endl<<endl<<endl;
                                            cout << "ATTENDANCE MARKS" << endl<<endl;
                                            cout << "1 - MARKS ENTRY" << endl;
                                            cout << "2 - UPDATE MARKS" << endl;
                                            cout << "3 - DISPLAY ATTENDANCE MARKS" << endl;
                                            cout << "4 - EXIT" << endl<<endl;
                                            //cout << "5 - CONTINUE" << endl<<endl;
                                            cin>>c4;
                                            switch(c4)
                                            {
                                                case '1':
                                                    {
                                                        system("cls");
                                                        if(flag==0)
                                                        {
                                                            cout << "MARKS: Attendance/Class Participation" << endl<<endl;
                                                            //flag=1;
                                                            for (int j=0;j<size_class;j++)
                                                            {
                                                                cout<<"Student ID:   "<<classbme[p][j].stu_id<<endl;
                                                                cout<<"Student Name: "<<classbme[p][j].name<<endl;
                                                                cout<<endl<<"Marks: ";
                                                                cin>>classbme[p][j].Att;
                                                                cout<<endl;
                                                            }
                                                        }

                                                        else
                                                            cout<<endl<<endl<<"Attendance Marks Already entered: "<<endl<<endl;


                                                        cout<<"Student ID:   "<<"Student Name: "<<"Marks"<<endl<<endl;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Att;
                                                            cout<<endl;
                                                        }
                                                        getche();

                                                    }
                                                    break;
                                                case '2':
                                                    {   string student_id;
                                                        float marks;
                                                        cout<<"Enter Student ID: ";
                                                        cin>>student_id;
                                                        //int flag1=0;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            if(classbme[p][j].stu_id==student_id)
                                                            {
                                                                cout<<"Enter Attendance Marks: ";
                                                                cin>>marks;
                                                                classbme[p][j].Att= marks;
                                                                flag1=1;
                                                                cout<<"Marks Updated ";
                                                                getch();
                                                            }
                                                        }
                                                        if (flag1==0)
                                                        {
                                                            cout<<endl<<endl<<"Student Not found: "<<endl<<endl;
                                                            getch();
                                                        }

                                                    }


                                                    break;
                                                case '3':
                                                    {
                                                       cout<<"Student ID:   "<<"Student Name: "<<"Marks"<<endl<<endl;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Att;
                                                            cout<<endl;
                                                        }
                                                        getch();
                                                    }
                                                    break;
                                                case '4':
                                                    {
                                                        //cout<<endl<<"Exit Attendance: (Y/N): ";
                                                        ch3='Y';
                                                    }
                                                    break;
                                                /*case '5':
                                                    {
                                                        //cout<<endl<<"Continue: (Y/N): ";
                                                        ch3='n';
                                                    }
                                                    break;*/
                                            }



                                            //cout<<endl<<"Exit Attendance: (Y/N): ";
                                            //cin>>ch3;
                                            }while (ch3=='N' || ch3=='n');

                                    }
                                    break;

                                case '2':
                                    {
                                            //int flag22=0;
                                            char ch3='n';
                                            do
                                            {

                                            system("cls");
                                            cout <<endl<<endl<<endl<< "     Q U I Z 1 Marks - PROGRAMMING FUNDAMENTALS " << endl<<endl<<endl<<endl;
                                            //cout << "QUIZ MARKS" << endl<<endl;
                                            cout << "1 - QUIZ MARKS ENTRY" << endl;
                                            cout << "2 - UPDATE QUIZ  1 MARKS" << endl;
                                            cout << "3 - DISPLAY QUIZ 1 MARKS" << endl;
                                            cout << "4 - EXIT" << endl<<endl;
                                            cin>>c4;
                                            switch(c4)
                                            {
                                                case '1':
                                                    {
                                                        system("cls");
                                                        if(flag22==0)
                                                        {
                                                            cout << "MARKS: QUIZ 1" << endl<<endl;
                                                            flag22=1;
                                                            for (int j=0;j<size_class;j++)
                                                            {
                                                                cout<<"Student ID:   "<<classbme[p][j].stu_id<<endl;
                                                                cout<<"Student Name: "<<classbme[p][j].name<<endl;
                                                                cout<<endl<<"Quiz 1 Marks: ";
                                                                cin>>classbme[p][j].Q1;
                                                                cout<<endl;
                                                            }
                                                        }

                                                        else
                                                            cout<<endl<<endl<<"QUIZ 1 Marks Already entered: "<<endl<<endl;


                                                        cout<<"Student ID:   "<<"Student Name: "<<"Q1 Marks"<<endl<<endl;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Q1;
                                                            cout<<endl;
                                                        }
                                                        getche();

                                                    }
                                                    break;
                                                case '2':
                                                    {   string student_id;
                                                        float qmarks;
                                                        cout<<"Enter Student ID: ";
                                                        cin>>student_id;
                                                        //int flag2=0;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            if(classbme[p][j].stu_id==student_id)
                                                            {
                                                                cout<<"Enter Quiz 1 Marks: ";
                                                                cin>>qmarks;
                                                                classbme[p][j].Q1= qmarks;
                                                                flag2=1;
                                                                cout<<"Quiz 1 Marks Updated ";
                                                                getch();
                                                            }
                                                        }
                                                        if (flag2==0)
                                                        {
                                                            cout<<endl<<endl<<"Student Not found: "<<endl<<endl;
                                                            getch();
                                                        }

                                                    }


                                                    break;
                                                case '3':
                                                    {
                                                       cout<<"Student ID:   "<<"Student Name: "<<"Q1 Marks"<<endl<<endl;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Q1;
                                                            cout<<endl;
                                                        }
                                                        getch();
                                                    }
                                                    break;
                                                case '4':
                                                    {
                                                        ch3='Y';

                                                    }
                                                    break;
                                            }



                                            //cout<<endl<<"Exit QUIZ 1: (Y/N): ";
                                            //cin>>ch3;
                                            }while (ch3=='N' || ch3=='n');

                                    }


                                    break;



                                case '3':
                                    {
                                            //int flag3=0;
                                            char ch3='n';
                                            do
                                            {

                                            system("cls");
                                            cout <<endl<<endl<<endl<< "     Q U I Z 2 Marks - PROGRAMMING FUNDAMENTALS " << endl<<endl<<endl<<endl;
                                            //cout << "QUIZ MARKS" << endl<<endl;
                                            cout << "1 - QUIZ 2 MARKS ENTRY" << endl;
                                            cout << "2 - UPDATE QUIZ  2 MARKS" << endl;
                                            cout << "3 - DISPLAY QUIZ 2 MARKS" << endl;
                                            cout << "4 - EXIT" << endl<<endl;
                                            cin>>c4;
                                            switch(c4)
                                            {
                                                case '1':
                                                    {
                                                        system("cls");
                                                        if(flag3==0)
                                                        {
                                                            cout << "MARKS: QUIZ 2" << endl<<endl;
                                                            flag3=1;
                                                            for (int j=0;j<size_class;j++)
                                                            {
                                                                cout<<"Student ID:   "<<classbme[p][j].stu_id<<endl;
                                                                cout<<"Student Name: "<<classbme[p][j].name<<endl;
                                                                cout<<endl<<"Quiz 2 Marks: ";
                                                                cin>>classbme[p][j].Q2;
                                                                cout<<endl;
                                                            }
                                                        }

                                                        else
                                                            cout<<endl<<endl<<"QUIZ 2 Marks Already entered: "<<endl<<endl;


                                                        cout<<"Student ID:   "<<"Student Name: "<<"Q2 Marks"<<endl<<endl;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Q2;
                                                            cout<<endl;
                                                        }
                                                        getch();

                                                    }
                                                    break;
                                                case '2':
                                                    {   string student_id;
                                                        float qmarks;
                                                        cout<<"Enter Student ID: ";
                                                        cin>>student_id;
                                                        //int flag4=0;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            if(classbme[p][j].stu_id==student_id)
                                                            {
                                                                cout<<"Enter Quiz 2 Marks: ";
                                                                cin>>qmarks;
                                                                classbme[p][j].Q2= qmarks;
                                                                flag4=1;
                                                                cout<<"Quiz 2 Marks Updated ";
                                                                getch();
                                                            }

                                                        }
                                                        if (flag4==0)
                                                        {
                                                            cout<<endl<<endl<<"Student Not found: "<<endl<<endl;
                                                            getch();
                                                        }

                                                    }


                                                    break;
                                                case '3':
                                                    {
                                                       cout<<"Student ID:   "<<"Student Name: "<<"Q2 Marks"<<endl<<endl;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Q2;
                                                            cout<<endl;
                                                        }
                                                        getch();
                                                    }
                                                    break;
                                                case '4':
                                                        ch3='Y';
                                                    break;
                                            }



                                            //cout<<endl<<"Exit QUIZ 2: (Y/N): ";
                                            //cin>>ch3;
                                            }while (ch3=='N' || ch3=='n');

                                    }


                                    break;



                                case '4':
                                    {
                                            //int flag6=0;
                                            char ch3='n';
                                            do
                                            {

                                            system("cls");
                                            cout <<endl<<endl<<endl<< "     M I D   T E R M Marks - PROGRAMMING FUNDAMENTALS " << endl<<endl<<endl<<endl;
                                            //cout << "QUIZ MARKS" << endl<<endl;
                                            cout << "1 - MID TERM MARKS ENTRY" << endl;
                                            cout << "2 - UPDATE MID TERM MARKS" << endl;
                                            cout << "3 - DISPLAY MID TERM MARKS" << endl;
                                            cout << "4 - EXIT" << endl<<endl;
                                            cin>>c4;
                                            switch(c4)
                                            {
                                                case '1':
                                                    {
                                                        system("cls");
                                                        if(flag6==0)
                                                        {
                                                            cout << "MARKS: MID TERM" << endl<<endl;
                                                            flag6=1;
                                                            for (int j=0;j<size_class;j++)
                                                            {
                                                                cout<<"Student ID:   "<<classbme[p][j].stu_id<<endl;
                                                                cout<<"Student Name: "<<classbme[p][j].name<<endl;
                                                                cout<<endl<<"MID TERM Marks: ";
                                                                cin>>classbme[p][j].Mid;
                                                                cout<<endl;
                                                            }
                                                        }

                                                        else
                                                            cout<<endl<<endl<<"MID TERM Marks Already entered: "<<endl<<endl;


                                                        cout<<"Student ID:   "<<"Student Name: "<<"MID TERM Marks"<<endl<<endl;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Mid;
                                                            cout<<endl;
                                                        }
                                                        getch();

                                                    }
                                                    break;
                                                case '2':
                                                    {   string student_id;
                                                        float qmarks;
                                                        cout<<"Enter Student ID: ";
                                                        cin>>student_id;
                                                        //int flag7=0;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            if(classbme[p][j].stu_id==student_id)
                                                            {
                                                                cout<<"Enter MID TERM Marks: ";
                                                                cin>>qmarks;
                                                                classbme[p][j].Mid= qmarks;
                                                                flag7=1;
                                                                cout<<"Mid Term Marks updated ";
                                                                getch();
                                                            }
                                                        }
                                                        if (flag7==0)
                                                        {
                                                            cout<<endl<<endl<<"Student Not found: "<<endl<<endl;
                                                            getch();
                                                        }


                                                    }


                                                    break;
                                                case '3':
                                                    {
                                                       cout<<"Student ID:   "<<"Student Name: "<<"MID TERM Marks"<<endl<<endl;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Mid;
                                                            cout<<endl;
                                                        }
                                                        getch();
                                                    }
                                                    break;
                                                case '4':
                                                        ch3='Y';
                                                    break;
                                            }



                                            //cout<<endl<<"Exit MID TERM: (Y/N): ";
                                            //cin>>ch3;
                                            }while (ch3=='N' || ch3=='n');

                                    }
                                    break;
                                case '5':
                                    {
                                            //int flag8=0;
                                            char ch3='n';
                                            do
                                            {

                                            system("cls");
                                            cout <<endl<<endl<<endl<< "     F I N A L   T E R M Marks - PROGRAMMING FUNDAMENTALS " << endl<<endl<<endl<<endl;
                                            //cout << "QUIZ MARKS" << endl<<endl;
                                            cout << "1 - FINAL TERM MARKS ENTRY" << endl;
                                            cout << "2 - UPDATE FINAL TERM MARKS" << endl;
                                            cout << "3 - DISPLAY FINAL TERM MARKS" << endl;
                                            cout << "4 - EXIT" << endl<<endl;
                                            cin>>c4;
                                            switch(c4)
                                            {
                                                case '1':
                                                    {
                                                        system("cls");
                                                        if(flag8==0)
                                                        {
                                                            cout << "MARKS: FINAL TERM" << endl<<endl;
                                                            flag8=1;
                                                            for (int j=0;j<size_class;j++)
                                                            {
                                                                cout<<"Student ID:   "<<classbme[p][j].stu_id<<endl;
                                                                cout<<"Student Name: "<<classbme[p][j].name<<endl;
                                                                cout<<endl<<"FINAL TERM Marks: ";
                                                                cin>>classbme[p][j].Final;
                                                                cout<<endl;
                                                            }
                                                        }

                                                        else
                                                            cout<<endl<<endl<<"FINAL TERM Marks Already entered: "<<endl<<endl;


                                                        cout<<"Student ID:   "<<"Student Name: "<<"FINAL TERM Marks"<<endl<<endl;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Final;
                                                            cout<<endl;
                                                        }
                                                        getch();

                                                    }
                                                    break;
                                                case '2':
                                                    {   string student_id;
                                                        float qmarks;
                                                        cout<<"Enter Student ID: ";
                                                        cin>>student_id;
                                                        //int flag11=0;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            if(classbme[p][j].stu_id==student_id)
                                                            {
                                                                cout<<"Enter FINAL TERM Marks: ";
                                                                cin>>qmarks;
                                                                classbme[p][j].Final= qmarks;
                                                                flag11=1;
                                                                cout<<"Final Term Marks Updated ";
                                                                getch();
                                                            }
                                                        }
                                                        if (flag11==0)
                                                        {
                                                            cout<<endl<<endl<<"Student Not found: "<<endl<<endl;
                                                            getch();
                                                        }


                                                    }


                                                    break;
                                                case '3':
                                                    {
                                                       cout<<"Student ID:   "<<"Student Name: "<<"FINAL TERM Marks"<<endl<<endl;
                                                        for (int j=0;j<size_class;j++)
                                                        {
                                                            cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Final;
                                                            cout<<endl;
                                                        }
                                                        getch();
                                                    }
                                                    break;
                                                case '4':
                                                        ch3='Y';
                                                    break;
                                            }



                                            //cout<<endl<<"Exit FINAL TERM: (Y/N): ";
                                            //cin>>ch3;
                                            }while (ch3=='N' || ch3=='n');


                                    }
                                    break;
                                case '6':
                                        ch3='Y';
                                    break;
                            }
                            //cout<<endl<<"Exit Assesments: (Y/N): ";
                            //cin>>ch3;
                            }while (ch3=='N' || ch3=='n');
                        }
                        break;
                    case '2':
                        {
                            cout<<"Grading"<<endl<<endl;
                            cout<<"Student ID    "<<"Student Name  "<<"Att  "<<"Q1  "<<"Q2  "<<"Mid "<<"Final "<<"Total "<<endl<<endl;
                            for (int j=0;j<size_class;j++)
                            {
                                cout<<classbme[p][j].stu_id<<"        "<<classbme[p][j].name<<"         "<<classbme[p][j].Att<<"    "<<classbme[p][j].Q1<<"    "<<classbme[p][j].Q2<<"  "<<classbme[p][j].Mid<<"  "<<classbme[p][j].Final<<"  "<<classbme[p][j].Total;
                                cout<<endl;
                            }
                            getch();

                        }
                        break;

                    case '3':
                        {
                            cout<<"CALCULATED"<<endl<<endl;

                            for (int j=0;j<size_class;j++)
                            {
                                classbme[p][j].Total =classbme[p][j].Att+classbme[p][j].Q1+classbme[p][j].Q2+classbme[p][j].Mid+classbme[p][j].Final;

                            }
                            getch();

                        }
                        break;

                    case '4':
                            ch2='Y';
                        break;
                }
                //cout<<endl<<"Exit PF - Go to Main Menu: (Y/N): ";
                //cin>>ch2;
                } while (ch2=='N' || ch2=='n');

            //}
                //break;
        //case '2': break;
        //case '3': break;
        //case '4': break;
        //case '5': break;

        //case '6': ch1 = 'Y';
                //break;
    //}
    //cout<<endl<<"Exit Program (Press Y) - Main Menu (Press N) : (Y/N): ";
    //cin>>ch1;
    } while (ch1=='N' || ch1=='n');


    return 0;
}
