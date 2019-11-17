#include <list>

// n: size of the problem
// result: a list of string, each string represents a case of valid parentheses of size n


void _possibleParenthesisHW(int n, int open, int close, std::list<std::string>& result) {
	
	static std::string tempResult;
	
	if (n == close) {
		result.push_back(std::string(tempResult));
		return;
	}//end if
	//if there is more open then close add close
	if (open > close) {//1>0, 1>1false, 2 >1
		tempResult.push_back('}');//add,add
		_possibleParenthesisHW(n, open, close + 1, result);
		tempResult.pop_back();
	}
	//add open par while less then n
	if (open < n) {//0<2, 1<2, 2<2
		tempResult.push_back ('{');//add,add
		_possibleParenthesisHW( n, open + 1, close, result);
		tempResult.pop_back();
	}
	
}//end of test

void possibleParenthesis(int n, std::list<std::string> & result){
// homework
	if (n > 0) {//check if n is bigger then 0 if not print
		_possibleParenthesisHW(n, 0, 0, result);
	}//end if 
	for (auto const& i : result) {//test output by  printing
		std::cout << i << "\n";
	}//end for
}

