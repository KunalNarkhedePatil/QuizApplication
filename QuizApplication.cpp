#include <iostream>
#include <string.h>
using namespace std;

class QuizApplication
{
public:
    int iOption;
    int iNo;
    const int iMarks = 2;
    int iSum;

    QuizApplication();
    void info();
    void cProgramming();
    void cpp();
    void dsa();
    void javaProgramming();
    void phpProgramming();
};
QuizApplication::QuizApplication()
{
    iOption = 4;
    iNo = 0;
    iSum = 0;
}
void QuizApplication::info()
{
    cout << "_________________________________________________________________________" << endl;
    cout << "This Project Develop By Kunal Narkhede \n";
    cout << "_________________________________________________________________________" << endl;
}
void QuizApplication::cProgramming()
{
    int iChoice = 0;
    cout << "total quesion is 5" << endl;
    cout << "please press 1 and Enter key to start quiz:";
    cin >> iNo;
    if (iNo == 1)
    {
        cout << "########################### START QUIZ ############################" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q1: how many memory allocate in int data type" << endl;
        cout << "1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte" << endl;
       cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 1)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q2: how many memory allocate in float data type" << endl;
        cout << "1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte" << endl;
        cout << "Enter your iChoice\n";
        cin >> iChoice;

        if (iChoice == 1)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q3: how many memory allocate in char data type" << endl;
        cout << "1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 2)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q4: how many memory allocate in double data type" << endl;
        cout << "1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 4)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q5: how many memory allocate in array" << endl;
        cout << "1:- 4byte\n2:- 8byte\n3:- 2byte\n4:- depends on data type" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 4)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        printf("You Have Earn Total %d Coin\n", iSum);
        cout << "--------------------------------------------------------------------------------" << endl;

        cout << "###################### END OF THE QUIZ #########################" << endl;
    }
}
void QuizApplication::cpp()
{
    int iChoice = 0;
    cout << "total quesion is 5" << endl;
    cout << "please press 1 and Enter key to start quiz:";
    cin >> iNo;
    if (iNo == 1)
    {

        cout << "########################### START QUIZ ############################" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q1: Which of the following features must be supported by any programming language to become a pure object-oriented programming language?" << endl;
        cout << "1:- Encapsulation\n2:- Inheritance\n3:- Polymorphism\n4:- None of the above" << endl;
       cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 4)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q2: Which of the following is the address operator?";
        cout << "1:- @\n2:- #\n3:- &\n4:- +" << endl;
        cout << "Enter your iChoice";
        cin >> iChoice;

        if (iChoice == 3)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q3: The programming language that has the ability to create new data types is called___." << endl;
        cout << "1:- Overloaded\n2:- Encapsulated\n3:- Reprehensible\n4:- Extensible" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 4)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q4: Which of the following is the original creator of the C++ language?" << endl;
        cout << "1:- Dennis Ritchie\n2:- Ken Thompson\n3:- Bjarne Stroustrup\n4:- Brian Kernighan" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 3)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q5: Which of the following statements is correct about the formal parameters in C++?" << endl;
        cout << "1:- Parameters with which functions are called\n2:- Parameters which are used in the definition of the function\n3:- Variables other than passed parameters in a function\n4:- Variables that are never used in the function" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 1)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        printf("You Have Earn Total %d Coin\n", iSum);
        cout << "--------------------------------------------------------------------------------" << endl;

        cout << "###################### END OF THE QUIZ #########################" << endl;
    }
}

