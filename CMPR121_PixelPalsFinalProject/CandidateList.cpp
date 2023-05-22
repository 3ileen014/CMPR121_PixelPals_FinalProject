#include "CandidateList.h"
#include <string>
#include <iostream>

CandidateList::CandidateList() 
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

void CandidateList::addCandidate(const CandidateType newCand) 
{
	if (count == 0) {
		first = new Node();
		first->setCandidate(newCand);
		last = first;
	}
	else {
		last = new Node();
		last->setCandidate(newCand);
	}
	count++;
}