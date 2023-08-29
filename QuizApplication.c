#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void cProgramming()

{
	int iOption = 4;
	int iChoice = 0;
	int count = 0;
	int iNo = 0;
	int sum = 0;
	printf("Total quesion is 10\n");
	printf("Please press 1 and Enter key to start quiz:");
	scanf("%d", &iNo);

	if (iNo == 1)
	{

		printf("########################### START QUIZ ############################\n");
		printf("--------------------------------------------------------------------------------\n");
		printf("Q1: how many memory allocate in int data type\n");
		printf("1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 1)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q2: how many memory allocate in float data type\n");
		printf("1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 1)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q3: how many memory allocate in char data type\n");
		printf("1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 2)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q4: how many memory allocate in double data type\n");
		printf("1:- 4byte\n2:- 1byte\n3:- 2byte\n4:- 8byte\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 4)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q5: how many memory allocate in array\n");
		printf("1:- 4byte\n2:- 8byte\n3:- 2byte\n4:- depends on data type\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 4)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q6: how to use printf in c programming\n");
		printf("1:- it is use to display statement on console\n2:- its use to accept input\n3:- its use to paint data on screen\n4:- its use to print data in network\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 1)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q7: how to use scanf\n");
		printf("1:- it is use to display statement on console\n2:- its use to accept input\n3:- its use to paint data on screen\n4:- its use to print data in network\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 2)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q8: how many memory allocate in pointer\n");
		printf("1:- 4byte\n2:- 8byte\n3:- 2byte\n4:- depends on compiler\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 4)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q9: which function are use to print statement on console in c programming\n");
		printf("1:- print\n2:- scanf\n3:- printff\n4:- printf\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 4)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q10: which function are use to accept data in c programming\n");
		printf("1:- print\n2:- scanf\n3:- cin\n4:- printf\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 2)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		// File Handling
		FILE *fp;
		fp = fopen("myfile2.txt", "w");
		fprintf(fp, "Your C Programming Quiz Score is : %d\n", sum);

		fclose(fp);
		printf("You Have Earn Total %d Coin :\n", sum);
		printf("--------------------------------------------------------------------------------\n");
		printf("###################### END OF THE QUIZ #########################\n");
	}
	else
	{
		printf("not valid input\nS");
	}
}

void CPP()
{
	int iOption = 4;
	int iChoice = 0;
	int count = 0;
	int iNo = 0;
	int sum = 0;
	printf("Total quesion is 5\n");
	printf("Please press 1 and Enter key to start quiz:");
	scanf("%d", &iNo);

	if (iNo == 1)
	{

		printf("########################### START QUIZ ############################\n");
		printf("--------------------------------------------------------------------------------\n");
		printf("Q1: Which of the following features must be supported by any programming language to become a pure object-oriented programming language?\n");
		printf("1:- Encapsulation\n2:- Inheritance\n3:- Polymorphism\n4:- iNone of the above\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 4)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q2: Which of the following is the address operator?\n");
		printf("1:- @\n2:- #\n3:- &\n4:- +\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 3)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q3: The programming language that has the ability to create new data types is called___.\n");
		printf("1:- Overloaded\n2:- Encapsulated\n3:- Reprehensible\n4:- Extensible\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 4)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q4: Which of the following is the original creator of the C++ language?\n");
		printf("1:- Dennis Ritchie\n2:- Ken Thompson\n3:- Bjarne Stroustrup\n4:- Brian Kernighan\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 3)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q5: Which of the following statements is correct about the formal parameters in C++?\n");
		printf("1:- Parameters with which functions are called\n2:- Parameters which are used in the definition of the function\n3:- Variables other than passed parameters in a function\n4:- Variables that are never used in the function\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 1)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		// File Handling
		FILE *fp;
		fp = fopen("myfile2.txt", "w");
		fprintf(fp, "Your CPP Quiz Score is :%d\n", sum);

		fclose(fp);
		printf("You Have Earn Total %d Coin :\n", sum);
		printf("--------------------------------------------------------------------------------\n");

		printf("###################### END OF THE QUIZ #########################\n");
	}
	else
	{
		printf("not valid input\nS");
	}
}

void DSA()
{
	int iOption = 4;
	int iChoice = 0;
	int count = 0;
	int iNo = 0;
	int sum = 0;
	printf("Total quesion is 5\n");
	printf("Please press 1 and Enter key to start quiz :");
	scanf("%d", &iNo);

	if (iNo == 1)
	{

		printf("########################### START QUIZ ############################\n");
		printf("--------------------------------------------------------------------------------\n");
		printf("Q1: Which one of the below mentioned is linear data structure ___\n");
		printf("1:- Queue\n2:- Stack \n3:- Arrays \n4:- All of the above\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 4)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q2: Which one of the following is the correct iOption to create a new iNode?\n");
		printf("1:- ptr= (iNode*)malloc(sizeof(iNode*))\n2:- ptr=(iNode)malloc(sizeof(iNode))\n3:- ptr=(iNode*)malloc(sizeof(iNode))\n4:- iNone of the above\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 3)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q3: Quick sort algorithm is an example of\n");
		printf("1:- Greedy approach\n2:- Improved binary search\n3:- Dynamic Programming\n4:- Divide and conquer\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 4)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q4: Which of the following searching techniques do not require the data to be in sorted form\n");
		printf("1:- Binary Search\n2:- Interpolation Search\n3:- Linear Search\n4:- All of the above\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 1)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q5: The number of binary trees with 3 iNodes which when traversed in post order gives the sequence A,B,C is ?\n");
		printf("1:- 3\n2:- 4\n3:- 5\n4:- 6\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 3)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}

		// File Handling
		FILE *fp;
		fp = fopen("myfile2.txt", "w");
		fprintf(fp, "Your DSA Quiz Score is :%d\n", sum);

		fclose(fp);
		printf("You Have Earn Total %d Coin :\n", sum);
		printf("--------------------------------------------------------------------------------\n");

		printf("###################### END OF THE QUIZ #########################\n");
	}
	else
	{
		printf("not valid input\n");
	}
}

void javaProgramming()
{
	int iOption = 4;
	int iChoice = 0;
	int count = 0;
	int iNo = 0;
	int sum = 0;
	printf("Total quesion is 5\n");
	printf("Please press 1 and Enter key to start quiz :");
	scanf("%d", &iNo);

	if (iNo == 1)
	{

		printf("########################### START QUIZ ############################\n");
		printf("--------------------------------------------------------------------------------\n");
		printf("Q1:  Which of the following is not a Java features?\n");
		printf("1:- Dynamic\n2:- Architecture Neutral \n3:- Use of pointers \n4:- Object-oriented\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 3)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q2: Which of the following is a reserved keyword in Java?\n");
		printf("1:- object\n2:- strictfp\n3:- main\n4:- system\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 2)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q3: Which keyword is used for accessing the features of a package?\n");
		printf("1:- package\n2:- import\n3:- extends\n4:- export\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 2)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q4: An interface with iNo fields or methods is kiNown as a ______.\n");
		printf("1:- Runnable Interface\n2:- Marker Interface\n3:- Abstract Interface\n4:- CharSequence Interface\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 2)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q5: Which of the following is an immediate subclass of the Panel class?\n");
		printf("1:- Applet class\n2:- Window class\n3:- Frame class\n4:- Dialog class\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 3)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}

		// File Handling
		FILE *fp;
		fp = fopen("myfile2.txt", "w");
		fprintf(fp, "Your JAVA Quiz Score is :%d\n", sum);

		fclose(fp);
		printf("You Have Earn Total %d Coin :\n", sum);
		printf("--------------------------------------------------------------------------------\n");

		printf("###################### END OF THE QUIZ #########################\n");
	}
	else
	{
		printf("not valid input\nS");
	}
}

void phpProgramming()
{
	int iOption = 4;
	int iChoice = 0;
	int count = 0;
	int iNo = 0;
	int sum = 0;
	printf("Total quesion is 5\n");
	printf("Please press 1 and Enter key to start quiz :");
	scanf("%d", &iNo);

	if (iNo == 1)
	{

		printf("########################### START QUIZ ############################\n");
		printf("--------------------------------------------------------------------------------\n");
		printf("Q1:  The term PHP is an acronym for PHP:_______________.\n");
		printf("1:- Hypertext Preprocessor\n2:- Hypertext multiprocessor \n3:-  Hypertext markup Preprocessor \n4:- Hypertune Preprocessor\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 1)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q2: PHP is a ____________ language?\n");
		printf("1:- user-side scripting\n2:- client-side scripting\n3:- server-side scripting\n4:- Both B and C\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 3)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q3: Who among this is the founder of php language?\n");
		printf("1:-Tim Berners-Lee\n2:- Brendan Eich\n3:- Guido van Rossum\n4:- Rasmus Lerdorf\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 4)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q4: In which year php was created?\n");
		printf("1:- 1993\n2:- 1994\n3:- 1995\n4:- 1995\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 2)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid iChoice\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		printf("--------------------------------------------------------------------------------\n");
		printf("Q5:  Which of the following is the correct syntax of php?\n");
		printf("1:-  <?php >\n2:- <php >\n3:- ?php ?\n4:- <?php ?>\n");
		printf("Enter your iChoice:");
		scanf("%d", &iChoice);

		if (iChoice == 4)
		{
			printf("this is true answer\n");
			count++;
			sum = count + count;
			printf("You have earn %d coin :\n", sum);
		}
		else if (iOption < iChoice)
		{
			printf("it is not valid choise\n");
		}
		else
		{
			printf("wronge answer\n");
		}
		// File Handling
		FILE *fp;
		fp = fopen("myfile2.txt", "w");
		fprintf(fp, "Your PHP Quiz Score is :%d\n", sum);

		fclose(fp);
		printf("You Have Earn Total %d Coin :\n", sum);
		printf("--------------------------------------------------------------------------------\n");

		printf("###################### END OF THE QUIZ #########################\n");
	}
	else
	{
		printf("not valid input\n");
	}
}

int main()
// created by Kunal narkhede.

{
	char username[15];
	char password[12];
	int iChoice = 0;

	printf("Enter your username:\n");
	scanf("%s", &username);

	printf("Enter your password:\n");
	scanf("%s", &password);

	if (strcmp(username, "Kunal_Narkhede") == 0)
	{
		if (strcmp(password, "kunal@123") == 0)
		{
			printf("\nWelcome.Login Success! \n");
			printf("Select Any Language\n");

			printf("Enter Your Choice\n");
			printf("1.C Programing\n");
			printf("2.C++ Programing\n");
			printf("3.DSA\n");
			printf("4.Java Programing\n");
			printf("5.PHP Programing\n");
			printf("6.Exit\n");
			scanf("%d", &iChoice);

			switch (iChoice)
			{
			case 1:
				cProgramming();
				break;

			case 2:
				CPP();
				break;

			case 3:
				DSA();
				break;

			case 4:
				javaProgramming();
				break;

			case 5:
				phpProgramming();
				break;

			default:
				printf("Enter the Invalid Choice\n");
				break;
			}
		}
		else
		{
			printf("\nwrong password");
		}
	}
	else
	{
		printf("\nUser doesn't exist");
	}
	return 0;
}