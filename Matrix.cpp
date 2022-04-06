#include<iostream>
#include"Matrix.hpp"
using namespace zich;
using namespace std;
  namespace zich{
     
      Matrix::Matrix(int row , int col){
          if (row <0){
              throw " ERROR";
          if (col <0){
              throw "ERROR";
          }    
          }
      }
      Matrix::Matrix(const std::vector<double> &data, int row , int col ){
           if (row <0){
              throw "ERROR";
          if (col <0){
              throw "ERROR";
          }    
          }
      }

      Matrix::~Matrix(){
         
      }
     Matrix Matrix::operator+(const Matrix &mat ){
          return mat;
      }
      Matrix& Matrix::operator++(){
          return ++*this;

       }
           Matrix Matrix::operator++(int){
               Matrix mat =*this;
               return *this;

           }
       Matrix Matrix::operator-(const Matrix &mat ){
          return mat;
      }
       Matrix& Matrix::operator--(){
          return --*this;

       }
           Matrix Matrix::operator--(int){
               Matrix mat =*this;
               return *this;

           }
        Matrix Matrix::operator*(const Matrix &mat ){
          return mat;
      }
      void Matrix ::operator+=(const Matrix &mat){

      }
       void Matrix ::operator-=(const Matrix &mat){

      }
      void Matrix ::operator*=(const Matrix &mat){

      }
      void Matrix ::operator*=(double n){

      }
       bool Matrix:: operator !=(const Matrix &mat){
        return true;
    } 
     bool Matrix:: operator >(const Matrix&mat){
         return true;
     }
     bool Matrix:: operator >=(const Matrix &mat ){
         return true;
     }
     bool  Matrix ::operator <(const Matrix&mat ){
         return true;
     }
     bool  Matrix ::operator <=(const Matrix&mat  ){
         return true;
     }
     bool Matrix:: operator ==(const Matrix &mat){
         return true;
     }   
    


      

       std::ostream& operator << (ostream& os, const Matrix& cout){
                os <<   cout << "," << "\n";
                return os;

        }
        std::istream& operator >> (istream& is, Matrix& cin){
               
                is >> cin ;
                return is;
        }
        Matrix operator *(double n , const Matrix &mat){
            return mat;

        }
        Matrix operator -(const Matrix &mat){
            return mat;
        }
         Matrix operator +(const Matrix &mat){
            return mat;
        }


  }