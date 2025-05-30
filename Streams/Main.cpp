#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Write(const string text, ostream& ostream) {
    //text = "ha!"; -- not possible due to text being const
    ostream << text;
}

int main () {
    string text = "Hello world\n";
    cout << text;

    //cin >> text; -- listens for a single word in a sentence

    getline(cin, text);
    //cout << text;

    // for (int i =0; i < 1'000'000; i++) {
    //     Write(text, cout);
    // }

    // Output to file
    ofstream output("data.txt");
    //output << text;
    Write(text, output);
    output.close();

    text = "";
    //input from file
    ifstream input("data.txt");
    input >> text;
    input.close();

    cout << "Read from file: " << text << endl;

}
