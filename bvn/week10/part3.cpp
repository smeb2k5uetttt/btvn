#include<bits/stdc++.h>
using namespace std;
int main()
{
    char* a = new char[10];
    char* c = a + 3;//nên giải phóng từ đầu của kihối bộ nhớ được cấp phát
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;

}
