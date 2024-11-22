#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str; // Use std::string internally
public:
    // Constructor
    MyString(const string& s) : str(s) {}

    // Overloaded + operator for concatenation
    MyString operator+(const MyString& other) const {
        return MyString(str + other.str);
    }

    // Overloaded << operator for output
    friend ostream& operator<<(ostream& os, const MyString& obj) {
        os << obj.str;
        return os;
    }
};

int main() {
    MyString s1("fgdfs");
    MyString s2("ppp");
    cout << s1 + s2 << endl;
    return 0;
}