void QuizApplication::javaProgramming()
{
    int iChoice = 0;
    cout << "total quesion is 5" << endl;
    cout << "please press 1 and Enter key to start quiz:";
    cin >> iNo;
    if (iNo == 1)
    {
        cout << "########################### START QUIZ ############################" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q1:  Which of the following is not a Java features?" << endl;
        cout << "1:- Dynamic\n2:- Architecture Neutral \n3:- Use of pointers \n4:- Object-oriented" << endl;
      cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 3)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q2: Which of the following is a reserved keyword in Java?";
        cout << "1:- object\n2:- strictfp\n3:- main\n4:- system" << endl;
        cout << "Enter your iChoice";
        cin >> iChoice;

        if (iChoice == 2)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q3: Which keyword is used for accessing the features of a package?" << endl;
        cout << "1:- package\n2:- import\n3:- extends\n4:- export" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 2)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q4: An interface with no fields or methods is known as a ______." << endl;
        cout << "1:- Runnable Interface\n2:- Marker Interface\n3:- Abstract Interface\n4:- CharSequence Interface" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 2)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q5: Which of the following is an immediate subclass of the Panel class?" << endl;
        cout << "1:- Applet class\n2:- Window class\n3:- Frame class\n4:- Dialog class" << endl;
      cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 3)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        printf("You Have Earn Total %d Coin\n", iSum);
        cout << "--------------------------------------------------------------------------------" << endl;

        cout << "###################### END OF THE QUIZ #########################" << endl;
    }
}
void QuizApplication::dsa()
{
    int iChoice = 0;

    cout << "total quesion is 5" << endl;

    cout << "please press 1 and Enter key to start quiz:";
    cin >> iNo;
    if (iNo == 1)
    {

        cout << "########################### START QUIZ ############################" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q1: Which one of the below mentioned is linear data structure ___" << endl;
        cout << "1:- Queue\n2:- Stack \n3:- Arrays \n4:- All of the above" << endl;
        cout << "Enter your iChoice";
        cin >> iChoice;

        if (iChoice == 4)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q2: Which one of the following is the correct iOption to create a new node?";
        cout << "1:- ptr= (node*)malloc(sizeof(node*))\n2:- ptr=(node)malloc(sizeof(node))\n3:- ptr=(node*)malloc(sizeof(node))\n4:- None of the above" << endl;
        cout << "Enter your iChoice";
        cin >> iChoice;

        if (iChoice == 3)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q3: Quick sort algorithm is an example of" << endl;
        cout << "1:- Greedy approach\n2:- Improved binary search\n3:- Dynamic Programming\n4:- Divide and conquer" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 4)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q4: Which of the following searching techniques do not require the data to be in sorted form" << endl;
        cout << "1:- Binary Search\n2:- Interpolation Search\n3:- Linear Search\n4:- All of the above" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 1)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q5: The number of binary trees with 3 nodes which when traversed in post order gives the sequence A,B,C is ?" << endl;
        cout << "1:- 3\n2:- 4\n3:- 5\n4:- 6\n"
             << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 3)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        printf("You Have Earn Total %d Coin\n", iSum);
        cout << "--------------------------------------------------------------------------------" << endl;

        cout << "###################### END OF THE QUIZ #########################" << endl;
    }
}
void QuizApplication::phpProgramming()
{
    int iChoice = 0;
    cout << "total quesion is 5" << endl;

    cout << "please press 1 and Enter key to start quiz:";
    cin >> iNo;
    if (iNo == 1)
    {
        cout << "########################### START QUIZ ############################" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q1:  The term PHP is an acronym for PHP:_______________." << endl;
        cout << "1:- Hypertext Preprocessor\n2:- Hypertext multiprocessor \n3:-  Hypertext markup Preprocessor \n4:- Hypertune Preprocessor" << endl;
      cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 1)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q2: PHP is a ____________ language?";
        cout << "1:- user-side scripting\n2:- client-side scripting\n3:- server-side scripting\n4:- Both B and C" << endl;
        cout << "Enter your iChoice";
        cin >> iChoice;

        if (iChoice == 3)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q3: Who among this is the founder of php language?" << endl;
        cout << "1:-Tim Berners-Lee\n2:- Brendan Eich\n3:- Guido van Rossum\n4:- Rasmus Lerdorf" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 4)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q4: In which year php was created?" << endl;
        cout << "1:- 1993\n2:- 1994\n3:- 1995\n4:- 1995" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 2)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Q5:  Which of the following is the correct syntax of php?" << endl;
        cout << "1:-  <?php >\n2:- <php >\n3:- ?php ?\n4:- <?php ?>" << endl;
        cout << "Enter your iChoice" << endl;
        cin >> iChoice;

        if (iChoice == 4)
        {
            iSum = iSum + iMarks;
            cout << "this is true answer" << endl;
            cout<<"You have earn "<<iSum<<" coins"<<endl;
        }
        else if (iOption < iChoice)
        {
            cout << "it is not valid iChoice" << endl;
        }

        else
        {
            cout << "wronge answer" << endl;
        }
        printf("You Have Earn Total %d Coin\n", iSum);
        cout << "--------------------------------------------------------------------------------" << endl;

        cout << "###################### END OF THE QUIZ #########################" << endl;
    }
}
int main()
{
    int iNo = 0;
    char a[10];
    char b[10];
    cout << "*******************************************************************************" << endl;
    cout << "Enter User name: " << endl;
    cin >> a;
    cout << "Enter Password: " << endl;
    cin >> b;
    cout << "*******************************************************************************" << endl;
    if (strcmp(a, "Kunal_Narkhede") == 0)
    {
        if (strcmp(b, "kunal@123") == 0)
        {
            QuizApplication *obj = new QuizApplication();

            cout << "Select Any Language QUIZ: " << endl;
            cout << "Press 1 to start C_Programming QUIZ" << endl;
            cout << "Press 2 to Start CPP Quiz" << endl;
            cout << "Press 3 to Start JAVA Quiz" << endl;
            cout << "Press 4 to Start DSA Quiz" << endl;
            cout << "Press 5 to Start PHP Quiz" << endl;
            cout << "Press 0 for Developer Information " << endl;
            cin >> iNo;
            cout << "*******************************************************************************" << endl;

            switch (iNo)
            {
            case 0:
                obj->info();
                break;

            case 1:
                obj->cProgramming();
                break;

            case 2:
                obj->cpp();
                break;

            case 3:
                obj->javaProgramming();
                break;

            case 4:
                obj->dsa();
                break;

            case 5:
                obj->phpProgramming();
                break;
            default:
                cout << "Press Valid Choice" << endl;
            }
        }
    }
    return 0;
}