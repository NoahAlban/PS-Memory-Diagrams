//code for Problem Set about memory management
#include<iostream>
using namespace std;

void fun1(int r[], int* s)
{
	cout << r[2] << endl;
	r[1] = *s;
	cout << r[1] <<endl;
	s = new int [4];
	cout << *s << endl;
	/*Draw memory diagram at this point*/
}

int main()
{
	int a[3];
	a[0] = 3;
          *(a+1) = 4;
 	int* z = a + 2;
	*z = 1;
	fun1(a, z);
	cout << a[1] << " " << a[2] << " " << a[3] << endl;
	return 0;
}