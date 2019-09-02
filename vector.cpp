// Vector in C++ STL
/* Vectors are same as dynamic arrays.
resize itself automactically when an element 
is inserted or deleted.
In vectors, data is inserted at the end.
Inserting at the end takes differential time,
as sometimes there may be a need of extending the array.
removing the last elements takes only constant time.
Inserting and erasing at the beginning of the middle is linear
in time.
*/

/* Iterator:
1. begin(): returns an iterator pointing to the first element in the vector.
2. end(): returns an iterator pointing to the theoretical element that follows
the last element in the vector.
3. rbegin(): reverse iterator of begin().It moves from last to first element
4. rend(): reverse iterator of end().
5. cbegin(): constant iterator
6. cend(): constant iterator 
7. crbegin(): constant iterator 
8. crend(): constant iterator 
*/
#include<iostream>
#include<vector>
using namespace std;

void vector_iterator()
{
	vector<int> g1;
	for(int i=1; i<=5; i++)
	{
		g1.push_back(i);
	}
	cout<< "Output of begin and end: ";
	for(auto i=g1.begin(); i!=g1.end(); ++i)
	{
		cout<< *i << " ";
	}
	cout<< "\n Output of cbegin and cend: ";
	for(auto i=g1.cbegin(); i!=g1.cend(); ++i)
	{
		cout<< *i<< " ";
	}
	cout<<"\n Output of rbegin and rend: ";
	for(auto i=g1.rbegin(); i!=g1.rend(); ++i)
	{
		cout << *i << " ";
	}
	cout <<"\n Output of crbegin and crend: ";
	for(auto i = g1.crbegin(); i!=g1.crend(); ++i)
	{
		cout<<*i<<" ";
	}
}
/*
size(): the number of elements 
max_size(): the maximum number of elements
capacity(): returns the size of the storage space
resize(): resize the container
empty(): returns whether the container is empty
shrink_to_fit(): reduce the capacity of the container to fit
its size and destropys all elements beyond the capacity.
reserve(): Requests that the vector capacity be at least 
enough to contain n elements.
*/

void vector_capacity()
{
	vector<int> g1;
	for(int i=1; i<=5; i++)
	{
		g1.push_back(i);
	}
	cout<<"Size :"<<g1.size()<<endl;
	cout<<"Capacity: "<<g1.capacity()<<endl;
	cout<<"Max_size: "<<g1.max_size()<<endl;

	//resize
	g1.resize(4);
	cout<<"Size after resize: "<<g1.size()<<endl;

	//check empty
	if(g1.empty()==false)
	{
		cout<<"Vector is not empty"<<endl;
	}
	else
	{
		cout<<"Vector is empty"<<endl;
	}
	//shrink to the vector
	g1.shrink_to_fit();
	cout<<"Vector elements are ";
	for(auto it = g1.begin(); it!=g1.end(); it++)
	{
		cout <<*it<<" ";
	}

}

/*Element access:
reference operator [g]: returns a ference to the element at position 'g'
at(g): returns a reference to the element at position 'g'
front(): returns a ference to the first element 
back(): returns a reference to the last element
data(): returns a direct pointer to the memory array used interbally bet the vector 
to store its owned elements.
*/
void element_access()
{
	vector<int> g1;
	for(int i=1; i<=10; i++)
	{
		g1.push_back(i);
	}
	cout<<"Referene operator [g]: g1[2] = "<<g1[2]<<endl;
	cout<<"at: g1.at(4) = "<<g1.at(4) <<endl;
	cout<<"front(): g1.front() = "<<g1.front() <<endl;
	cout<<"back(): g1.back() = "<<g1.back() <<endl;
	// pointers to the first element
	int* pos = g1.data();
	cout<<"The first element is "<<*pos<<endl;
}

/* Modifiers
assign(): it assigns new value to the vector elements by replacing old ones.
push_back(): it push the elements into a vector from the back.
pop_back(): it is used to pop or remove elements from a vector from the back.
insert(): it inserts new elements before the elements at the specified position.
erase(): it is used to remove elements from a container from the specified position or range.
swap(): it is used to swap the contents of one vector with another.
clear(): it is used to removed all the elements
emplace(): it extends the container by inserting new element at position
emplace_back(): the new element is added to the end of the vector
*/
void vector_modifier()
{
	vector<int> v;
	//fill the array with 10 five times
	v.assign(5,10);
	cout<<"The vector elements are : ";
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<endl;
	}
	//insert 15 to the last position
	v.push_back(15);
	int n = v.size();
	cout<<"The last element is: "<<v[n-1]<<endl;
	//remove last element
	v.pop_back();
	//prints the vector
	cout<<"The vector elements are: ";
	for(int i=0; i<v.size(); i++)
	{
		cout<< v[i] << endl;
	}
	//inserts 5 at the beginning 
	v.insert(v.begin(),5);

	cout<<"The first element is: " <<v[0]<<endl;
	//remove the first element
	v.erase(v.begin());
	cout<< "The first element is: "<<v[0]<<endl;

	//insert 20 at the end 
	v.push_back(20);
	n = v.size();
	cout<<"The last element is: "<<v[n-1]<<endl;

	//erases the vector
	v.clear();
	cout<<"Vector size after erase(): "<<v.size()<<endl;

	//two vectors to swap
	vector<int> v1,v2;
	v1.push_back(1);
	v1.push_back(2);
	v2.push_back(3);
	v2.push_back(4);
	//swap 
	for(int i=0; i<v1.size(); i++)
	{
		cout <<v1[i]<<endl;
	}
	for(int i=0; i<v2.size(); i++)
	{
		cout<<v2[i]<<endl;
	}
	v1.swap(v2);
	for(int i=0; i<v1.size(); i++)
	{
		cout <<v1[i]<<endl;
	}
	for(int i=0; i<v2.size(); i++)
	{
		cout<<v2[i]<<endl;
	}

}


int main()
{
	vector_iterator();
	vector_capacity();
	element_access();
	vector_modifier();
	return 0;
}