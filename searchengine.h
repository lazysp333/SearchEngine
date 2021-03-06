//searchengine.h

#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H

#include "searchprocessor.h"
#include "documentprocessor.h"
#include "rankprocessor.h"
#include "queryprocessor.h"
#include "indexer.h"
#include "hashindex.h"
#include "GeneralHashFunctions.h"
#include "page.h"

class SearchEngine {
private:
	SearchProcessor sp;
	DocumentProcessor dp;
	RankProcessor rp;
	QueryProcessor qp;
	Indexer* ii;
    std::string document;

public:
	SearchEngine();
	//SearchEngine(bool);
    void readPersistent();
    void querySearch(std::string);
	void parseDocument();
	void clearIndex();
	void printStats();
	void setIndexPtr(Indexer*);
	void addDocument(std::string);
    void close();
};
#endif
