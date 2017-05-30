
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>
#include <cmath>

#include "list.hpp"


TEST_CASE("default constructor, empty(), size()" )
{
	List<int> l1{};
	REQUIRE(l1.empty());
	REQUIRE(l1.size() == 0);
	l1.push_front(5);
	REQUIRE(l1.front() == 5);




}

TEST_CASE("push_front(), push_back")
{

	List<int> l1{};
	l1.push_front(5);
	l1.push_front(4);
	l1.push_front(3);
	l1.push_front(2);
	l1.push_front(1);
	REQUIRE(l1.front() == 1);
	REQUIRE(l1.back() == 5);	
	
	List<int> l2{};
	l2.push_back(5);
	REQUIRE(l2.front() == 5);
	REQUIRE(l2.back() == 5);
	l2.push_back(4);
	l2.push_back(3);
	l2.push_back(2);
	l2.push_back(1);
	REQUIRE(l2.front() == 5);
	REQUIRE(l2.back() == 1);
	


}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
