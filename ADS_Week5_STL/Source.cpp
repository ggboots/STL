#include <iostream>
#include <string>
#include "Student.h"

// STL - Standard template library
#include <vector>
#include <list>
#include <queue>
#include <stack>

using namespace std;

void main() {
	// vector stores data next to each other in RAM
	vector <Student> v;
	Student s1("Ash", 2344);
	v.push_back(s1);
	v.push_back(Student("Biff", 2356));
	v.push_back(Student("Cass", 2355));
	cout << "Vector" << endl;
	//can use vector as array and index through it via []
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].name << " " << v[i].studentID << endl;
	}
	// to insert at index position we need to use an iterator (Pointer)
	// iterators are special pointer, that point to particular position in container
	vector<Student>::iterator vIterator = v.begin(); //point to first index position
	vIterator++; // moves iterator up a position ( 0 -> 1 )
	// insert new student using iterator for position
	v.insert(vIterator, Student("Gary", 2666));
	// NOTE: not safe to use this iterator in its current state

	// using iterator to loop through container, v the vector
	cout << "Pointer place new student in list at index 1" << endl;
	for (vector<Student>::iterator i = v.begin(); i != v.end(); i++)
	{
		//iterator is a pointer to a position in the container
		// dereferncing gives the thing the iterator is pointing at 
		cout << (*i).name << " " << i->studentID << endl;
	}

	//Delete member from the List, pop (removes)
	v.pop_back();
	// remove elements not at the back, we need an iterator
	vIterator = v.begin();
	vIterator++;
	v.erase(vIterator); //deletes elements at iterator position

	// to display changes, take for loop from up above

	cout << " " << endl;

	//List Stores data in RAM at random locations where it can fit stuff
	list<Student> l;
	l.push_back(Student("Cythia", 2900));
	l.push_back(Student("Victor", 2901));
	//push to front
	l.push_front(Student("Tom", 1111));
	// pop_back, pop_front, insert, erase
	// can't use [] to index a list, have to use iterators
	cout << "Finish List" << endl;
	for (list<Student>::iterator i = l.begin(); i != l.end(); i++)
	{
		cout << (*i).name << " " << i->studentID << endl;
	}
	l.pop_back();
	l.pop_front();

	for (Student s : l)
	{
		cout << s.name << " " << s.studentID << endl;
		// s is a copy of things from the list
		// value in l via s
	}

	cout << " " << endl;

	//QUEUE
	//FIFO - First in First out
	queue<Student> studentQueue;
	cout << "Queue" << endl;
	// add to the queue (can only add to the back)
	studentQueue.push(Student("Mary", 1111));
	studentQueue.push(Student("God", 1441));
	studentQueue.push(Student("Harry", 1331));
	cout << "processing queue" << endl;

	while(studentQueue.size() > 0) {
		cout << "Processing Student: " << studentQueue.front().name << endl;
		studentQueue.pop(); // removes student at front

	}
	cout << " " << endl;

	//STACK
	// FILO - first in last out
	stack<string> colourStack;
	colourStack.push("Yellow");
	colourStack.push("pink");
	colourStack.push("Blue");
	colourStack.push("Green");
	colourStack.push("Red");

	cout << "Stacked Colours" << endl;
	while (colourStack.size() > 0)
	{
		cout << colourStack.top() << endl;
		colourStack.pop();

	}



	system("pause");
}