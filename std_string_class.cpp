/* This is to summarize std::string class in C++.
Input Functions:
1. getline(): store a stream of characters as entered by the user
2. push_back(): Input a char at the end of the string.
3. pop_back(): delete the last char from the string.
4. capacity(): returns the capacity allocated to the string.
5. resize(): change the size of string.
6. length(): find the length of the string.
7. shrink_to_fit(): decreases the capacity of the string and makes it equal to its size
8. begin(): return an iterator to beginning of the string.
9. end(): return an iterator to end of the string.
10. rbegin(): return a reverse iterator pointting at the end of string.
11. rend(): return a revserse iterator pointing at the beginning of string.
12. copy("char array", len,pos): copy the substring in target char array.
13. swap(): this function swaps one string with other.
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	//declearing string
	string str;
	//takeing string input using getline()
	getline(cin, str);
	//display string
	cout<<"The initial string is: ";
	cout<<str<<endl;
	//display capacity of the string
	cout<< "The capacity of string " <<str<< " is: ";
	cout<<str.capacity()<<endl;

	//using push_back to insert a char at end
	str.push_back('s');

	//display string
	cout<<"The string after push_back() is: ";
	cout<< str << endl;

	//resize
	str.resize(13);
	//display capacity of the string
	cout<< "The capacity of string " <<str<< " is: ";
	cout<<str.capacity()<<endl;

	//using pop_back() to delete a char
	str.pop_back();
	cout<<"The string after pop_back() is: ";
	cout<<str<<endl;


	//initializing 1st string
	string str1 = "abcdefghijklmnopqrstuvwxys";
	string str2 ="1234567890";
	//declaring char array
	char ch[80];
	str1.copy(ch,13,0);
	cout<<"The new copied char array is: ";
	cout<< ch << endl;
	//display strings before swapping
	cout<<"The 1st string before swapping is: ";
	cout<<str1<<endl;
	cout<<"The 2nd string before swapping is: ";
	cout<<str2<<endl;
	//using swap
	str1.swap(str2);

	//dsplay strings after swapping.
	cout<<"The 1st string after swapping is: ";
	cout<<str1<<endl;
	cout<<"The 2nd string after swapping is: ";
	cout<<str2<<endl;
	return 0;
}