#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "student.hpp"
// tests for exercise 1

void printS(Student s);

TEST_CASE("Ex1 ", "[Test 1]")
{
	int id, flag;
	string names[N] = {"John", "Greg", "Bill", "Amy", "Kurt"};
	Student s[N];
	vector<double> sc(NUM_COURSES);

	for (int i = 0; i < N; i++)
	{
		sc.assign(NUM_COURSES, i * 100);
		s[i] = Student((i + 1) * 10, names[i], sc);
	}
	flag = 1;
	for (int i = 0; i < N; i++)
	{
		printStudent(s[i]);
	}

	if (greaterScore(s[4], s[0]))
	{
		cout << "s[4] is Greater Score than s[0] \n";
	}
	REQUIRE(flag == 1);
	REQUIRE(greaterScore(s[4], s[0]) == 1);
}
