#include<iostream>
using namespace std;
template<typename T>
class Calculator{
    T num1, num2;
    public:
    Calculator(T x, T y){
        num1 = x;
        num2 = y;
    }
    T add(){
        return num1+num2;
    }
    T subtract()
    {
        return num1-num2;
    }
    T multiply()
    {
        return num1 * num2;
    }
    T divide()
    {
        if(num2==0){
            cout<<"ERROR"<<endl;
            return 0;
        }
        else{
            return num1/num2;
        }
    }
};
int main(){
    Calculator<int>calci(20,10);
    cout<<"Integer Calculator"<<endl;
    cout<<"Addition : "<<calci.add()<<endl;
    cout<<"Subtraction : "<<calci.subtract()<<endl;
    cout<<"Multiplication : "<<calci.multiply()<<endl;
    cout<<"Division : "<<calci.divide()<<endl;

    Calculator<double> calci2(15.5, 0.0);
 cout << "\nDouble Calculator" << endl;
 cout << "Addition: " << calci2.add() << endl;
 cout << "Subtraction: " << calci2.subtract() << endl;
 cout << "Multiplication: " << calci2.multiply() << endl;
 cout << "Division: " << calci2.divide() << endl;
 return 0;
}