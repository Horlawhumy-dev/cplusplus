#include <bits/stdc++.h> 

using namespace std;


class ComplexNumbers {
    int real;
    int img;
    int option;

    
    public:

        ComplexNumbers() {}
        ComplexNumbers(int r, int im, int opt) {
            setReal(r);
            setImg(im);
            setOption(opt);
        }


    public:

        void setOption(int opt) {
            this -> option = opt;
        }

        void setReal(int real) {
            this -> real = real;
        }

        void setImg(int img) {
            this -> img = img;
        }

        int getReal() {
            return this -> real;
        }

        int getImg() {
            return this -> img;
        }

        ComplexNumbers plus(ComplexNumbers c2) {
            ComplexNumbers c3;
            int real = this ->  real + c2.getReal();
            int img = this -> img + c2.getImg();

            c3.setReal(real);
            c3.setImg(img);

            return c3;
        }

        ComplexNumbers multiply(ComplexNumbers c2) {
            ComplexNumbers c3;
            int real = (this -> real * c2.getReal()) - (this -> img * c2.getImg());
            int img = (this -> real * c2.getImg()) + (this -> img * c2.getReal());

            c3.setReal(real);
            c3.setImg(img);
            return c3;
        }


        void print(ComplexNumbers c1, ComplexNumbers c2) {
            ComplexNumbers c3;
            int real, img;
            
            switch (this -> option){
                case 1:
                    c3 = c1.plus(c2);
                    real = c3.getReal();
                    img = c3.getImg();
                    cout << "Result of the addition is: " << endl;
                    cout << real << " + " << img << "i" << endl;
                    break;
                
                case 2:
                    c3 = c1.multiply(c2);
                    real = c3.getReal();
                    img = c3.getImg();
                    cout << "Result of the addition is: " << endl;
                    cout << real << " + " << img << "i" << endl;
                    break;
                
                default:
                    cout << "Invalid option selected. Thank you!" << endl;
                    break;
                }
        
            
            }
};


int main() {

    // ios::sync_with_stdio(0);
    // cin.tie(0);

    cout << "Welcome to my basic complex calculator!" << endl;

    int r1, img1;

    int r2, img2;

    cout << "Enter your real and imaginary values for the two complex numbers following the next prompt" << endl;

    cout << "Enter first real value: ";
    cin >> r1;

    cout << "Enter your first imaginary value: ";
    cin >> img1;

    cout << "Enter your second real value: ";
    cin >> r2;

    cout << "Enter your second imaginary value: ";
    cin >> img2;

    int option;

    cout << "Enter 1: for addition or 2: for multiplication: ";

    cin >> option;

    ComplexNumbers  c1 = ComplexNumbers(r1, img1, option);
    ComplexNumbers c2 = ComplexNumbers(r2, img2, option);

    c1.print(c1, c2);
    return 0;
}
