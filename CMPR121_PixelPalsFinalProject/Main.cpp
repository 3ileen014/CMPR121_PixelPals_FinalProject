
#include <iostream>
#include "PersonType.h"
#include "CandidateType.h"
using namespace std;

int main()
{
    CandidateType c1; 
    c1.setPersonInfo("Troy", "Barnes", 987654321);

    c1.updateVotesByCampus(1, 12);
    c1.updateVotesByCampus(2, 15);
    c1.updateVotesByCampus(3, 10);
    c1.updateVotesByCampus(4, 4);
    
    cout << "c1's total votes: " << c1.getNumVotes() << endl;
    cout << "c1's votes from campus 2: " << c1.getVotesByCampus(2) << endl;
    cout << "c1's candidate info: "; c1.printCandidateInfo();
    cout << endl;
    c1.printCandidateTotalVotes(); 
    cout << endl;
    c1.printCandidateCampusVotes(4);

    // hello 

}

/*
    PersonType p1;
    p1.setPersonInfo("Annie", "Edison", 123456789);

    cout << "getFirstName w/ p1: " << p1.getFirstName() << endl;
    cout << "getLastname w/ p1: " << p1.getLastName() << endl;
    cout << "getSSN w/ p1: " << p1.getSSN() << endl << endl;

    cout << "printName w/ p1: ";
    p1.printName();
    cout << "printSSN w/ p1: ";
    p1.printSSN();
    cout << endl;
    cout << "printPersonInfo w/ p1: ";
    p1.printPersonInfo();
    */