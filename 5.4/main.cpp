#include <boost/random.hpp>
#include <ctime>
#include <map>
#include <iostream>

using namespace std;

int main() {
    boost::random::mt19937 myRng;
    myRng.seed(static_cast<boost::uint32_t> (std::time(0)));
    boost::random::uniform_int_distribution<int> six(1, 6);

    map<int, long> statistics;
    int outcome;

    int n = 1000000;

    for (int i = 0; i < n; i++)
    {
        outcome = six(myRng);
        statistics[outcome]++;
    }

    for (int i = 1; i <= 6; i++)
    {
        cout << "Trial " << i << " has " << (double) statistics[i] / (double) n * 100 << "% outcomes" << endl;
        cout << statistics[i] << endl;
    }

}