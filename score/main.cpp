//
//  main.cpp
//  score
//
//  Created by 20161104575 on 18/6/27.
//  Copyright © 2018年 20161104575. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string Trim(string& str)
{
    str.erase(0,str.find_first_not_of("\t\r\n"));
    str.erase(str.find_last_not_of("\t\r\n")+1);
    return str;
}
int main()
{
    ifstream fin("/Users/a20161104575/Desktop/scoresort/score/score.csv ");
    
    string line;
    while (getline(fin, line)) {
        //cout << line << endl;
        
        istringstream sin(line);
        vector<string> fields;
        string field;
        while (getline(sin, field, ',')) {
            fields.push_back(field);
        }
        string name = Trim(fields[0]);
        string age = Trim(fields[1]);
        string birthday = Trim(fields[2]);
        cout << name << "\t" << age << "\t" << birthday << endl; 
    }
}
