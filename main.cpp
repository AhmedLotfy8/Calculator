#include <iostream>
#include <Cmath>
using namespace std;

int X;
void _clear()
{
    while (!(cin >> X)) {
        cout << "invalid input, try again: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
}


int main()
{

    double Volume, TSA, LSA, Perimeter, Circumference, Area, length, width, height, radius, number;
    char Answer;

    cout << "Welcome to shapes calculator!!" << endl;
    cout << "-------------------------------" << endl;

    while (true) {

//      while (true) {
        cout << "Press (2) for 2D\n"
        "Press (3) for 3D\n";
         _clear();

        if (X==2) {  //2D

            cout << "Square (1)\n"
            "Rectangle (2)\n"
            "Circle (3)\n"
            "Any regular polygon (4)"<< endl;
            _clear();



            if (X==1) {  //square
                cout << "Perimeter (1)\n"
                "Area (2)\n";
                _clear();

                    if (X==1) {
                        cout << "Enter length: ";
                        cin >> length;
                        Perimeter= length*4;
                        cout << "Perimeter= " << Perimeter << endl;
                        break; }


                    else if (X==2) {
                        cout << "Enter length: ";
                        cin >> length;
                        Area= pow(length, 2);
                        cout << "Area= " << Area << endl; }

                    else {
                        cout << "Input error!" << endl;
                        _clear(); }

        }
            else if (X==2) { //rectangle
                cout << "Perimeter (1)\n"
                "Area (2)\n";
                _clear();

                    if (X == 1) {
                        cout << "Enter length: ";
                        cin >> length;
                        cout << "Enter width: ";
                        cin >>  width;
                        Perimeter= 2*(length+width);
                        cout << "Perimeter= ";
                        cout << Perimeter << endl; }


                    else if (X==2) {
                        cout << "Enter length: ";
                        cin >> length;
                        cout << "Enter width: ";
                        cin >>  width;
                        Area= length*width;
                        cout << "Area= ";
                        cout << Area << endl; }

                    else
                        cout << "Input error!" << endl;

                    }

            else if (X==3) {  //circle
                cout << "Circumference (1)\n"
                "Area (2)\n";
                _clear();

                if (X==1) {
                   cout << "Enter Radius: ";
                   cin >> radius;
                   Circumference= 2*(M_PI)*radius;
                   cout << "Circumference= ";
                   cout << Circumference << endl; }

                else if (X==2) {
                    cout << "Enter Radius: ";
                    cin >> radius;
                    Area= (M_PI)*(pow(radius, 2));
                    cout << "Area= ";
                    cout << Area << endl; }

                else
                    cout << "Input error!" << endl;
    }
            else if (X==4) {  //Any polygon
                cout << "Perimeter (1)\n"
                "Area (2)\n";
                _clear();


                if (X==1) {
                    cout << "Enter length: ";
                    cin >> length;
                    cout << "Enter number of sides: ";
                    cin >> number;
                    Perimeter= length*number;
                    cout << "Perimeter= ";
                    cout << Perimeter << endl; }


                else if (X==2) {
                    cout << "Enter length: ";
                    cin >> length;
                    cout << "Enter number of sides: ";
                    cin >> number;

                    while (true) {
                        if (number<3) {
                            cout << "Math error! Number must be higher than 3" << endl;
                            cout << "Try again: ";
                            cin >> number; }

                        else if ((int)number!=number){
                            cout << "Math error! Invalid number of sides!" << endl;
                            cout << "Try again: ";
                            cin >> number; }

                        else
                            break; }

                    Area= ((number*pow(length, 2))/4)*(1/tan((M_PI)/(number)));
                    cout << "Area= ";
                    cout << Area << endl;
            }
                 else
                      cout << "Input error!" << endl; }

        else
            cout << "Input error!" << endl;
           }

        else if (X==3) {  // 3D
            cout << "Cube (1)\n"
                "Cuboid (2)\n"
                "Sphere (3)" << endl;
                _clear();

            if (X==1) {  // Cube
                cout << "Lateral surface area  (1)\n"
                "Total surface area (2)\n"
                "Volume (3)\n";
                _clear();

                if (X==1) {
                    cout << "Enter length: ";
                    cin >> length;
                    LSA= 4*pow(length, 2);
                    cout << "Lateral surface area= ";
                    cout << LSA << endl; }

                else if (X==2) {
                    cout << "Enter length: ";
                    cin >> length;
                    TSA= 6*pow(length, 2);
                    cout << "Total surface area= ";
                    cout << TSA << endl; }


                else if (X==3) {
                    cout << "Enter length: ";
                    cin >> length;
                    Volume= pow(length, 3);
                    cout << "Volume= ";
                    cout << Volume << endl; }

                else
                    cout << "Input error!" << endl;


}
            else if (X==2) {  //cubiod
                cout << "Lateral surface area  (1)\n"
                "Total surface area (2)\n"
                "Volume (3)\n";
                _clear();

                if (X==1) {
                    cout << "Enter length: ";
                    cin >> length;
                    cout << "Enter width: ";
                    cin >> width;
                    cout << "Enter height: ";
                    cin >> height;
                    LSA= 2*height*(length+width);
                    cout << "Lateral surface area= ";
                    cout << LSA << endl; }

                else if (X==2) {
                    cout << "Enter length: ";
                    cin >> length;
                    cout << "Enter width: ";
                    cin >> width;
                    cout << "Enter height: ";
                    cin >> height;
                    TSA= 2*(length*width + length*height + width*height);
                    cout << "Total surface area= ";
                    cout << TSA << endl; }


                else if (X==3) {
                    cout << "Enter length: ";
                    cin >> length;
                    cout << "Enter width: ";
                    cin >> width;
                    cout << "Enter height: ";
                    cin >> height;
                    Volume= length*width*height;
                    cout << "Volume= ";
                    cout << Volume << endl; }

                else
                    cout << "Input error!" << endl;
}

            else if (X==3) {  //sphere
                cout << "Lateral surface area  (1)\n"
                "Volume (2)\n";
                 _clear();

                if (X==1) {
                    cout << "Enter Radius: ";
                    cin >> radius;
                    LSA= 4*M_PI*(pow(radius, 2));
                    cout << "Lateral surface area= ";
                    cout << LSA << endl; }


                else if (X==2) {
                    cout << "Enter Radius: ";
                    cin >> radius;
                    Volume= (4*(M_PI)*(pow(radius, 3)))/3;
                    cout << "Volume= ";
                    cout << Volume << endl; }
               }

                else
                    cout << "Input error!" << endl;
}

//} // while yes

 cout << "Do you want to continue? (y/n)" << endl;
 cin >> Answer;

    while (true) {
        if (Answer=='y' || Answer=='n')
             break;

        else {
            cout << "Input error! Press (y/n)" << endl;
            cin >> Answer;}
 }

 if (Answer=='n') {
 cout << "Thank you!" << endl;
    break;}

} // MAIN WHILE

return 0;

}
