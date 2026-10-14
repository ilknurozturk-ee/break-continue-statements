#include <iostream>
#include <string>
using namespace std;

int main() {

char mychar[] = "Your number excluded";
int x;
cout << "Write a number between 1-10 here: ";
cin >> x;
for (int i=0;i<=10;i++) {
if (i==x) {
continue;
 }
cout << i << endl;
}
cout << mychar << endl;
return 0;
}
