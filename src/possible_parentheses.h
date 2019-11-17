#include <list>

// n: size of the problem
// result: a list of string, each string represents a case of valid parentheses of size n


void _possibleParenthesisHW(int n, int open, int close, std::list<std::string>& result) {
	
	static std::string tempResult;

	if (n == close) {
		result.push_back(std::string(tempResult));
		return;
	}//end if

	if (open > close) {//1>0, 1>1false, 2 >1
		tempResult.push_back('}');//add,add
		_possibleParenthesisHW(n, open, close + 1, result);
		tempResult.pop_back();
	}

	if (open < n) {//0<2, 1<2, 2<2
		tempResult.push_back ('{');//add,add
		_possibleParenthesisHW( n, open + 1, close, result);
		tempResult.pop_back();
	}
	
}//end of test

void possibleParenthesis(int n, std::list<std::string> & result)
{
    // homework
		// homework
	if (n > 0) {
		_possibleParenthesisHW(n, 0, 0, result);
	}//end if 
	for (auto const& i : result) {
		std::cout << i << "\n";
	}//end for
}

