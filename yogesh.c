#include<fstream.h>
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
class clg
{
    public:
    int rgno;
    char sn[20],fn[20],mn[20],ad[30],g[10],dob[15],mob[15],b[20],p[15],admd[15];
    public:
    void slg();
    void search();
    void display();
    void modify();
    void del();
    void fee();
    void ext();
}c;
void clg::slg()
{
    ofstream ofs("student.txt",ios::app);
    clrscr();
    cout<<"\t\t===========ADD NEW STUDENT DETAIL=========";
    cout<<"\nEnter Student's Regestration no.:";
    cin>>rgno;
    cout<<"\nEnter Student's Regestration no.:";
    gets(sn);
    cout<<"\nEnter Father's Name:";
    gets(fn);
    cout<<"\nEnter Mother's Name:";
    gets(mn);
    cout<<"\nEnter Address:";
    gets(ad);
    cout<<"\nEnter Gender:";
    gets(g);
    cout<<"\nDate Of Birth:";
    gets(dob);
    cout<<"\nMobile Number:";
    gets(mob);
    cout<<"\nBranch:";
    gets(b);
    cout<<"\nProgram:";
    gets(p);
    0000 cout<<"\nAdmission Year:";
    gets(admd);
    ofs.write((char*)&c,sizeof(clg));
    ofs.close();
    cout<<"\nSAVED RECORD SUCCESSFULLY !!!";
    }
    void clg::search()
    {
        int rgno1,flag=0;
        clrscr();
        cout<<"\t\t======SEARCH STUDENT DETAILS=============\n\n";
        ifstream ifs("student.txt");
        if(!ifs)
        {
            cout<<"\nFILE NOT FOUND!!!";
            getch();
            exit(0);
            }
    }
    cout<<"\n\nEnter student registration no to search:";
    cin>>rgno1;
    while(ifs.read((char*)&c,sizeof(clg)))
    {
        if(rgno1==rgno)
        {
            cout<<"\nStudent's Registration no.:"<<rgno;
            cout<<"\nStudent's Name:"<<sn;
            cout<<"\nFather's Name:"<<fn;
            cout<<"\nMother's Name:"<<mn; cout<<"\nAddress:"<<ad;
            cout<<"\nGender:"<<g;
            cout<<"\nMobile Number:"<<mob;
            cout<<"\nDate Of Birth:"<<dob;
            cout<<"\nBranch:"<<b;
            cout<<"\nProgram:"<<p;
            cout<<"\nAdmission Year:"<<admd;
            flag=1;
            break;
            }
        }
        if(flag==0)
        {
            cout<<"\n\nSTUDENT REGISTRATION NOT FOUND!!!";
            }
            ifs.close();
        void clg::display()
        {
            clrscr();
            cout<<"\t\t=========DISPLAY ALL STUDENT DETAILS=========\n\n";
            ifstream ifs("student.txt");
            if(!ifs)
            {
                cout<<"\nFILE NOT FOUND!!!";
                getch();
                exit(0);
            }
            while(ifs.read((char*)&c,sizeof(cig)))
            {
                cout<<"\n=====================";
                cout<<"\nStudent's Registration no.:"<<rgno;
                cout<<"\nStudent's Name:"<<sn;
                cout<<"\nFather's Name:"<<fn;
                cout<<"\nMother's Name:"<<mn; cout<<"\nAddress:"<<ad;
                cout<<"\nGender:"<<g;
                cout<<"\nDate Of Birth:"<<dob;
                cout<<"\nMobile Number:"<<mob;
                cout<<"\nBranch:"<<b; cout<<"\nProgram:"<<p;
                cout<<"\nAdmission Year:"<<admd;
                cout<<"\n============";
                getch();
            }
            ifs.close();
        }
        void clg::modify()
        {
            int rgno2,flag=0,ch1;
            clrscr();
            cout<<"\t\t=======MODIFY RECORD SECTION=========";
            ifstream ifs("student.txt");
            ofstream ofs("temp.txt");
            if(!ifs)
        }
        {
            cout<<"\nFILE DOESN'T EXIST";
            getch();
            exit(0);
        }
        cout<<"\nEnter Student Registration no. to Modify:";
        cin>>rgno2;
        while(ifs.read((char*)&c,sizeof(clg)))
        {
            if(rgno2==rgno)
            {
                flag=1;
                cout<<"\nChoose any modify option:\n\n"; 
                cout<<"\n1-Student's Name";
                cout<<"\n2-Father's Name";
                cout<<"\n3-Mother's Name";
                cout<<"\n4-Address";
                cout<<"\n5-Gender":
                cout<<"\n6-Date Of Birth";
                cout<<"\n7-Mobile Number";
                cout<<"\n8-Branch";
                cout<<"\n9-Program";
                cout<<"\n10-Admission Year";
                cout<<"\n\n";
                cout<<"Enter your choice(1-10):";
                cin>>ch1;
                switch(ch1)
                {
                case 1:
                cout<<"\nEnter New Student's Name:";
                gets(sn);
                break;
                case 2:
                cout<<"\nFather's Name:";
                gets(fn); break;
                case 3:
                cout<<"\nMother's Name:";
                gets(mn);
                break;
                case 4:
                cout<<"\nAddress:";
                gets(ad); break;
                case 5:
                cout<<"\nGender:"";
                gets(g);
                break;
                case 6:
                cout<<"\nDate Of Birth:";
                gets(dob);
                break;
                case 7:
                cout<<"\nMobile Number:";
                gets(mob);
                break;
                case 9:
                cout<<"\nProgram:";
                gets(p);
                break;
                case 10:
                cout<<"\nAdmission Year:";
                gets(admd);
                break;
                default:
                cout<<"\nWRONG INPUT, TRY AGAIN"; 
                }
                ofs.write((char*)&c,sizeof(cig));
            }
            else
            {
                ofs.write((char*)&c,sizeof(clg));
            }
        }
        if (flag==0)
        {
            cout<<"\nSTUDENT ID NOT FOUND";
        }
        ifs.close();
        ofs.close();
        remove("student.txt");
        rename("temp.txt","student.txt");
        }
        void clg::del()
        {
            int rgno3,flag=0;
            clrscr();
            cout<<"===========DELETE RECORD SECTION========\n\n";
            ifstream ifs("student.txt");
            ofstream ofs("temp.txt");
            if(!ifs)
            {
               cout<<"\nFILE DOESN'T EXIST";
                getch();
                exit(0);
            }
           Student Management System using C & C++
            cout<<"\nENTER STUDENT ID TO DELETE:";
            cin>>rgno3;
            while(ifs.read((char*)&c,sizeof(clg)))
            {
                if(rgno3==rgno)
                {
                    flag=1;
                    cout<<"\n\nDELETED STUDENT RECORD SUCCESSFULLY!!!";
                }
                else
                {
                    ofs.write((char*)&c,sizeof(clg));
                }
                }
                if(flag==0)
                cout<<"\nSTUDENT ID NOT FOUND";
            }
                ifs.close();
                ofs.close();
                remove("student.txt");
                rename("temp.txt","student.txt");
                }
                void clg::fee()
                {
                    double cl1-300000, cl2=320000, cl3=350000, cl4=375000, op=250000, tc,f,ho,nf;
                    int gr;
                    clrscr();
                    cout<<"==========FEE STRUCTURE==========\n\n";
                    cout<<"\nSTUDENT BASIC FEE BY BRANCH:"; cout<<"\n1-COMPUTER SCIENCE\t=Rs.375000";
                    cout<<"\n2-MECHANICAL\t\t=Rs.350000"; 
                    cout<<"\n3-ELECTRICAL\t\t=Rs.320000";
                    cout<<"\n4-CIVIL\t\t\t Rs.300000";
                    cout<<"\n5-OTHERS\t\t=Rs.250000"; 
                    cout<<"\n\n=========";
                    cout<<"\n\nENTER YOUR BRANCH(1-5):";
                    cin>>gr;
                    switch(gr)
                    case 1:
                    cout<<"\nBASIC FEE\t\t=Rs."<<cl4;
                    tc=cl4*0.10;
                    cout<<"\nTRANSPORTATION CHARGES\t=Rs."<<tc; 1000;
                    f=cl4*0.20;
                    cout<<"\nFOODING CHARGES\t\t=Rs."<<f;
                    ho=cl4*0.30;
                    cout<<"\nHOSTEL CHARGES\t\t=Rs."<<ho;
                    nf=cl4+tc+f+ho;
                    cout<<"\n-
                    cout<<"\nTOTAL FEE\t\t=Rs."<<nf;
                    cout<<"\n-
                    break;
                    case 2:
                    cout<<"\nBASIC FEE\t\t=Rs."<<cl3;
                    tc=cl3*0.10;
                    cout<<"\nTRANSPORTATION CHARGES\t=Rs."<<tc;
                    f=cl3*0.20;
                    cout<<"\nFOODING CHARGES\t\t=Rs."<<<f;
                    ho=cl3*0.30;
                    cout<<"\nHOSTEL CHARGES\t\t=Rs."<<ho;
                    nf=cl3+tc+f+ho;
                    cout<<"\n--
                    cout<<"\nTOTAL FEE\t\t=Rs."<<nf;
                    cout<<"\n-
                    break;
                    case 3:
                    cout<<"\nBASIC FEE\t\t=Rs."<<cl2;
                    tc=cl2*0.10;
                    cout<<"\nTRANSPORTATION CHARGES\t=Rs."<<tc;
                    f=cl2*0.20;
                    cout<<"\nFOODING CHARGES\t\t=Rs."<<f;
                    ho=cl2*0.30;
                    cout<<"\nHOSTEL CHARGES\t\t=Rs."<<ho;
                    nf=cl2+tc+f+ho;
                    cout<<"\n-
                    cout<<"\nTOTAL FEE\t\t=Rs."<<nf;
                    cout<<"\n-
                    break;
                    case 4:
                    cout<<"\nBASIC FEE\t\t=Rs."<<cl1;
                    tc=cl1*0.10;
                    cout<<"\nTRANSPORTATION CHARGES\t=Rs."<<tc;
                    f=cl1*0.20;
                    cout<<"\nFOODING CHARGES\t\t=Rs."<<<f;
                    ho=cl1*0.30;
                    cout<<"\nHOSTEL CHARGES\t\t=Rs."<<ho;
                    nf=cl1+tc+f+ho;
                    cout<<"\n-
                    cout<<"\nTOTAL FEE\t\t=Rs."<<nf;
                    cout<<"\n-
                    break;
                    case 5:
                    cout<<"\nBASIC FEE\t\t=Rs."<<op;
                    tc=op*0.10;
                    cout<<"\nTRANSPORTATION CHARGES\t=Rs."<<tc;
                    f=op*0.20;
                    cout<<"\nFOODING CHARGES\t\t=Rs."<<f;
                    ho=op*0.30;
                    cout<<"\nHOSTEL CHARGES\t\t=Rs."<<ho;
                    nf=op+tc+f+ho; cout<<"\n--
                    cout<<"\nTOTAL FEE\t\t Rs."<<nf;
                    cout<<"\n-
                    break;
                    }
                    void clg::ext()
                    clrscr();
                    cout<<"\n\n\n\n\n\n\n\n\t\t\tTHANK YOU FOR USING OUR PROJECT!!!"; cout<<"\n\n\n\t\t\t !!!-HAVE A NICE DAY--!!!";
                    sleep(3);
                    exit(0);
                    }
                    void main()
                    {
                        int ch;
                        char choice;
                        do
                    {
                        clrscr();
                        cout<<"\t\t\t\t NATIONAL COLLEGE\n\n\n";
                        cout<<"\t\t\t========== cout<<"\t\t\t1. ADD NEW STUDENT DETAIL\n";
                        cout<<"\t\t\t2. SEARCH STUDENT DETAILS\n";
                        cout<<"\t\t\t3. DISPLAY ALL STUDENTS DETAILS\n"; cout<<"\t\t\t4. MODIFY STUDENT DETAIL\n";
                        cout<<"\t\t\t5. DELETE STUDENT DETAILS\n";
                        cout<<"\t\t\t6. FEE DETAILS\n";
                        cout<<"\t\t\t7. EXIT\n\n";
                        cout<<"\t\t\t======
                        cout<<"\n\n"; cout<<"\t\t\t ENTER YOUR CHOICE (1-7):";
                        cin>>ch;
                        switch(ch)
                        {
                            case 1:
                            c.sig();
                            break;
                            case 2:
                            c.search();
                            break;
                            case 3:
                            c.display();
                            break;
                            case 4:
                            c.modify();
                            break;
                            case 5:
                            c.del();
                            break;
                            case 6:
                            c.fee();
                            break;
                            case 7:
                            c.ext();
                            break;
                            }
                            cout<<"\n\nDo you want to continue again(Y/N):";
                            cin>>choice;
                            while(choice=='y'll choice=='Y');
                            getch();
                        }
                    }
                    }


                }

            }
        }
    }
