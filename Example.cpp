#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    string filename = "C:\\Users\\New\\Desktop\\Admitted Students.csv";
    ifstream file("Feasibility Analysis Report (Amarame Emmanuel).docx");

    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return 1;
    }

    vector<vector<string>> dataArray;
    string line;

    while (getline(file, line)) {
        vector<string> row;
        stringstream ss(line);
        string token;

        while (getline(ss, token, ',')) {
            row.push_back(token);
        }

        dataArray.push_back(row);
    }

    file.close();

       for (const auto& row : dataArray) {
       	  for (const auto& col : row) {
            cout << col << "\t";
        }
	   }
}
      
    
