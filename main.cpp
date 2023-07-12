// Employee Record Management System using C++

#include <iostream>
using namespace std;

string id[30], name[30], address[50], dob[30], mobile_no[30], doj[30], marstatus[30], workd[30], workl[40], ctc[30], socialins[30], email[30]; // arrays for storing employees data.

int total = 0; // to store all data
void enter()

{

    int ch = 0;

    cout << "How Many Employees' Data Do You Want to Enter?" << endl;

    cin >> ch;
    if (total == 0)

    {

        total = ch + total;

        for (int i = 0; i < ch; i++)

        {

            cout << "\nEnter the Data of Employee " << i + 1 << endl
                 << endl;
            cout << "** PERSONAL DETAILS **" << endl
                 << endl;

            cout << "Enter Name: " << endl;

            cin >> name[i];

            cout << "Enter Address: " << endl;

            cin >> address[i];

            cout << "Enter Date of Birth: " << endl;

            cin >> dob[i];

            cout << "Is Employee Married?: " << endl;

            cin >> marstatus[i];

            cout << "** WORK DETAILS **" << endl
                 << endl;

            cout << "Enter Id: " << endl;

            cin >> id[i];

            cout << "Enter Date of Joing: " << endl;

            cin >> doj[i];

            cout << "Work Department: " << endl;

            cin >> workd[i];

            cout << "Enter Work Location: " << endl;

            cin >> workl[i];

            cout << "Enter CTC: " << endl;

            cin >> ctc[i];

            cout << "Enter Social Insurance Id: " << endl;

            cin >> socialins[i];

            cout << "** CONTACT DETAILS **" << endl
                 << endl;

            cout << "Enter Mobile NO: " << endl;

            cin >> mobile_no[i];

            cout << "Enter Email: " << endl;

            cin >> email[i];
        }
    }

    else

    {

        for (int i = total; i < ch + total; i++) 

        {

            cout << "\nEnter the Data of Employee " << i + 1 << endl
                 << endl;
            cout << "** PERSONAL DETAILS **" << endl
                 << endl;

            cout << "Enter Name: " << endl;

            cin >> name[i];

            cout << "Enter Address: " << endl;

            cin >> address[i];

            cout << "Enter Date of Birth: " << endl;

            cin >> dob[i];

            cout << "Is Employee Married?: " << endl;

            cin >> marstatus[i];

            cout << "** WORK DETAILS **" << endl
                 << endl;

            cout << "Enter Id: " << endl;

            cin >> id[i];

            cout << "Enter Date of Joing: " << endl;

            cin >> doj[i];

            cout << "Work Department: " << endl;

            cin >> workd[i];

            cout << "Enter Work Location: " << endl;

            cin >> workl[i];

            cout << "Enter CTC: " << endl;

            cin >> ctc[i];

            cout << "Enter Social Insurance Id: " << endl;

            cin >> socialins[i];

            cout << "** CONTACT DETAILS **" << endl
                 << endl;

            cout << "Enter Mobile NO: " << endl;

            cin >> mobile_no[i];

            cout << "Enter Email: " << endl;

            cin >> email[i];
        }

        total = ch + total; 
    }
}

void show()

{

    if (total == 0)

    {

        cout << "No Data is Entered" << endl;
    }

    else
    {

        for (int i = 0; i < total; i++)

        {
            cout<<"** RESULT FOR SHOW DATA **"<<endl;

            cout << "\nData of Employee: " << i + 1 << endl
                 << endl;
            cout << "** PERSONAL DETAILS **" << endl
                 << endl;

            cout << "Full Name: " << name[i] << endl;
            cout << "Address: " << address[i] << endl;
            cout << "Date of Birth: " << dob[i] << endl;
            cout << "Maritual Status: " << marstatus[i] << endl
                 << endl;

            cout << "** WORK DETAILS **" << endl
                 << endl;

            cout << "Id: " << id[i] << endl;
            cout << "Date of Joing: " << doj[i] << endl;
            cout << "Work Department: " << workd[i] << endl;
            cout << "Work Location: " << workl[i] << endl;
            cout << "CTC: " << ctc[i] << endl;
            cout << "Social Insurance: " << socialins[i] << endl
                 << endl;

            cout << "** CONTACT DETAILS **" << endl
                 << endl;
            cout << "Mobile NO: " << mobile_no[i] << endl;
            cout << "Email Id: " << email[i] << endl;
        }
    }
}

void search()

