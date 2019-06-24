#include "ArgList.hpp"

std::string sap::ArgList::operator[](unsigned int pos) {return args[pos];}

sap::ArgList::ArgList(int c, char** v) {
	for (int i = 1; i < c; i++) {
		args.push_back(std::string(v[i]));
		pflags.push_back(false);
	}
}