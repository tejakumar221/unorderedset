#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main()
{
	unordered_set<int>uset;
	cout << "Inserting elements into the UnorderedSet" << endl;
	uset.insert(55);
	uset.insert(15);
	uset.insert(28);
	uset.insert(25);
	for (int x : uset)
	{
		cout << x << " ";
	}
	cout << endl;
	cout << "Size: " << uset.size() << endl;
	//Inserting multiple elements
	uset.insert({ 23,12,8,33,19, 30 });
	for (int x1 : uset)
	{
		cout << x1 << " ";
	}
	cout << endl;
	cout << "Size: " << uset.size() << endl;
	//Inserting using vector
	vector<int>v = { 29, 2,14,36,18 };
	uset.insert(v.begin(), v.end());
	for (int x2 : uset)
	{
		cout << x2 << " ";
	}
	cout << endl;
	cout << "Size: " << uset.size() << endl;
	//Erasing a single element
	uset.erase(29);
	for (int x3 : uset)
	{
		cout << x3 << " ";
	}
	cout << endl;
	cout << "Size: " << uset.size() << endl;
	//Erasing the first element
	uset.erase(uset.begin());
	for (int x4 : uset)
	{
		cout << x4 << " ";
	}
	cout << endl;
	cout << "Size: " << uset.size() << endl;
	//Erasing multiple elements
	auto first = next(uset.begin(), 1);
	auto last = next(uset.begin(), 6);//Last element won't be removed
	uset.erase(first, last);
	for (int x5 : uset)
	{
		cout << x5 << " ";
	}
	cout << endl;
	cout << "Size: " << uset.size() << endl;
	cout << "First_element " << *uset.begin() << endl;
	cout << "Last_element " << *--uset.end() << endl;
	//Swapping the elements
	unordered_set<int>uset1;
	uset1.swap(uset);
	cout << "Swapped elements: ";
	for (int x6 : uset1)
	{
		cout << x6 << " ";
	}
	cout << endl;
	cout << "Size: " << uset1.size() << endl;	
}
