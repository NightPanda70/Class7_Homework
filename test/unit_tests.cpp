#include "gtest/gtest.h"
#include "possible_parentheses.h"

void showResult(std::list<std::string> & result) {
    for (std::list<std::string>::iterator i = result.begin(); i!=result.end(); ++i) {
        printf("%s\n", (*i).c_str());
    }
};

TEST(test_recursive, 1) {
    std::list<std::string> result;
    possibleParenthesis(1, result);

    // homework: add verification
	std::list<std::string> ex = { "{}" };//ex is example of what it should be

	for (std::list<std::string>::iterator it = result.begin(); it != result.end(); ++it) {
	ASSERT_EQ(*it, ex.front());//test if they equal
	ASSERT_TRUE(*it == ex.front());//test if true statement
	ex.pop_front();
	}//end for
	result.clear();

}

TEST(test_recursive, 2) {
    std::list<std::string> result;
    possibleParenthesis(2, result);

    // homework: add verification
	std::list<std::string> ex = { "{}{}","{{}}" };//ex is example of what it should be

	for (std::list<std::string>::iterator it = result.begin(); it != result.end(); ++it) {
	ASSERT_EQ(*it, ex.front());//test if they equal
	ASSERT_TRUE(*it == ex.front());//test if true statement
	ex.pop_front();
	}//end for
	result.clear();
}

TEST(test_recursive, 3) {
    std::list<std::string> result;
    possibleParenthesis(3, result);

    // homework: add verification
	//list of what should be in side the result
	std::list<std::string> ex = { "{}{}{}","{}{{}}","{{}}{}","{{}{}}","{{{}}}" };
	
	//test every string in the lists to see if they are equal
	for (std::list<std::string>::iterator it = result.begin(); it != result.end(); ++it) {
	ASSERT_EQ(*it, ex.front());//test if they equal
	ASSERT_TRUE(*it == ex.front());//test if true statement
	ex.pop_front();
	}//end for
	result.clear();
}

// and more
