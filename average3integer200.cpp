/*
   The sum && average of three Integer.
   1.Start.
   2.Take three input.
   3.Make sum of three number.
   4.Make average of three number.
   5.Show average in output.
   5.End.
 */
 #include <iostream>
using namespace std;
//This function will produce the Average of number's.
//The function that Takes Something,Returns Nothing.
void average(int, int, int); //Globar Declaration.
int main()
{
        //void average(int, int, int); --> Local Declaration.
        int num1, num2, num3;
        cout <<"Enter three number to find Average :" <<endl;
        cin >> num1 >> num2 >> num3;
        average(num1, num2, num3); //Function call with actual argument && call by value.

}

//Function Defination.
void average(int num1, int num2, int num3){ 
        float average, sum;
        sum = num1+num2+num3;
        average = sum/3;
        cout << "Average is = " << average;
}
