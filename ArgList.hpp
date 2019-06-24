#ifndef __SAP_ARGLIST_INCLUDED__
#define __SAP_ARGLIST_INCLUDED__

#include <vector>
#include <string>
#include <utility>

namespace sap {
	class ArgList {
		private:
		std::vector<std::string> args;
		std::vector<bool> pflags;
		public:
		std::string operator[] (unsigned int pos);
		ArgList(int,char**);
		bool testCount(std::string expr);
		unsigned int get(std::string expr,bool setFlag = true);
		std::pair<unsigned int,unsigned int> getPair(std::string expr1,std::string expr2,bool setFlag = true);
		std::vector<unsigned int> getAll(std::string expr,bool setFlag = true);
		std::vector<std::pair<unsigned int,unsigned int>> getAllPairs(std::string expr1,std::string expr2,bool setFlag = true);
		bool getProcessedFlag(unsigned int pos);
		void setProcessedFlag(unsigned int pos,bool val);
	};
} // namespace sap

#endif // __SAP_ARGLIST_INCLUDED__
