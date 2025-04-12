// file:    tenMinutesWalk.cpp
// author:  Diogo Marques
// data:    12/04/2025
// description:
//  Ten Minutes Walk at Codewars.com

#include <iostream>
#include <vector>

using namespace std;


bool isValidWalk(vector <char> walk){

    if(walk.size() != 10){return false;}

    int x = 10;
    int y = 10;

    for(int i = 0; i < walk.size(); i++){
        switch(walk[i]){
            case 110:
                y++;
                break;
            case 119:
                x--;
                break;
            case 115:
                y--;
                break;
            case 101:
                x++;
                break;
            default:
                return false;   
        }        
    }
    if(x == 10 && y == 10){return true;}
    return false;
}


int main(){

    vector <char> test1 = {'n'};
    vector <char> test2 = {'n','s','n','s','n','s','n','s','n','s'};
    vector <char> test3 = {'n', 's'};
    vector <char> test4 = {'n','s','n','s','n','s','n','s','n','s','n','s'};
    vector <char> test5 = {'e','w','e','w','n','s','n','s','e','w'};
    vector <char> test6 = {'n','s','e','w','n','s','e','w','n','s','e','w','n','s','e','w'};
    vector <char> test7 = {'n','s','e','w','n','s','e','w','n','s'};
    vector <char> test8 = {'s','e','w','n','n','s','e','w','n','s'};
    vector <char> test9 = {'n','s','n','s','n','s','n','s','n','n'};
    vector <char> test10 = {'e','e','e','w','n','s','n','s','e','w'};



    cout << "test1 = " << isValidWalk(test1) << endl;
    cout << "test2 = " << isValidWalk(test2) << endl;
    cout << "test3 = " << isValidWalk(test3) << endl;
    cout << "test4 = " << isValidWalk(test4) << endl;
    cout << "test5 = " << isValidWalk(test5) << endl;
    cout << "test6 = " << isValidWalk(test6) << endl;
    cout << "test7 = " << isValidWalk(test7) << endl;
    cout << "test8 = " << isValidWalk(test8) << endl;
    cout << "test9 = " << isValidWalk(test9) << endl;
    cout << "test10 = " << isValidWalk(test10) << endl;

    return 0;
}