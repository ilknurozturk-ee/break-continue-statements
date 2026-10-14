#include <iostream>
#include <string>
using namespace std;

int main() {

char mychar[] = "Counted up to the number you chose.";
int x;
cout << "Write a number between 1-10 here: ";
cin >> x;
for (int i=0;i<=10;i++) {
if (i==x) {
break;
 }
cout << i << endl;
}
cout << mychar << endl;
return 0;
}
