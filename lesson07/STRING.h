#include <iostream>
using namespace std; 

class STRING {
    public:
        STRING();
        STRING(char *in_str);
        STRING(const char *in_str);
        STRING(const STRING &ob);
        ~STRING();
        int get_length() const; 
        char *get_str() const; 
        void set_str(char *in_str);
        STRING &operator=(STRING &right);
        char &operator[](int i);
        bool operator<(STRING &right);
        bool operator>(STRING &right);
        bool operator==(STRING &right);
        friend ostream &operator<<(ostream &left, const STRING &ob);
        friend istream &operator>>(istream &left, STRING &ob);
    private:
       int length;
       char *str; 
};
