#include<iostream>
#include<memory>

using namespace std;

int main()
{
	unique_ptr<int> p1(new int(10));

	unique_ptr<int> p2(p1);
	return 0;
}
