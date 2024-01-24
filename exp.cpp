#include <iostream>
#include <cmath>
using namespace std;
class calculator
{   public:

        void addition()
        {
            int num;
            int sum=0;
            cout<<"Enter the amount of numbers you want to add : ";
            cin>>num;

            if (num==0)
            {
                cout<<"No number is provided to add"<<endl;
            }
            else if (num==1)
            {
                int x;
                cout<<"Enter the number : ";
                cin>>x;
                cout<<"Only one number is provided,then the Result is : "<<x<<endl;
            }
            else
            {
                int add[num];
                for (int i=1;i<=num;i++ )
                {
                    cout<<"Enter the number "<<i<<": ";
                    cin>>add[i];
                }
                for( int i=1; i<=num; i++)
                {
                    sum+=add[i];
                }

                cout<<"The addition of the given "<<num<<" numbers is : "<<sum<<endl;
            }
        }
        void subtraction()
        {
            int a,b;
            cout<< "Enter the First number : ";
            cin>>a;
            cout<<"Enter the number which has to be subratcted from First number : ";
            cin>>b;
            cout<<"The Result of "<<a<<"-"<<b<<" is : "<<a-b<<endl;
        }
        void multiplication()
        {
            int num;
            int product=1;
            cout<<"Enter the amount of numbers you want to multiply : ";
            cin>>num;

            if (num==0)
            {
                cout<<"No number is provided to multiply";
            }
            else if (num==1)
            {
                int y;
                cout<<"Enter the Number : ";
                cin>>y;
                cout<<"Only one number is provided,then the product is : "<<y<<endl;
            }
            else
            {
                int mull[num];
                for(int i=1;i<=num;i++)
                {
                  cout<<"Enter the number "<<i<<": ";
                  cin>>mull[i];
                }

                for(int i=1;i<=num;i++)
                {
                    product*=mull[i];
                }

                cout<<"The multiplication of the given "<<num<<" is : "<<product;
            }

        }
        void division()
        {
            int c,d;
            cout<<"Enter the Numerator : ";
            cin>>c;
            cout<<"Enter the Denomminator: ";
            cin>>d;
            double result=double(c)/double(d);
            if(d==0)
            {
                cout<<"The division is not possible,The result is infinity."<<endl;
            }
            else if (d<0)
            {
                cout<<"The division is possible, but the result is in negative."<<endl;
                cout<<"The value of the result is : "<<result<<endl;
            }
            else
            {
                cout<<"The result is : "<<result<<endl;
            }

        }

        void cosine()
        {
            double angle;
            cout << "Enter an angle in radians: ";
            cin >> angle;
            double result = cos(angle);
            cout << "Cosine of " << angle << " radians is : " << result << endl;
        }

        void sine()
        {
            double angle;
            cout << "Enter an angle in radians: ";
            cin >> angle;
            double result = sin(angle);
            cout << "Sine of " << angle << " radians is : " << result << endl;
        }

        void tangent()
        {
            double angle;
            cout << "Enter an angle in radians: ";
            cin >> angle;
            double result = tan(angle);
            cout << "Tangent of " << angle << " radians is : " << result << endl;
        }

        void secant()
        {
            double angle;
            cout << "Enter an angle in radians: ";
            cin >> angle;
            double result = 1.0 / cos(angle);
            cout << "Secant of " << angle << " radians is : " << result << endl;
        }

        void cosecant()
        {
            double angle;
            cout << "Enter an angle in radians: ";
            cin >> angle;
            double result = 1.0 / sin(angle);
            cout << "Cosecant of " << angle << " radians is : " << result << endl;
        }

        void cotangent()
        {
            double angle;
            cout << "Enter an angle in radians: ";
            cin >> angle;
            double result = 1.0 / tan(angle);
            cout << "Cotangent of " << angle << " radians is: " << result << endl;
        }

        void logarithm()
        {
            double num;
            cout << "Enter the number to calculate the natural logarithm (base e): ";
            cin >> num;
            if (num > 0)
            {
                double result = log(num);
                cout << "Natural logarithm of " << num << " is : " << result << endl;
            }
            else
            {
            cout << "Invalid input. Please enter a positive number for the natural logarithm." << endl;
            }
        }

