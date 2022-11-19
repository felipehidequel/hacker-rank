#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream recebe(str + ',');
    int ns; // guarda os numeros da string
    char ch; // guarda as caracteres da string
    vector<int> vetor; // vetor de inteiros a ser retornado
	while (recebe >> ns >> ch){
        vetor.push_back(ns);
    }
    return vetor;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}