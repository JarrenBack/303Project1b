#include <iostream>
#include <List>
#include "Term.h"

using namespace std;

int main()
{
	list<Term> testList;

	Term term1(4, 2);
	Term term2(3,9);
	Term term3(5, 1);
	Term term4(5, 7);

	testList.push_back(term1);
	testList.push_back(term2);
	testList.push_back(term3);
	testList.push_back(term4);
	
	testList.sort();

	cout << (term3 > term4) << endl;
	cout << (term3 == term4) << endl;
	cout << (term3 < term4) << endl;

	system("pause");

	return 0;

}