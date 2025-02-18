   **1.check if a number is even or odd.
   
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number ";
	cin>>num;
	if(num%2 == 0){
	cout<<"the number is even "<<endl;
	}
	else{
		cout<<"the number is odd "<<endl;
	}
	return 0;
}

**2.check if a number is negative or positive.
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

**3.Check if a year is a leap year.
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}

**4.Check if a character is a vowel or consonant.
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    ch = tolower(ch); // Convert to lowercase

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "The character is a vowel." << endl;
    } else {
        cout << "The character is a consonant." << endl;
    }

    return 0;
}

**5.Check if an age qualifiers for a senior citizen discount.
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 60) {
        cout << "You qualify for the senior citizen discount." << endl;
    } else {
        cout << "You do not qualify for the senior citizen discount." << endl;
    }

    return 0;
}
