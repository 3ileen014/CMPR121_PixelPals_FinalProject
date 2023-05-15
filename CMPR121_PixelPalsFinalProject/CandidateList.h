#pragma once
#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "Node.h"

class CandidateList {
private:
	Node* first;
	Node* last;
	int count;
public:
	CandidateList();
};

#endif