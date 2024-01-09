

/* 
 * File:   RealRecursionExamples.cpp
 * Author: default
 * 
 * Created on January 5, 2024, 11:09 AM
 */

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

#include "RealRecursionExamples.h"


int sumOfNaturalNumbers(int n) {
    if(n > 0) {
        return sumOfNaturalNumbers(n - 1) + n;
    }
    else {
        return 0;
    }
}

int sumOfNaturalNumbersLoop(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int sumOfNaturalNumbersFormula(int n) {
    return (n * (n + 1)) / 2;
}


int recursiveFactorial(int n) {
    if(n > 0) {
        return recursiveFactorial(n - 1) * n;
    }
    else {
        return 1;
    }
}
static int callsNormal = 0;
static int callsImproved = 0;
int powRecursive(int m, int n) {
    callsNormal++;
    if (n > 0) {
        return powRecursive(m, n - 1) * m;
    }
    return 1;
}

int improvedPowRecursive(int m, int n) {
    callsImproved++;
    if (n == 0) {
        return 1;
    }
    if(n % 2 == 0) {
        return improvedPowRecursive((m * m), n / 2);
    }
    else {
        return m * improvedPowRecursive((m * m), ((n - 1) / 2));
    }
}
void printCalls() {
    std::cout << "Normal Pow Iterations: " << callsNormal << std::endl;
    std::cout << "Improved Pow Iterations: " << callsImproved << std::endl;
}


double taylorRecursive(int x, int n) {
    static double power = 1;
    static double denominator = 1;
    double result = 0;
    if(n == 0) {
        return 1;
    }
    else {
        result = taylorRecursive(x, n - 1);
        power = power * x;
        denominator = denominator * n;
        return result + (power / denominator);
    }
}

double taylorLoop(double x, double n) {
    double sum = 1;
    for(;n > 0; n--) {
        sum = 1 + x / n * sum;
    }
    return sum;
}

double taylorHornerRecursive(double x, double n) {
    static double result = 1;
    
    if(n == 0) {
        return result;
    }
    result = 1 + x / n * result;
    return taylorHornerRecursive(x, n - 1);
}

int fibRecursive(int n) {
    if(n <= 1) {
        return n;
    }
//    if (n == 1) {
//        return 1;
//    }
//    if (n == 0) {
//        return 0;
//    }
    if( n > 1 ) {
        return fibRecursive(n - 2) + fibRecursive(n - 1);
    }
}

int fibArray[10] = {
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1   
};
std::vector<long long int> fibs;
void initFibs() {
    for(int i = 0; i < 100; i++) {
        fibs.emplace_back(-1);
    }
}
long long int fibRecursiveImproved(int n) {
    if(n <= 1) {
        fibs[n] = n;
        return n;
    }
    else {
        if(fibs[n - 2] == -1) {
            fibs[n - 2] = fibRecursiveImproved(n - 2);
        }
        if(fibs[n - 1] == -1) {
            fibs[n - 1] = fibRecursiveImproved(n - 1);
        }
    }
    fibs[n] = fibs[n - 2] + fibs[n - 1];
    return fibs[n - 2] + fibs[n - 1];
}

long long int combinations(long long int n, long long int r) {
    long long int t1 = 0, t2 = 0, t3 = 0;
//    long long int result = 1;
//    for(int i = n; i > r; i--) {
//        result *= i;
//        std::cout << "i: " << i<< ", " << result << std::endl;
//    }
//    std::cout << result << std::endl;
    t1 = recursiveFactorial(n);
    std::cout << "t1: " << t1 << std::endl;
    t2 = recursiveFactorial(r);
    std::cout << "t2: " << t2 << std::endl;
    t3 = recursiveFactorial(n - r);
    std::cout << "t3: " << t3 << std::endl;
    return t1 / (t2 * t3);
}

int recursiveCombinations(int n, int r) {
    if (n == 0 || r == n) {
        return 1;
    }
    else {
        return recursiveCombinations(n - 1, r - 1) + recursiveCombinations(n - 1, r);
    }
}

int improvedCombinatorika(int n, int k) {
    std::vector<int> numerator;
    std::vector<int> denominator;
    for(int i = 2; i <= n; i++) {
        numerator.emplace_back(i);  //O(n)
    }
    std::cout << std::endl;
    for(auto elem : numerator) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    for(int i = 2; i <= k; i++) {
        denominator.emplace_back(i); //O(n)
    }
    for(int i = 2; i <= (n - k); i++) {
        denominator.emplace_back(i);    //O(n)
    }
    std::vector<int>::reverse_iterator rIt = numerator.rbegin();
    std::vector<int>::reverse_iterator rIt2 = denominator.rbegin();
    while(rIt != std::rend(numerator)) {
        
        std::cout << "*rIt: " << *rIt << std::endl;
        if(*rIt != 1) {
            
            for(;rIt2 != denominator.rend(); rIt2++) {

                std::cout << "\t*rIt2: " << *rIt2 << std::endl;
                if((*rIt2 != 1 && *rIt != 1) && (*rIt % *rIt2 == 0)) {
                    std::cout << "\t\tDo Optimization!" << std::endl;
                    *rIt /= *rIt2;
                    std::cout << "\t\t*rIt: " << *rIt << std::endl;
                    *rIt2 = 1;
                    rIt2 = denominator.rbegin();
                            denominator.erase(std::remove_if(denominator.begin(), denominator.end(),   //range  7 47 2 2 23 2 2 11 7 3 2
                                    [](int elem) {                  //remove criterion      7 47 2 2 23 2 2 11 7 3 2 
                                        return elem == 1;
                                    }),
                     denominator.end());
                }
            }
        }
        rIt++;
        rIt2 = denominator.rbegin();
        numerator.erase(std::remove_if(numerator.begin(), numerator.end(),   //range
                                    [](int elem) {                  //remove criterion
                                        return elem == 1;
                                    }),
                     numerator.end());

    }
    std::cout << std::endl;
    
    rIt = numerator.rbegin(); 
    while(rIt != std::rend(numerator)) {
        std::cout << *rIt++ << " ";
    }
    std::cout << std::endl;
    int result = (std::accumulate(std::begin(numerator), std::end(numerator), 1, std::multiplies<int>()) / std::accumulate(std::begin(denominator), std::end(denominator), 1, std::multiplies<int>()));
    std::cout << "result: " << result << std::endl;
}

void towerOfHanoy(int discs, const std::string left, const std::string middle, const std::string right) {

    if ( discs > 0) {
        towerOfHanoy(discs - 1, left, right, middle );
        std::cout << "Move disc from: " << left << " to " << right << std::endl;
        towerOfHanoy(discs - 1, middle, left, right);
    }
    
}

void iterativeTowerOfHanoy() {
    int discs = 3;
    auto printMove = [](const std::string from, const std::string to) {
        std::cout << "From: " << from << " to: " << to << std::endl;
    };
    auto breakFromLoop = [](int val) -> bool {
        if(val == 0) {
            return true;
        }
        return false;
    };
    discs = powRecursive(2, discs) - 1; 
    while(discs > 0) {
        std::cout << "discs: " << discs << std::endl;
        if(discs % 2 == 0) {
            discs--;
            printMove("Left", "Right");
            if(breakFromLoop(discs)) {
                break;
            }
            discs--;
            printMove("Left", "Middle");
            if(breakFromLoop(discs)) {
                break;
            }
            discs--;
            printMove("Right", "Middle");
            if(breakFromLoop(discs)) {
                break;
            }
        }
        else {
            discs--;
            printMove("Left", "Middle");
            if(breakFromLoop(discs)) {
                break;
            }
            discs--;
            printMove("Left", "Right");
            if(breakFromLoop(discs)) {
                break;
            }
            discs--;
            printMove("Right", "Middle");
            if(breakFromLoop(discs)) {
                break;
            }
        }
    }
}