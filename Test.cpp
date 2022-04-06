#include "doctest.h"
#include "Matrix.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace zich;
using namespace std;
  
  TEST_CASE("bad"){
    bool flag;
      std::vector<double> arr1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
      Matrix a{arr1, 3, 3}; 
      std::vector<double> arr2 = {3, 0, 0,
       0, 3, 0, 
       0, 0, 3,
       5,6,5};
      Matrix b{arr2 ,4,3};
      std::vector<double> arr3 = {1, 0, 0,
     0, 1, 0,
      0, 0, 1};
      Matrix q{arr3, 3, 3}; 
      std::vector<double> arr4 = {3, 0, 0,
       0, 3, 0, 
       0, 0, 3};
      Matrix d{arr4 ,3,3};
      std::vector<double> arr5 = {4, 0, 0,
       0, 4, 0, 
       0, 0, 4,};
      Matrix c{arr5 ,3,3};
      std::vector<double> arr6 = {-2, 0, 0,
       0, -2, 0, 
       0, 0, -2,};
      Matrix t{arr6 ,3,3};
      std::vector<double> arr7 = {1, 0, 0,
     0, 1, 0,
      0, 0, 1};
      Matrix n{arr7, 3, 3}; 
      CHECK_THROWS(Matrix mat(arr1,-3,3));
      CHECK_THROWS(Matrix mat(arr2 ,6,6));
      CHECK_THROWS(flag= (a ==b));
      CHECK_THROWS((a+=b));
      CHECK_THROWS((a+b));
      CHECK_THROWS((a*b));
      CHECK_THROWS(flag=(arr2>arr1));
      CHECK_THROWS(flag=(arr2<arr1));
      CHECK_THROWS(flag=(arr2!=arr1));
      CHECK_THROWS(flag=(arr2==arr1));
      CHECK_THROWS(flag=(arr2>=arr1));
      CHECK_THROWS(flag=(arr2<=arr1));
      CHECK_THROWS((a-b));
      CHECK_THROWS(Matrix mat(arr6,-3,3));
      CHECK_THROWS(Matrix mat(arr6,-3,-3));
      CHECK_THROWS(Matrix mat(arr6,3,3));
      CHECK_THROWS(Matrix mat(arr3 ,6,6));
      CHECK_THROWS(flag= (n ==b));
      CHECK_THROWS((q+=b));
      CHECK_THROWS((t+b));
      CHECK_THROWS((b*d));
      CHECK_THROWS(flag=(arr7>arr1));
      CHECK_THROWS(flag=(arr4<arr2));
      CHECK_THROWS(flag=(arr5!=arr4));
      CHECK_THROWS(flag=(arr6==arr2));
      CHECK_THROWS(flag=(arr4>=arr7));
      CHECK_THROWS(flag=(arr3<=arr3));
      CHECK_THROWS((a-b));
  } 
  TEST_CASE("++/--"){
    std::vector<double> arr1 = {1, 0, 0,
     0, 1, 0,
      0, 0, 1};
      Matrix a{arr1, 3, 3}; 
       std::vector<double> arr2 = {3, 0, 0,
       0, 3, 0, 
       0, 0, 3};
      Matrix b{arr2 ,3,3};
       std::vector<double> arr3 = {2, 1, 1,
       1, 2, 1, 
       1, 1, 2};
      Matrix c{arr3 ,3,3};
        std::vector<double> arr4 = {4, 1, 1,
       1, 4, 1, 
       1, 1, 4};
      Matrix d{arr2 ,3,3};
      a++;
      // CHECK((a == Matrix(c, 3, 3)));
      // b++;
      // CHECK((b == Matrix(d, 3, 3)));
  }
  TEST_CASE("good"){

    bool flag;
    std::vector<double> arr3 = {1, 0, 0,
     0, 1, 0,
      0, 0, 1};
      Matrix q{arr3, 3, 3}; 
      std::vector<double> arr4 = {3, 0, 0,
       0, 3, 0, 
       0, 0, 3};
      Matrix w{arr4 ,3,3};
      std::vector<double> arr5 = {4, 0, 0,
       0, 4, 0, 
       0, 0, 4,};
      Matrix c{arr5 ,3,3};
      std::vector<double> arr6 = {-2, 0, 0,
       0, -2, 0, 
       0, 0, -2,};
      Matrix d{arr6 ,3,3};
      std::vector<double> arr7 = {1, 0, 0,
     0, 1, 0,
      0, 0, 1};
      Matrix n{arr7, 3, 3}; 

     
      CHECK(((n>d)==true));
      CHECK(((n<c)==true));
    
      CHECK((q>=n)==true);
  }