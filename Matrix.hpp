#include <iostream>
#include<vector>
#include<string>
using namespace std;
 
    namespace zich {
        class Matrix{
       //   private:
          // int row;
          // int col;
            public:
            
          //  std::vector<double>&data;
            Matrix(int row , int col);
            ~Matrix();
            Matrix(const std::vector<double> &data, int row , int col );
             // the + status 
            Matrix operator +(const Matrix &mat);
            void   operator +=(const Matrix &mat);
            Matrix &operator++();
            Matrix operator++(int);
           friend Matrix operator +(const Matrix &mat);
            // - status
            Matrix operator -(const Matrix &mat);
            void  operator -=(const Matrix &mat);
            Matrix &operator--();
            Matrix operator--(int);
           friend  Matrix operator -(const Matrix &mat);
             // * status
            Matrix operator *(const Matrix &mat);
            friend Matrix operator*(double n , const Matrix& mat);
            Matrix operator *(double n);
            void  operator *=(double n);
            void  operator *=(const Matrix&mat);
            friend Matrix operator *(const Matrix &mat);
             // bool func
            bool operator >(const Matrix&mat);
            bool operator<(const Matrix&mat);
            bool operator ==(const Matrix &mat);
            bool operator !=(const Matrix &mat);
            bool operator <=(const Matrix &mat);
            bool operator >=(const Matrix &mat);
            friend std::ostream& operator <<(std:: ostream& os , const Matrix &cout); 
            friend std::istream& operator >> (std::istream &is , Matrix &cin);
        };
    }

             

