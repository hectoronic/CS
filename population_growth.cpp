//"Name: Hector de Perio "
//"IDE and Compiler: Xcode 5"
//"Display world populations from 2014 up to 2089, and the growth rate per year"


//libraries

#include <iomanip>
using std::setw;

#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <string>
using std::string;

int main()
{
  //Outputs identifying information, and purpose of program
  cout<<"Name: Hector de Perio "<<endl;
  cout<<"IDE and Compiler: Xcode 5"<<endl;
  cout<<"Compiled: "<<__DATE__<<" at " <<__TIME__<<endl<<endl;
  cout<< "Display world populations from now up to 75 years, and the growth rate per year"<<endl<<endl;

  //world population estimate as of 2013 = 7,000,000,000 or seven billion
  double growthrate = 0.02; //2% world population growth rate
  long long people = 7000000000L;
  long long yearlyincrease = 0;

  //table label
  cout << "Year       Population       Increase/Yr" << endl;

  int y = 2014; //current year
  int z = 2090; //display 75 years of growth and population; will display as 2089 on output

  while(y<z)
  {
    //table aligned format and output results
    cout.setf(ios::left, ios::adjustfield);
    cout <<setw(11)<<y;
    cout <<setw(11)<<people;
    cout.setf(ios::right,ios::adjustfield);
    cout <<setw(17)<< yearlyincrease<<endl;
    yearlyincrease = people*growthrate;
    people += yearlyincrease;
    y++; //increase y until y=2089, or 75 years from 2014
  }
}
