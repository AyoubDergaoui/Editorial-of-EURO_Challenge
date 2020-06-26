/* We're going to use a directed graph*/
/* The matrix M is the adjacency matrix whose the keys describing the teams*/
/* M[team1][team2] equals 1 if team1 is favorable on team2, otherwise 0*/
#include <iostream>
#include <map>
#include <cstdio>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	map<string,map<string,int> > M;
	vector<string> S(16);
	for(int i=0;i<16;i++)
	    cin >> S[i];
    for(int i=0;i<16;i++)
        for(int j=0;j<16;j++)
            M[S[i]][S[j]]=0; 
    for(int i=0;i<16;i++)
    {
        string s,sub,a,d;
        getline(cin,s);
        istringstream iss(s); //converting s into stream
        iss >> a; //extracting the favorable team
        iss >> d; //erasing the (:)
        do{
            iss >> sub;
            if(iss)
                M[a][sub]=1; // filling the adjacency matrix
        }while(iss);
    }
    for(int i=0;i<8;i++)
    {
        if(M[S[i]][S[i+1]]) // testing if team S[i] will win over the S[i+1]
            S.erase(S.begin()+i+1); //deleting the unfavorable team
        else
            S.erase(S.begin()+i);
    }
    /* the code above is a repetition of the upper one */
    cout << "1/4 :";
    for(int i=0;i<8;i+=2)
    cout << " |"<<S[i]<<" vs "<< S[i+1]<<"|";
    cout << endl;
    for(int i=0;i<4;i++)
    {
        if(M[S[i]][S[i+1]])
            S.erase(S.begin()+i+1);
        else
            S.erase(S.begin()+i);
    }
    cout << "1/2 :";
    for(int i=0;i<4;i+=2)
    cout << " |"<<S[i]<<" vs "<< S[i+1]<<"|";
    cout << endl;
    for(int i=0;i<2;i++)
    {
        if(M[S[i]][S[i+1]])
            S.erase(S.begin()+i+1);
        else
            S.erase(S.begin()+i);
    }
    cout << "Final : "<< "|"<<S[0]<<" vs "<< S[1]<<"|"<<endl; //Only 2 teams left
    cout <<"EURO Champion : ";
    if(M[S[0]][S[1]])
        cout << S[0];
    else
        cout << S[1];
    cout << endl;
	return 0;
}
