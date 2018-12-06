// TestBSPDE1.cpp
//
// Testing 1 factor BS model.
//
// (C) Datasim Education BV 2005-2011
//
// I do not have Excel, similiar to the last project, I wrote the code to the best of my ability.
#include "FDMDirector.hpp"

#include <iostream>
#include <string>
using namespace std;

#include "ExcelDriverLite.hpp"

namespace BS // Black Scholes
{
	double sig = 0.3;
	double K = 65.0;
	double T = 0.25;
	double r = 0.08;
	double D = 0.0; // aka q

	double mySigma (double x, double t)
	{

		double sigmaS = sig*sig;

		return 0.5 * sigmaS * x * x;
	}

	double myMu (double x, double t)
	{
		
		return (r - D) * x;
	
	}

	double myB (double x, double t)
	{	
	
		return  -r;
	}

	double myF (double x, double t)
	{
		return 0.0;
	}

	double myBCL (double t)		
	{
		// Put
		return K *exp(-r * t);
	}

	double myBCR (double t)
	{
			
		// Put
		return 0.0; // P
	}

	double myIC (double x)
	{ // Payoff 
	
		// Put
		return max(K - x, 0.0);
	}

}


int main()
{
	using namespace ParabolicIBVP;

    vector<double> batch1;
    batch1.push_back(0.25);
    batch1.push_back(65.0);
    batch1.push_back(0.30);
    batch1.push_back(0.08);
    batch1.push_back(0.0);

    vector<double> batch2;
    batch2.push_back(1.0);
    batch2.push_back(100.0);
    batch2.push_back(0.2);
    batch2.push_back(0.0);
    batch2.push_back(0.0);

    vector<double> batch3;
    batch3.push_back(1.0);
    batch3.push_back(10);
    batch3.push_back(0.50);
    batch3.push_back(0.12);
    batch3.push_back(0.0);

    vector<double> batch4;

    batch4.push_back(30.0);
    batch4.push_back(100.0);
    batch4.push_back(0.30);
    batch4.push_back(0.08);
    batch4.push_back(0.0);

    vector<vector> batches;
    batches.push_back(batch1);
    batches.push_back(batch2);
    batches.push_back(batch3);
    batches.push_back(batch4);



    for (int i = 0; i < batches.size(); i++) {

        stringstream ss;
        string str;
        // Assignment of functions
        BS::sig = batches[i][0];
        BS::K = batches[i][1];
        BS::T = batches[i][2];
        BS::r = batches[i][3];
        BS::D = batches[i][4];


        int J = static_cast<int>(5 * BS::K);
        int N = 10000 - 1; // k = O(h^2) !!!!!!!!!

        double Smax = 5 * BS::K;            // Magix

        cout << "start FDM\n";
        FDMDirector fdir(Smax, BS::T, J, N);

        fdir.doit();

        cout << "Finished\n";

        // Have you Excel installed (ExcelImports.cpp)
        printOneExcel(fdir.xarr, fdir.current(), string("Value"));
    }
	return 0;
}