        void sineInverse()
        {
            double radians;
            cout << "Enter an angle in radians to calculate the sine inverse: ";
            cin >> radians;
            double result = asin(radians);
            cout << "Sine inverse of " << radians << " radians is: " << result << " radians" << endl;
        }

        void cosineInverse()
        {
            double radians;
            cout << "Enter an angle in radians to calculate the cosine inverse: ";
            cin >> radians;
            double result = acos(radians);
            cout << "Cosine inverse of " << radians << " radians is: " << result << " radians" << endl;
        }

        void tangentInverse()
        {
            double radians;
            cout << "Enter an angle in radians to calculate the tangent inverse: ";
            cin >> radians;
            double result = atan(radians);
            cout << "Tangent inverse of " << radians << " radians is: " << result << " radians" << endl;
        }

        void cosecantInverse()
        {
            double radians;
            cout << "Enter an angle in radians to calculate the cosecant inverse: ";
            cin >> radians;
            double result = asin(1.0 / sin(radians));
            cout << "Cosecant inverse of " << radians << " radians is: " << result << " radians" << endl;
        }

        void secantInverse()
        {
            double radians;
            cout << "Enter an angle in radians to calculate the secant inverse: ";
            cin >> radians;
            double result = acos(1.0 / cos(radians));
            cout << "Secant inverse of " << radians << " radians is: " << result << " radians" << endl;
        }

        void cotangentInverse()
        {
            double radians;
            cout << "Enter an angle in radians to calculate the cotangent inverse: ";
            cin >> radians;
            double result = atan(1.0 / tan(radians));
            cout << "Cotangent inverse of " << radians << " radians is: " << result << " radians" << endl;
        }
        void exponent()
        {
            double base, exponent;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the exponent: ";
            cin >> exponent;

            double result = pow(base, exponent);

            cout << base << " raised to the power of " << exponent << " is: " << result << endl;
        }

        bool exit()
        {
            char continueChoice;
            cout << "Do you want to use the calculator again? (y/n): ";
            cin >> continueChoice;

            if (continueChoice != 'y' && continueChoice != 'Y')
            {
                cout << "Exiting the program." << endl;
                return false;
            }
            return true;
        }

};




int main()
{
    calculator cal;

        cout <<"******************** Welcome to the Calculator *********************              "<<endl;
        cout << "       1.  Addition" << endl;
        cout << "       2.  Subtraction" << endl;
        cout << "       3.  Multiplication" << endl;
        cout << "       4.  Division" << endl;
        cout << "       5.  Cosine" << endl;
        cout << "       6.  Sine" << endl;
        cout << "       7.  Tangent" << endl;
        cout << "       8.  Secant" << endl;
        cout << "       9.  Cosecant" << endl;
        cout << "       10. Cotangent" << endl;
        cout << "       11. Logrithm" <<endl;
        cout << "       12. SineInverse" << endl;
        cout << "       13. cosineInverse" << endl;
        cout << "       14. TangentInverse" << endl;
        cout << "       15. CosecantInverse" << endl;
        cout << "       16. SecantInverse" << endl;
        cout << "       17. CotangentInverse" << endl;
        cout << "       18. Exponent"<< endl;
        cout << "       19. Exit from the Program" << endl << endl<<endl;


bool continueProgram=true;
while (continueProgram)
    {


        int choice;
        cout << "Enter the number of your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cal.addition();
                break;
            case 2:
                cal.subtraction();
                break;
            case 3:
                cal.multiplication();
                break;
            case 4:
                cal.division();
                break;
            case 5:
                cal.cosine();
                break;
            case 6:
                cal.sine();
                break;
            case 7:
                cal.tangent();
                break;
            case 8:
                cal.secant();
                break;
            case 9:
                cal.cosecant();
                break;
            case 10:
                cal.cotangent();
                break;
            case 11:
                cal.logarithm();
                break;
            case 12:
                cal.sineInverse();
                break;
            case 13:
                cal.cosineInverse();
                break;
            case 14:
                cal.tangentInverse();
                break;
            case 15:
                cal.cosecantInverse();
                break;
            case 16:
                cal.secantInverse();
                break;
            case 17:
                cal.cotangentInverse();
                break;
            case 18:
                cal.exponent();
                break;
            case 19:
                continueProgram = cal.exit();
                break;
            default:
            cout<<"Invalid input. Please enter a valid choice. "<<endl;
        }
    }

    return 0;
}
