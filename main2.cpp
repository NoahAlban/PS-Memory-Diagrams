#include<iostream>
using namespace std;
void fun1(int r[], int* s)
{
	r[1] = *s;
	s = new int [4];
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
	cout << "h" << endl;
	return 0;
}
 
