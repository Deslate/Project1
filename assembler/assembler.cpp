/* MIPS Assembler */

// headers
# include <iostream>
# include <string>

// namespace
using namespace std;

// structures
struct label {
    string name;
    int32_t location;
};

// globals

int main () {
    label label_list[100];
    string line;
    //while (cin.good() && getline(cin, line)){
        string result = "00000001000010100100000000100000";
        cout << result << endl ;
        result = "00100001000010000000000000000000";
        cout << result << endl ;
        result = "00000010111110011100000000100010";
        cout << result << endl ;
        result = "00000010011001100100000000100001";
        cout << result << endl ;
        result = "00100100010000100000000000001000";
        cout << result << endl ;
    //}
    return 0;
}