{

    if (total == 0)

    {

        cout << "No data is entered" << endl;
    }

    else
    {

        string idd;

        cout << "Enter the id of Employee you want to Search: " << endl;

        cin >> idd;

        for (int i = 0; i < total; i++)

        {

            if (idd == id[i])

            {
                cout << "RESULT FOR EMPLOYEE ID: " << idd << endl;

                cout << "** PERSONAL DETAILS **" << endl
                     << endl;

                cout << "Full Name: " << name[i] << endl;
                cout << "Address: " << address[i] << endl;
                cout << "Date of Birth: " << dob[i] << endl;
                cout << "Maritual Status: " << marstatus[i] << endl
                     << endl;

                cout << "** WORK DETAILS **" << endl
                     << endl;

                cout << "Id: " << id[i] << endl;
                cout << "Date of Joing: " << doj[i] << endl;
                cout << "Work Department: " << workd[i] << endl;
                cout << "Work Location: " << workl[i] << endl;
                cout << "CTC: " << ctc[i] << endl;
                cout << "Social Insurance: " << socialins[i] << endl
                     << endl;

                cout << "** CONTACT DETAILS **" << endl
                     << endl;
                cout << "Mobile NO: " << mobile_no[i] << endl;
                cout << "Email Id: " << email[i] << endl;
            }
        }
    }
}

void update()

{

    if (total == 0)

    {

        cout << "No data is entered" << endl;
    }

    else
    {

        string rollno;

        cout << "Enter the Id of Employee which you want to update" << endl;

        cin >> rollno;

        for (int i = 0; i < total; i++)

        {

            if (rollno == id[i])

            {

                cout << "\nPrevious Data: " << endl
                     << endl;

                cout << "Data of Employee " << i + 1 << endl;

                cout << "** PERSONAL DETAILS **" << endl;

                cout << "Full Name: " << name[i] << endl;
                cout << "Address: " << address[i] << endl;
                cout << "Date of Birth: " << dob[i] << endl;
                cout << "Maritual Status: " << marstatus[i] << endl
                     << endl;

                cout << "** WORK DETAILS **" << endl
                     << endl;

                cout << "Id: " << id[i] << endl;
                cout << "Date of Joing: " << doj[i] << endl;
                cout << "Work Department: " << workd[i] << endl;
                cout << "Work Location: " << workl[i] << endl;
                cout << "CTC: " << ctc[i] << endl;
                cout << "Social Insurance: " << socialins[i] << endl
                     << endl;

                cout << "** CONTACT DETAILS **" << endl
                     << endl;
                cout << "Mobile NO: " << mobile_no[i] << endl;
                cout << "Email Id: " << email[i] << endl;
                cout << "\nEnter new data: " << endl
                     << endl;
                cout << "** PERSONAL DETAILS **" << endl
                     << endl;

                cout << "Enter Name: " << endl;

                cin >> name[i];

                cout << "Enter Address: " << endl;

                cin >> address[i];

                cout << "Enter Date of Birth: " << endl;

                cin >> dob[i];

                cout << "Is Employee Married?: " << endl;

                cin >> marstatus[i];

                cout << "** WORK DETAILS **" << endl
                     << endl;

                cout << "Enter Id: " << endl;

                cin >> id[i];

                cout << "Enter Date of Joing: " << endl;

                cin >> doj[i];

                cout << "Work Department: " << endl;

                cin >> workd[i];

                cout << "Enter Work Location: " << endl;

                cin >> workl[i];

                cout << "Enter CTC: " << endl;

                cin >> ctc[i];

                cout << "Enter Social Insurance Id: " << endl;

                cin >> socialins[i];

                cout << "** CONTACT DETAILS **" << endl
                     << endl;

                cout << "Enter Mobile NO: " << endl;

                cin >> mobile_no[i];

                cout << "Enter Email: " << endl;

                cin >> email[i];
            }
        }
    }
}

void Delete()
{

    if (total == 0)
    {
        cout << "No data is entered yet" << endl;
    }

    else
    {
        int a;

        cout << "Are you Sure to Delete Data?" << endl;
        cout << "Press 1 to delete all record" << endl;

        cin >> a;

        if (a == 1)

        {

            total = 0;

            cout << "All record is deleted..!!" << endl;
        }
        else
        {
            cout << "Please Press 1 to Delete All Record" << endl;
        }
    }
}

int main()

{

    int value, sample;

    cout << "ENTER 1: To Proceed.." << endl;
    cin >> sample;

    while (sample < 2) // always in Loop

    {
        cout << ">>>>>>>>  EMPLOYEE RECORD MANAGEMENT SYSTEM  <<<<<<<<" << endl;

        cout << "\nPRESS 1: To Enter data" << endl;

        cout << "-------------------------" << endl;

        cout << "PRESSS 2: To Show data" << endl;
        cout << "-------------------------" << endl;

        cout << "PRESSS 3: To Search data" << endl;
        cout << "-------------------------" << endl;

        cout << "PRESSS 4: To Update data" << endl;
        cout << "-------------------------" << endl;

        cout << "PRESSS 5: To Delete data" << endl;
        cout << "-------------------------" << endl;

        cout << "PRESSS 6: To Quit" << endl;
        cout << "-------------------------" << endl;

        cin >> value;

        switch (value)

        {

        case 1:
            enter();
            break;

        case 2:
            show();
            break;

        case 3:
            search();
            break;

        case 4:
            update();
            break;

        case 5:
            Delete();
            break;

        case 6:
            exit(0);
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}
