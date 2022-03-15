#include <iostream>
#include <string>
using namespace std;

class stringType
{
public:
	string first;
	string second;

	void setValues(string string1, string string2)
	{
		first = string1;
		second = string2;
		cout << "The string values have been set successfully!\n";
	}

	stringType()
	{
		first = "";
		second = "";
	}

	void printValues()
	{
		cout << "\nString 1--->  " << first;
		cout << "\nString 2--->  " << second;

	}

	void maxLength()
	{
		int i = 0;
		int j = 0;
		for (; first[i] != '\0'; i++)//query:why does it not work when initialized inside the bracket//
		{
		}
		for (; first[j] != '\0'; j++)
		{
		}

		
		cout << "Maximum length of string 1 is " << i << " letters.";
		cout << "Maximum length of string 2 is " << j << " letters.";
	}

	int compare(string stringone, string stringtwo) {
		int counts1 = 0;
		int counts2 = 0;
		int x = 0;

		if (stringone != stringtwo) {
			if (stringone > stringtwo) {
				counts1++;
			}
			else
				counts2++;
		}
		else {
			x = 0;
		}
		if (counts1 > counts2) {
			x = counts1;
		}
		else {
			x = counts2;
		}
		return x;
	}
	
	void copyto(string source, string destination)
	{

		for (int i = 0; source[i] != '\0'; i++) {

			destination[i] = source[i];
		}
		cout << "\nThe new string now stores: ";

		for (int i = 0; source[i] != '\0'; i++)

		{
			cout << destination[i];
		}
	}
	
	void concatenate(string stringone, string stringtwo) {
		int i = 0;
		for (; stringone[i] != '\0'; i++)

			for (int y = i; stringtwo[y - i] != '\0'; y++) {
				stringone[y] = stringtwo[y - i];
			}

		for (int u = 0; stringone[u] != '\0'; u++) {
			cout << stringone[u];
		}

	}

	int searchWord(string word) 
	{
		int count = 0;
		int count1 = 0;
		int l = 0;
		for (; word[count] != '\0'; count++)


			for (int i = 0; first[i] != '\0'; i++)
			{
				if (first[i] == word[l])
				{
					l++;
					count1++;
					if (count1 == count)
					{
						return 1;
					}
				}

				else {
					count1 = 0;
					l = 0;
				}
			}
		return 0;
	}

	int searchChar(char ch) {
		int search = 0;

		for (int i = 0; first[i] != '\0'; i++) {
			if (first[i] == ' ') {
				continue;
			}
			if (first[i] == ch) {
				search = 1;
				return search;
			}

			else {
				search = 2;
			}
		}

		return search;
	}

	~stringType() {
		cout << "\n\n\t\tDESTRUCTOR CALLED BECAUSE SIR SAID SOOOOO\n\n";
	};
	};

	int main()
	{

		string stringone;
		string stringtwo;
		stringType ok;
		int x;
		int y;
		do
		{
			cout << "\n\tMAIN MENU";
			cout << "\n1. Initialize String.";
			cout << "\n2. Print String.";
			cout << "\n3. Check maximum length.";
			cout << "\n4. Compare 2 strings.";
			cout << "\n5. Copy string.";
			cout << "\n6. Concatenate string.";
			cout << "\n7. Search a word in string.";
			cout << "\n8. Search a character in string.\n";

			cin >> x;
			cout << endl;

			if (x == 1)
			{
				cout << "\nEnter first string: ";
				getline(cin, stringone);
				cout << "\nEnter second string: ";
				getline(cin, stringtwo);
				ok.setValues(stringone, stringtwo);
			}

			if (x == 2)
			{
				ok.printValues();
			}
			
			if (x == 3)
			{
				ok.maxLength();

			}

			if (x == 4)
			{
				cout << "Enter the first string: ";
				getline(cin, stringone);
				cout << "Enter the second string: ";
				getline(cin, stringtwo);

				y = ok.compare(stringone, stringtwo);

				if (x == 1)
				{
					cout << "String 1 is greater" << endl;
				}
				if (x == 2)
				{
					cout << "String 2 is greater" << endl;
				}
				if (x == 0) 
				{
					cout << "Strings are equal" << endl;
				}

			}
			
			if (x == 5)
			{
				cout << "\nEnter the string you want to copy: ";
				getline(cin, stringone);

				ok.copyto(stringone, stringtwo);
			}

			if (x == 6)
			{
				cout << "Enter first string: ";
				getline(cin, stringone);
				cout << "Enter second string: ";
				getline(cin, stringtwo);

				ok.concatenate(stringone, stringtwo);
				cout << endl;
				cout << "Strings have been concatinated.\n";

			}
			if (x == 7)
			{
				cout << "Enter the word you want to find: ";
				cin >> stringone;
				int r;
				r = ok.searchWord(stringone);
				if (r == 1) 
				{
					cout << "The word exists" << endl;
				}
				else
				{
					cout << "The word doesn't exist" << endl;
				}

			}
			if (x == 8)
			{
				cout << "Enter the char you want to find: ";

				char t;
				cin >> t;

				int f;

				f = ok.searchChar(t);

				if (f == 1) {
					cout << " Character Exists." << endl;
				}
				else {
					cout << "Character doesn't exist" << endl;
				}
			}


		} while (x != 0);


		



		return 0;
	}
