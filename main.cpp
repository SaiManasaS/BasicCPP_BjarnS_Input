/* Copyright (C) 2020 Sai Manasa S
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Description: This is a program used to find 2 integer array 
 * elements that add up to a given target sum
 *
 * Revision History:
 * Initial version: June 11th, 2020
 */
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void function1()
{
	string first_name = "???" ;
	double age = -1.0;

	cout << "Please enter your first name and age\n";
	cin >> first_name;
	cin >> age;

	cout << "Hello, " << first_name << "! (age " << age << ")\n" ;
}

void function2()
{
	double n;
	cout << "Please enter a floating-point value:" ;
	cin >> n;
	cout << "n == " << n << "\nn+1 == " << n+1 << "\nthree times n == " << 3*n << "\ntwice n == " << n+n << "\n squared" << n*n << "\nhalf of n ==" << n/2 << "\nsquare root of n == " << sqrt(n) << endl;
}

void function3()
{
	int n;
	cout << "Please enter an integer value:" ;
	cin >> n;
	double ndoub = n;
	cout << "n == " << n << "\nn+1 == " << n+1 << "\nthree times n == " << 3*n << "\ntwice n == " << n+n << "\n squared" << n*n << "\nhalf of n ==" << n/2 << "\nsquare root of n == " << sqrt(ndoub) << endl;
}

void function4()
{
	string first, second, name;
	cout << "Please enter your first & second names\n";
	cin >> first >> second;
	name = first + " " + second;
	cout << "Hello, " << name << "\n";
}

void function5()
{
	string first = "", second = "";
	cout << "Please enter two names\n";
    cin >> first >> second;
	if(first == second)
	{
		cout << "that's the same name twice\n";
	}
	if(first < second)
	{
		cout << first << " is alphabetically before " << second << "\n";
	}
	if(first > second)
	{
		cout << first << " is alphabetically after " << second << "\n";
	}
}

void repeatedSeqWords()
{
	string previous = "", current = "";
	while(cin >> current)
	{
		if(previous == current)
		{
			cout << "repeated word: " << current << "\n";
		}
		previous = current;
	}
}

void repeatedSeqWordsnNum()
{
	string current = "", previous = "";
	int numOfWords = 0;
	while(cin >> current)
	{
		++numOfWords;
		if(previous == current)
		{
			cout << "Word number" << numOfWords << "repeated word: " << current << "\n";
		}
		previous = current;
	}
}

void function6()
{
    string s = "Goodbye, cruel world! ";
	cout << s << "\n";
}

void function7()
{
	string first_name = "", friend_name = "", another_friend = "";
	char friend_sex = 0;
	int age = 0;
	cout << "Please enter your firstname: ";
	cin >> first_name;
	cout << "Hello, " << first_name << endl;
	cout << "Enter the name of the person you want to write to" << endl;
	cin >> friend_name;

	cout << "Enter the name of another friend" << endl;
	cin >> another_friend;
	cout << "What is the sex of your friend (m/ f)? " << endl;
	cin >> friend_sex;
	cout << "Enter the age of your friend:" << endl;
	cin >> age;

	cout << "Dear " << friend_name << endl;
	cout << "How are you? \n I am fine. I miss you." << endl;
	cout << "Have you seen " << another_friend << " lately?" << endl;
	if(friend_sex == 'm')
	{
		cout << "If you see " << another_friend << " please ask him to call me." << endl;
	}
	else if(friend_sex == 'f')
	{
		cout << "If you see " << another_friend << " please ask her to call me." << endl;
	}

	if(age <= 0 || age >= 110)
	{
		cout << "you're kidding!";
	}
	else
	{
		cout << "I hear you just had a birthday and you are " << age << " years old.";
	}

	if(age <= 12)
	{
		cout << "Next year you will be " << age+1;
	}
	else if(age == 17)
	{
		cout << "Next year you will be able to vote";
	}
	else if(age >= 70)
	{
		cout << "I hope you are enjoying retirement.";
	}
	cout << "\n" << "Yours sincerely," << endl << endl;
	cout << first_name;

}

int main()
{
    //function1();
    //function3();
    //function4();
	//repeatedSeqWords();
	//repeatedSeqWordsnNum();
	function7();

	while(1);
	return 0;
}